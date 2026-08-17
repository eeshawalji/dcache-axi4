// hdl/axi_read_master.sv
//
// Fetch one cache line over AXI4.
//
// Cache-facing side is a simple valid/ready request and a one-cycle response
// carrying the whole assembled line. Everything AXI -- burst length encoding,
// beat counting, RLAST -- stays inside this module.
//
// Restrictions (documented, not accidental):
//   - full-width beats only: ARSIZE always equals the bus width. No narrow
//     transfers, so every byte lane is live on every beat.
//   - one outstanding transaction. ARID is tied to 0.
//   - INCR bursts only.
//   - a line never crosses a 4KB boundary, since LINE_BYTES <= 4096 and the
//     address is line-aligned.

`default_nettype none

module axi_read_master #(
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

  // ---- cache-facing response ----
  output var logic                    resp_valid,   // one cycle
  output var logic [LINE_BYTES*8-1:0] resp_line,

  // ---- AXI4 read address channel ----
  output var logic [AXI_ID_W-1:0]     m_axi_arid,
  output var logic [ADDR_W-1:0]       m_axi_araddr,
  output var logic [7:0]              m_axi_arlen,
  output var logic [2:0]              m_axi_arsize,
  output var logic [1:0]              m_axi_arburst,
  output var logic                    m_axi_arvalid,
  input  var logic                    m_axi_arready,

  // ---- AXI4 read data channel ----
  input  var logic [AXI_ID_W-1:0]     m_axi_rid,
  input  var logic [AXI_DATA_W-1:0]   m_axi_rdata,
  input  var logic [1:0]              m_axi_rresp,
  input  var logic                    m_axi_rlast,
  input  var logic                    m_axi_rvalid,
  output var logic                    m_axi_rready
);

  // ------------------------------------------------------------------
  // derived parameters
  // ------------------------------------------------------------------
  localparam int LINE_W    = LINE_BYTES * 8;
  localparam int BEATS     = LINE_W / AXI_DATA_W;          // 4 for 256/64
  localparam int OFFSET_W  = $clog2(LINE_BYTES);           // 5
  localparam int AXI_BYTES = AXI_DATA_W / 8;               // 8

  // $clog2(1) == 0, which is an illegal vector width. Same guard as WAY_IDX_W.
  localparam int BEAT_W    = (BEATS > 1) ? $clog2(BEATS) : 1;

  // ARLEN is beats MINUS ONE. ARSIZE is LOG2 of bytes per beat.
  // Two different encodings; both happen to be 3 in the default config,
  // which is a coincidence worth not relying on.
  localparam logic [7:0] ARLEN_FIXED  = 8'(BEATS - 1);
  localparam logic [2:0] ARSIZE_FIXED = 3'($clog2(AXI_BYTES));

  localparam logic [1:0] BURST_INCR = 2'b01;
  localparam logic [1:0] RESP_OKAY  = 2'b00;

  localparam logic [BEAT_W-1:0] LAST_BEAT = BEAT_W'(BEATS - 1);

  initial begin
    if (LINE_W < AXI_DATA_W)
      $fatal(1, "axi_read_master: line (%0d b) narrower than one beat (%0d b)",
             LINE_W, AXI_DATA_W);
    if (LINE_W % AXI_DATA_W != 0)
      $fatal(1, "axi_read_master: line (%0d b) not a whole number of beats (%0d b)",
             LINE_W, AXI_DATA_W);
    if (BEATS > 256)
      $fatal(1, "axi_read_master: %0d beats exceeds the AXI4 limit of 256", BEATS);
    if (LINE_BYTES > 4096)
      $fatal(1, "axi_read_master: line of %0d bytes can cross a 4KB boundary",
             LINE_BYTES);
  end

  // ------------------------------------------------------------------
  // state
  // ------------------------------------------------------------------
  typedef enum logic [1:0] {
    S_IDLE,   // waiting for a request
    S_AR,     // ARVALID up, waiting for ARREADY
    S_DATA,   // RREADY up, collecting beats
    S_RESP    // line register complete, pulse resp_valid
  } state_e;

  state_e state, state_n;

  logic [ADDR_W-1:0]     addr_q;
  logic [BEAT_W-1:0]     beat_cnt;

  // One register per beat. Avoids a variable part-select and mirrors the
  // generate style in data_array.sv.
  logic [AXI_DATA_W-1:0] line_q [BEATS];

  // ------------------------------------------------------------------
  // handshakes
  // ------------------------------------------------------------------
  // Every one of these is a function of `state` alone. None of them looks at
  // the corresponding READY/VALID coming back, because VALID must never
  // depend on READY -- that is the rule that deadlocks if broken.
  assign req_ready     = (state == S_IDLE);
  assign m_axi_arvalid = (state == S_AR);
  assign m_axi_rready  = (state == S_DATA);
  assign resp_valid    = (state == S_RESP);

  wire ar_accept = m_axi_arvalid && m_axi_arready;
  wire r_beat    = m_axi_rvalid  && m_axi_rready;

  // ------------------------------------------------------------------
  // AR payload: constant except for the address
  // ------------------------------------------------------------------
  assign m_axi_arid    = '0;                 // single outstanding transaction
  assign m_axi_araddr  = addr_q;
  assign m_axi_arlen   = ARLEN_FIXED;
  assign m_axi_arsize  = ARSIZE_FIXED;
  assign m_axi_arburst = BURST_INCR;

  // ------------------------------------------------------------------
  // next-state logic
  // ------------------------------------------------------------------
  always_comb begin
    state_n = state;
    unique case (state)
      S_IDLE:  if (req_valid)            state_n = S_AR;
      S_AR:    if (ar_accept)            state_n = S_DATA;
      // Cycles where RVALID is low simply don't take the transition. This is
      // what makes mid-burst stalls a non-event.
      S_DATA:  if (r_beat && m_axi_rlast) state_n = S_RESP;
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
    end else begin
      state <= state_n;

      // Latch and force line alignment. The cache should already have done
      // this; the assertion below catches it if not.
      if (state == S_IDLE && req_valid) begin
        addr_q   <= req_addr & ~ADDR_W'(LINE_BYTES - 1);
        beat_cnt <= '0;
      end

      if (r_beat) begin
        line_q[beat_cnt] <= m_axi_rdata;
        beat_cnt         <= beat_cnt + BEAT_W'(1);
      end
    end
  end

  // ------------------------------------------------------------------
  // flatten: line_q[b] occupies resp_line[b*AXI_DATA_W +: AXI_DATA_W]
  // ------------------------------------------------------------------
  genvar b;
  generate
    for (b = 0; b < BEATS; b++) begin : g_pack
      assign resp_line[b*AXI_DATA_W +: AXI_DATA_W] = line_q[b];
    end
  endgenerate

  // ------------------------------------------------------------------
  // checks -- simulation only, no synthesis cost
  // ------------------------------------------------------------------
`ifndef SYNTHESIS
  always_ff @(posedge clk) begin
    if (rst_n) begin
      if (state == S_IDLE && req_valid &&
          (req_addr & ADDR_W'(LINE_BYTES - 1)) != '0)
        $error("axi_read_master: unaligned request 0x%0h", req_addr);

      if (r_beat) begin
        if (m_axi_rresp != RESP_OKAY)
          $error("axi_read_master: beat %0d returned RRESP=%0d",
                 beat_cnt, m_axi_rresp);
        if (m_axi_rid != '0)
          $error("axi_read_master: beat %0d returned RID=%0d, expected 0",
                 beat_cnt, m_axi_rid);
        // The counter and the slave must agree on which beat is last.
        // Disagreement means ARLEN is wrong. Catch it here, not 300 cycles
        // later when the cache returns garbage.
        if (m_axi_rlast && beat_cnt != LAST_BEAT)
          $error("axi_read_master: RLAST on beat %0d, expected %0d",
                 beat_cnt, LAST_BEAT);
        if (!m_axi_rlast && beat_cnt == LAST_BEAT)
          $error("axi_read_master: beat %0d was last but RLAST was low",
                 beat_cnt);
      end
    end
  end
`endif

endmodule

`default_nettype wire
