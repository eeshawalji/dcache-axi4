module dcache #(
  parameter int CAPACITY_BYTES = 8192,
  parameter int LINE_BYTES     = 32,
  parameter int WAYS           = 4,
  parameter int ADDR_W         = 32,
  parameter int CPU_DATA_W     = 32,
  parameter int AXI_DATA_W     = 64,
  parameter int AXI_ID_W       = 4
) (
  input  logic clk,
  input  logic rst_n,
  
  // CPU request channel
  input  logic                    req_valid,
  output logic                    req_ready,    // deasserted = stall
  input  logic [ADDR_W-1:0]       req_addr,
  input  logic                    req_we,
  input  logic [CPU_DATA_W/8-1:0] req_be,
  input  logic [CPU_DATA_W-1:0]   req_wdata,

  // CPU response channel
  output logic                    resp_valid,  // reads response, writes don't
  output logic [CPU_DATA_W-1:0]   resp_rdata,

  // memory interface (week 1; replaced by AXI in week 3)
  // ---- AXI4 master ----
  output logic [AXI_ID_W-1:0]     m_axi_awid,
  output logic [ADDR_W-1:0]       m_axi_awaddr,
  output logic [7:0]              m_axi_awlen,
  output logic [2:0]              m_axi_awsize,
  output logic [1:0]              m_axi_awburst,
  output logic                    m_axi_awlock,
  output logic [3:0]              m_axi_awcache,
  output logic [2:0]              m_axi_awprot,
  output logic                    m_axi_awvalid,
  input  logic                    m_axi_awready,

  output logic [AXI_DATA_W-1:0]   m_axi_wdata,
  output logic [AXI_DATA_W/8-1:0] m_axi_wstrb,
  output logic                    m_axi_wlast,
  output logic                    m_axi_wvalid,
  input  logic                    m_axi_wready,

  input  logic [AXI_ID_W-1:0]     m_axi_bid,
  input  logic [1:0]              m_axi_bresp,
  input  logic                    m_axi_bvalid,
  output logic                    m_axi_bready,

  output logic [AXI_ID_W-1:0]     m_axi_arid,
  output logic [ADDR_W-1:0]       m_axi_araddr,
  output logic [7:0]              m_axi_arlen,
  output logic [2:0]              m_axi_arsize,
  output logic [1:0]              m_axi_arburst,
  output logic                    m_axi_arlock,
  output logic [3:0]              m_axi_arcache,
  output logic [2:0]              m_axi_arprot,
  output logic                    m_axi_arvalid,
  input  logic                    m_axi_arready,

  input  logic [AXI_ID_W-1:0]     m_axi_rid,
  input  logic [AXI_DATA_W-1:0]   m_axi_rdata,
  input  logic [1:0]              m_axi_rresp,
  input  logic                    m_axi_rlast,
  input  logic                    m_axi_rvalid,
  output logic                    m_axi_rready
);

  import dcache_pkg::*;

  // ---- derived ----
  localparam int SETS     = CAPACITY_BYTES / (LINE_BYTES * WAYS);
  localparam int OFFSET_W = $clog2(LINE_BYTES);
  localparam int INDEX_W  = $clog2(SETS);
  localparam int TAG_W    = ADDR_W - INDEX_W - OFFSET_W;
  localparam int BEATS    = (LINE_BYTES * 8) / AXI_DATA_W;
  localparam int BYTE_SEL_W = $clog2(CPU_DATA_W/8);   // bottom 2 bits of offset decide byte
  localparam int WORD_SEL_W = OFFSET_W - BYTE_SEL_W;  // top 3 bits of offset decide work

  // ---- sanity (simulation only) ----
  initial begin
    if (2**$clog2(WAYS) != WAYS)                    $fatal(1, "WAYS must be a power of 2");
    if (2**$clog2(SETS) != SETS)                    $fatal(1, "SETS must be a power of 2");
    if (BEATS > 256)                                $fatal(1, "burst exceeds AXI4 max");
    if (LINE_BYTES > 4096)                          $fatal(1, "line would cross 4KB boundary");
    if (LINE_BYTES*8 < AXI_DATA_W)                  $fatal(1, "line narrower than one AXI beat");
    if (2**$clog2(LINE_BYTES) != LINE_BYTES)        $fatal(1, "LINE_BYTES must be a power of 2");
    if (SETS * LINE_BYTES * WAYS != CAPACITY_BYTES) $fatal(1, "capacity not divisible by line*ways");
    if (SETS < 2)                                   $fatal(1, "SETS < 2 unsupported");
  end

  // ---- address decomposition ----
  logic [TAG_W-1:0]   s0_tag;
  logic [INDEX_W-1:0] s0_index;
  logic [OFFSET_W-1:0] s0_offset;

  assign s0_offset = req_addr[OFFSET_W-1:0];
  assign s0_index  = req_addr[OFFSET_W+INDEX_W-1 : OFFSET_W];
  assign s0_tag    = req_addr[ADDR_W-1 : OFFSET_W+INDEX_W];

  // logic declarations
  logic s1_valid;
  logic [TAG_W-1:0]        s1_tag;
  logic [INDEX_W-1:0]      s1_index;
  /* verilator lint_off UNUSEDSIGNAL */
  logic [OFFSET_W-1:0]     s1_offset;
  /* verilator lint_on UNUSEDSIGNAL */
  logic                    s1_we;
  logic [CPU_DATA_W/8-1:0] s1_be;
  logic [CPU_DATA_W-1:0]   s1_wdata;
  logic s0_accept;
  logic [INDEX_W-1:0] array_raddr;
  logic s1_can_advance, s0s1_conflict;
  logic [LINE_BYTES*8-1:0] wr_line;
  logic [LINE_BYTES-1:0]   wr_be;
  logic [INDEX_W-1:0]      wr_index;
  logic [WAYS-1:0]         way_we;
  logic cmd_fill;    // write a whole line from memory into the arrays
  logic cmd_store;   // write the CPU's bytes into the hitting way
  logic cmd_retire;  // stage 1 is finished; release it
  state_e state, next_state;
  logic                    rd_req_valid, rd_req_ready, rd_resp_valid;
  logic [ADDR_W-1:0]       rd_req_addr;
  logic [LINE_BYTES*8-1:0] rd_resp_line;

  logic                    wr_req_valid, wr_req_ready, wr_resp_valid, wr_resp_error;
  logic [ADDR_W-1:0]       wr_req_addr;


  assign s0_accept = req_valid && req_ready;  // conditions: cpu has request to make AND cache is ready to accept request

  // ---- stage boundaries ----
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      s1_valid <= 1'b0;
    end else if (s1_can_advance) begin
      s1_valid <= s0_accept;
      if (s0_accept) begin
        s1_tag    <= s0_tag;
        s1_index  <= s0_index;
        s1_offset <= s0_offset;
        s1_we     <= req_we;
        s1_be     <= req_be;
        s1_wdata  <= req_wdata;
      end
    end
  end

  // ---- tag array ----
  logic [TAG_W-1:0] s1_rd_tag [WAYS];
  logic [LINE_BYTES*8-1:0] s1_rd_line [WAYS];

  generate
    for (genvar w = 0; w < WAYS; w++) begin : g_way
      tag_array #(.WIDTH(TAG_W), .DEPTH(SETS)) u_tag (
        .clk   (clk),
        .raddr (array_raddr),
        .rdata (s1_rd_tag[w]),
        .we    (cmd_fill && way_we[w]),          
        .waddr (wr_index),
        .wdata (s1_tag)
      );
      data_array #(.WIDTH(LINE_BYTES*8), .DEPTH(SETS)) u_data (
        .clk(clk), 
        .raddr(array_raddr),
        .rdata(s1_rd_line[w]),
        .waddr(wr_index),
        .wbe(way_we[w] ? wr_be : '0),
        .wdata(wr_line)
      );
    end
  endgenerate

  logic [WAYS-1:0] valid_q [SETS];   // valid bits go in flops, not BRAM
  logic [WAYS-1:0] dirty_q [SETS];   // line differs from memory

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      for (int s = 0; s < SETS; s++) begin
        valid_q[s] <= '0;
        dirty_q[s] <= '0;
      end
    end else if (cmd_fill) begin
      valid_q[wr_index] <= valid_q[wr_index] |  way_we;
      dirty_q[wr_index] <= dirty_q[wr_index] & ~way_we;  // fresh from memory: clean
    end else if (cmd_store) begin
      dirty_q[wr_index] <= dirty_q[wr_index] |  way_we;  // CPU wrote it: dirty
    end
  end

  // ---- tag compare ----
  logic [WAYS-1:0] way_hit;
  logic            hit;
  always_comb begin
    for (int w = 0; w < WAYS; w++)
      way_hit[w] = valid_q[s1_index][w] && (s1_rd_tag[w] == s1_tag);
  end
  assign hit = s1_valid && |way_hit;  // syntax: | is reduction OR (is high if any bit in way_hit is high)

  // ---- way select (one-hot mux) ----
  logic [LINE_BYTES*8-1:0] hit_line;
  always_comb begin
    hit_line = '0;
    for (int w = 0; w < WAYS; w++)
      hit_line |= s1_rd_line[w] & {(LINE_BYTES*8){way_hit[w]}};  // syntax: equiv to hit_line = (line0 & mask0) | (line1 & mask1) | (line2 & mask2) | (line3 & mask3); (breakdown in notebook)
  end 

  // ---- victim selection ----
  // Week 5 replaces this with pseudo-LRU. With WAYS=1 there is no choice to make.
  logic [WAYS-1:0]         victim_sel;
  logic [TAG_W-1:0]        victim_tag;
  logic [LINE_BYTES*8-1:0] victim_line;
  logic                    victim_dirty;

  assign victim_sel = WAYS'(1);   // way 0

  always_comb begin
    victim_tag   = '0;
    victim_line  = '0;
    victim_dirty = 1'b0;
    for (int w = 0; w < WAYS; w++)
      if (victim_sel[w]) begin
        victim_tag   = s1_rd_tag[w];
        victim_line  = s1_rd_line[w];
        victim_dirty = valid_q[s1_index][w] && dirty_q[s1_index][w];
      end
  end 
  
  // ---- word select ----
  logic [WORD_SEL_W-1:0] s1_word;
  assign s1_word    = s1_offset[OFFSET_W-1 : BYTE_SEL_W];
  assign resp_rdata = hit_line[s1_word*CPU_DATA_W +: CPU_DATA_W];  // read hit, chooses the correct word (4 bytes) out of the line (32 bytes)

  // ---- facts ----
  logic rd_hit, st_hit, miss;
  assign rd_hit = (state == S_IDLE) && s1_valid && !s1_we && hit;
  assign st_hit = (state == S_IDLE) && s1_valid &&  s1_we && hit;
  assign miss   = (state == S_IDLE) && s1_valid && !hit;   // write-allocate: reads and writes take one path
  assign resp_valid = rd_hit;                     

  logic [LINE_BYTES-1:0]   store_be;
  logic [LINE_BYTES*8-1:0] store_line;

  assign store_line = {(LINE_BYTES*8/CPU_DATA_W){s1_wdata}};   // replicate

  always_comb begin
    store_be = '0;
    store_be[s1_word*(CPU_DATA_W/8) +: (CPU_DATA_W/8)] = s1_be;
  end

  // ---- FSM ----
  // 1. state register
  always_ff @(posedge clk)
    if   (!rst_n) state <= S_IDLE;
    else          state <= next_state;

  // 2. next-state logic (comb)
  always_comb begin
    next_state = state;
    unique case (state)
      S_IDLE:       if (miss)          next_state = victim_dirty ? S_EVICT_REQ : S_FILL_REQ;
      S_EVICT_REQ:  if (wr_req_ready)  next_state = S_EVICT_WAIT;
      S_EVICT_WAIT: if (wr_resp_valid) next_state = S_FILL_REQ;
      S_FILL_REQ:   if (rd_req_ready)  next_state = S_FILL_WAIT;
      S_FILL_WAIT:  if (rd_resp_valid) next_state = S_REPLAY;
      S_REPLAY:                        next_state = S_IDLE;
      S_LOOKUP:                        next_state = S_IDLE;
      default:                         next_state = S_IDLE;
    endcase
  end

  // 3. output / commands (comb) - the FSM's entire interface to the datapath
  assign cmd_fill   = (state == S_FILL_WAIT) && rd_resp_valid;
  assign cmd_store  = st_hit;
  assign cmd_retire = rd_hit || st_hit;

  assign rd_req_valid = (state == S_FILL_REQ);
  assign rd_req_addr  = {s1_tag, s1_index, {OFFSET_W{1'b0}}};

  assign wr_req_valid = (state == S_EVICT_REQ);
  assign wr_req_addr  = {victim_tag, s1_index, {OFFSET_W{1'b0}}};
    

  // ---- array write datapath (driven by commands) ----
  assign wr_index = s1_index;
  assign wr_line = cmd_fill ? rd_resp_line : store_line;
  assign wr_be    = cmd_fill ? '1          : store_be;
  assign way_we   = cmd_fill ? victim_sel
                  : cmd_store ? way_hit
                  : '0;

  assign array_raddr = s0_accept ? s0_index : s1_index;
  assign s1_can_advance = !s1_valid || cmd_retire;
  assign s0s1_conflict  = cmd_store && (s0_index == s1_index) && (s0_tag == s1_tag);
  assign req_ready      = s1_can_advance && !s0s1_conflict;

  // ---- AXI masters ----
  axi_read_master #(
    .ADDR_W(ADDR_W), .LINE_BYTES(LINE_BYTES),
    .AXI_DATA_W(AXI_DATA_W), .AXI_ID_W(AXI_ID_W)
  ) u_rd (
    .clk, .rst_n,
    .req_valid  (rd_req_valid),
    .req_ready  (rd_req_ready),
    .req_addr   (rd_req_addr),
    .resp_valid (rd_resp_valid),
    .resp_line  (rd_resp_line),
    .m_axi_arid, .m_axi_araddr, .m_axi_arlen, .m_axi_arsize, .m_axi_arburst,
    .m_axi_arlock, .m_axi_arcache, .m_axi_arprot, .m_axi_arvalid, .m_axi_arready,
    .m_axi_rid, .m_axi_rdata, .m_axi_rresp, .m_axi_rlast, .m_axi_rvalid, .m_axi_rready
  );

  axi_write_master #(
    .ADDR_W(ADDR_W), .LINE_BYTES(LINE_BYTES),
    .AXI_DATA_W(AXI_DATA_W), .AXI_ID_W(AXI_ID_W)
  ) u_wr (
    .clk, .rst_n,
    .req_valid  (wr_req_valid),
    .req_ready  (wr_req_ready),
    .req_addr   (wr_req_addr),
    .req_line   (victim_line),
    .resp_valid (wr_resp_valid),
    .resp_error (wr_resp_error),
    .m_axi_awid, .m_axi_awaddr, .m_axi_awlen, .m_axi_awsize, .m_axi_awburst,
    .m_axi_awlock, .m_axi_awcache, .m_axi_awprot, .m_axi_awvalid, .m_axi_awready,
    .m_axi_wdata, .m_axi_wstrb, .m_axi_wlast, .m_axi_wvalid, .m_axi_wready,
    .m_axi_bid, .m_axi_bresp, .m_axi_bvalid, .m_axi_bready
  );

  // ---- verification debug taps ----
  // Not synthesisable intent; observed by cocotb via --public-flat-rw.
   /* verilator lint_off UNUSEDSIGNAL */
  localparam int WAY_IDX_W = (WAYS > 1) ? $clog2(WAYS) : 1;

  // High for exactly one cycle: the first stage-1 cycle of a new request,
  // which is the cycle 'hit' reflects the state of the cache before any fill.
  logic dbg_first;
  always_ff @(posedge clk) begin
    if (!rst_n)              dbg_first <= 1'b0;
    else if (s1_can_advance) dbg_first <= s0_accept;
    else                     dbg_first <= 1'b0;
  end

  logic [WAY_IDX_W-1:0] dbg_hit_way;
  always_comb begin
    dbg_hit_way = '0;
    for (int w = 0; w < WAYS; w++)
      if (way_hit[w]) dbg_hit_way = WAY_IDX_W'(w);
  end

  logic                 dbg_acc_valid;   // one pulse per accepted request
  logic                 dbg_acc_hit;
  logic                 dbg_acc_we;
  logic [ADDR_W-1:0]    dbg_acc_addr;
  logic [WAY_IDX_W-1:0] dbg_acc_way;

  assign dbg_acc_valid = dbg_first;
  assign dbg_acc_hit   = hit;
  assign dbg_acc_we    = s1_we;
  assign dbg_acc_addr  = {s1_tag, s1_index, s1_offset};
  assign dbg_acc_way   = dbg_hit_way;

  // Event pulses, counted rather than matched per-access.
  logic dbg_ev_fill, dbg_ev_evict;
  assign dbg_ev_fill  = cmd_fill;
  assign dbg_ev_evict = wr_resp_valid;
  /* verilator lint_on UNUSEDSIGNAL */

  `ifndef SYNTHESIS
    logic was_replay;
    always_ff @(posedge clk) was_replay <= (state == S_REPLAY);

    always_ff @(posedge clk)
      if (rst_n && was_replay && miss)
        $error("dcache: miss immediately after fill -- the fill did not take");

    always_ff @(posedge clk)
      if (rst_n && wr_resp_valid && wr_resp_error)
        $error("dcache: writeback failed, BRESP not OKAY");
  `endif

endmodule
