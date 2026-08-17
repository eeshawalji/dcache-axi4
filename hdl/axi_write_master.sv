// hdl/axi_write_master.sv
//
// Write one cache line out over AXI4.
//
// Mirror of axi_read_master: the cache hands over a line-aligned address and
// the whole 256-bit line in one cycle, and gets a one-cycle completion pulse
// back. All burst mechanics stay inside.
//
// The important asymmetry with the read master: completion is NOT the last W
// beat handshaking. That only means the data reached the slave's write buffer.
// Completion is BVALID, which is the slave saying the write actually landed.
// Hence S_B, which has no counterpart on the read side.
//
// Restrictions (documented, not accidental):
//   - full-width beats only: AWSIZE always equals the bus width, WSTRB all ones.
//     A line writeback touches every byte, so byte masking is never needed here.
//   - one outstanding transaction. AWID tied to 0.
//   - INCR bursts only.
//   - AW and W are serialised: address accepted, then data streamed. Costs one
//     cycle per writeback versus overlapping them. See §0.3.

`default_nettype none

module axi_write_master #(
  parameter int ADDR_W     = 32,
  parameter int LINE_BYTES = 32,
  parameter int AXI_DATA_W = 64,
  parameter int AXI_ID_W   = 4
) (
  input  var logic                    clk,
  input  var logic                    rst_n,

  // ---- cache-facing request ----
  input  var logic                    req_valid,
  output var logic                    req_ready,
  input  var logic [ADDR_W-1:0]       req_addr,     // expected line-aligned
  input  var logic [LINE_BYTES*8-1:0] req_line,     // whole line, latched on accept

  // ---- cache-facing response ----
  output var logic                    resp_valid,   // one cycle: write complete
  output var logic                    resp_error,   // BRESP was not OKAY

  // ---- AXI4 write address channel ----
  output var logic [AXI_ID_W-1:0]     m_axi_awid,
  output var logic [ADDR_W-1:0]       m_axi_awaddr,
  output var logic [7:0]              m_axi_awlen,
  output var logic [2:0]              m_axi_awsize,
  output var logic [1:0]              m_axi_awburst,
  output var logic                    m_axi_awlock,
  output var logic [3:0]              m_axi_awcache,
  output var logic [2:0]              m_axi_awprot,
  output var logic                    m_axi_awvalid,
  input  var logic                    m_axi_awready,

  // ---- AXI4 write data channel ----
  output var logic [AXI_DATA_W-1:0]   m_axi_wdata,
  output var logic [AXI_DATA_W/8-1:0] m_axi_wstrb,
  output var logic                    m_axi_wlast,
  output var logic                    m_axi_wvalid,
  input  var logic                    m_axi_wready,

  // ---- AXI4 write response channel ----
  input  var logic [AXI_ID_W-1:0]     m_axi_bid,
  input  var logic [1:0]              m_axi_bresp,
  input  var logic                    m_axi_bvalid,
  output var logic                    m_axi_bready
);

  // ------------------------------------------------------------------
  // derived parameters -- identical to the read master
  // ------------------------------------------------------------------
  localparam int LINE_W    = LINE_BYTES * 8;
  localparam int BEATS     = LINE_W / AXI_DATA_W;          // 4
  localparam int AXI_BYTES = AXI_DATA_W / 8;               // 8

  localparam int BEAT_W    = (BEATS > 1) ? $clog2(BEATS) : 1;

  // AWLEN is beats MINUS ONE. AWSIZE is LOG2 of bytes per beat.
  localparam logic [7:0] AWLEN_FIXED  = 8'(BEATS - 1);
  localparam logic [2:0] AWSIZE_FIXED = 3'($clog2(AXI_BYTES));

  localparam logic [1:0] BURST_INCR = 2'b01;
  localparam logic [1:0] RESP_OKAY  = 2'b00;

  localparam logic [BEAT_W-1:0] LAST_BEAT = BEAT_W'(BEATS - 1);

  initial begin
    if (LINE_W < AXI_DATA_W)
      $fatal(1, "axi_write_master: line (%0d b) narrower than one beat (%0d b)",
             LINE_W, AXI_DATA_W);
    if (LINE_W % AXI_DATA_W != 0)
      $fatal(1, "axi_write_master: line (%0d b) not a whole number of beats (%0d b)",
             LINE_W, AXI_DATA_W);
    if (BEATS > 256)
      $fatal(1, "axi_write_master: %0d beats exceeds the AXI4 limit of 256", BEATS);
    if (LINE_BYTES > 4096)
      $fatal(1, "axi_write_master: line of %0d bytes can cross a 4KB boundary",
             LINE_BYTES);
  end

  // ------------------------------------------------------------------
  // state
  // ------------------------------------------------------------------
  typedef enum logic [2:0] {
    S_IDLE,   // waiting for a request
    S_AW,     // AWVALID up, waiting for AWREADY
    S_W,      // WVALID up, streaming beats, WLAST on the last one
    S_B,      // BREADY up, waiting for the slave to confirm
    S_RESP    // pulse resp_valid
  } state_e;

  state_e state, state_n;

  logic [ADDR_W-1:0]     addr_q;
  logic [BEAT_W-1:0]     beat_cnt;
  logic                  err_q;

  // One register per beat, same as the read master. Written all at once on
  // accept; read out one beat at a time in S_W.
  logic [AXI_DATA_W-1:0] line_q [BEATS];

  // ------------------------------------------------------------------
  // handshakes -- each a function of `state` alone
  // ------------------------------------------------------------------
  assign req_ready     = (state == S_IDLE);
  assign m_axi_awvalid = (state == S_AW);
  assign m_axi_wvalid  = (state == S_W);
  assign m_axi_bready  = (state == S_B);
  assign resp_valid    = (state == S_RESP);
  assign resp_error    = err_q;

  wire aw_accept = m_axi_awvalid && m_axi_awready;
  wire w_beat    = m_axi_wvalid  && m_axi_wready;
  wire b_accept  = m_axi_bvalid  && m_axi_bready;

  // ------------------------------------------------------------------
  // AW payload: constant except for the address
  // ------------------------------------------------------------------
  assign m_axi_awid    = '0;
  assign m_axi_awaddr  = addr_q;
  assign m_axi_awlen   = AWLEN_FIXED;
  assign m_axi_awsize  = AWSIZE_FIXED;
  assign m_axi_awburst = BURST_INCR;
  assign m_axi_awlock  = 1'b0;      // normal access
  assign m_axi_awcache = 4'b0011;   // normal, non-cacheable, bufferable
  assign m_axi_awprot  = 3'b000;    // unprivileged, secure, data

  // ------------------------------------------------------------------
  // W payload
  // ------------------------------------------------------------------
  assign m_axi_wdata = line_q[beat_cnt];

  // A line writeback always writes every byte. Byte masking is a write-through
  // concern (mem_req_be), not a writeback one.
  assign m_axi_wstrb = {AXI_BYTES{1'b1}};

  // WE generate WLAST; on the read side the slave generated RLAST and we only
  // checked it. There is no counter to catch us if this is wrong, which makes
  // it the write-side equivalent of the ARLEN off-by-one.
  assign m_axi_wlast = (beat_cnt == LAST_BEAT);

  // ------------------------------------------------------------------
  // next-state logic
  // ------------------------------------------------------------------
  always_comb begin
    state_n = state;
    unique case (state)
      S_IDLE: if (req_valid)              state_n = S_AW;
      S_AW:   if (aw_accept)              state_n = S_W;
      // Cycles where WREADY is low don't take the transition: the beat simply
      // hasn't happened, so nothing advances.
      S_W:    if (w_beat && m_axi_wlast)  state_n = S_B;
      // The last beat being accepted only means the slave has the data. This
      // state is where we find out whether the write actually completed.
      S_B:    if (b_accept)               state_n = S_RESP;
      S_RESP:                             state_n = S_IDLE;
      default:                            state_n = S_IDLE;
    endcase
  end

  // ------------------------------------------------------------------
  // registers
  // ------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      state    <= S_IDLE;
      beat_cnt <= '0;
      addr_q   <= '0;
      err_q    <= 1'b0;
    end else begin
      state <= state_n;

      if (state == S_IDLE && req_valid) begin
        // Mask to the line boundary in hardware; the assertion below shouts if
        // the caller should have done it already.
        addr_q   <= req_addr & ~ADDR_W'(LINE_BYTES - 1);
        beat_cnt <= '0;
        err_q    <= 1'b0;
        for (int i = 0; i < BEATS; i++)
          line_q[i] <= req_line[i*AXI_DATA_W +: AXI_DATA_W];
      end

      // Advance only on an accepted beat, never on a bare clock edge.
      if (w_beat && !m_axi_wlast)
        beat_cnt <= beat_cnt + BEAT_W'(1);

      if (b_accept)
        err_q <= (m_axi_bresp != RESP_OKAY);
    end
  end

  // ------------------------------------------------------------------
  // checks -- simulation only
  // ------------------------------------------------------------------
`ifndef SYNTHESIS
  always_ff @(posedge clk) begin
    if (rst_n) begin
      if (state == S_IDLE && req_valid &&
          (req_addr & ADDR_W'(LINE_BYTES - 1)) != '0)
        $error("axi_write_master: unaligned request 0x%0h", req_addr);

      if (b_accept) begin
        if (m_axi_bresp != RESP_OKAY)
          $error("axi_write_master: BRESP=%0d for 0x%0h", m_axi_bresp, addr_q);
        if (m_axi_bid != '0)
          $error("axi_write_master: BID=%0d, expected 0", m_axi_bid);
      end

      // A B response arriving while we are not expecting one means the slave
      // and this master disagree about how many transactions are outstanding.
      if (m_axi_bvalid && state != S_B)
        $error("axi_write_master: unexpected BVALID in state %s", state.name());
    end
  end
`endif

endmodule

`default_nettype wire
