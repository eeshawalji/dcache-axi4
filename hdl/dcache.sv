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
  output logic                    mem_req_valid,
  input  logic                    mem_req_ready,
  output logic [ADDR_W-1:0]       mem_req_addr,
  output logic                    mem_req_we,
  output logic [LINE_BYTES*8-1:0] mem_req_wdata,
  output logic [LINE_BYTES-1:0]   mem_req_be,

  input  logic                    mem_resp_valid,
  input  logic [LINE_BYTES*8-1:0] mem_resp_rdata
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

  logic [WAYS-1:0] valid_q [SETS]; // valid bits go in flops, not BRAM

  always_ff @(posedge clk) begin
    if (!rst_n) for (int s = 0; s < SETS; s++) valid_q[s] <= '0;
    else if (cmd_fill) valid_q[wr_index] <= valid_q[wr_index] | way_we;  
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
  
  // ---- word select ----
  logic [WORD_SEL_W-1:0] s1_word;
  assign s1_word    = s1_offset[OFFSET_W-1 : BYTE_SEL_W];
  assign resp_rdata = hit_line[s1_word*CPU_DATA_W +: CPU_DATA_W];  // read hit, chooses the correct word (4 bytes) out of the line (32 bytes)

  // ---- facts ----
  logic rd_hit, rd_miss, wr_req;
  assign rd_hit     = (state == S_IDLE) && s1_valid && !s1_we && hit;
  assign resp_valid = rd_hit;                      
  assign rd_miss    = (state == S_IDLE) && s1_valid && !s1_we && !hit;
  assign wr_req     = (state == S_IDLE) && s1_valid &&  s1_we;          // hit or miss: both go to memory                       

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
      S_IDLE:           if      (rd_miss)         next_state = S_FILL_REQ;
                        else if (wr_req)          next_state = S_WRITE_THROUGH;
      S_FILL_REQ:       if      (mem_req_ready)   next_state = S_FILL_WAIT;
      S_FILL_WAIT:      if      (mem_resp_valid)  next_state = S_REPLAY;
      S_REPLAY:                                   next_state = S_IDLE;
      S_WRITE_THROUGH:  if      (mem_req_ready)   next_state = S_IDLE;
      S_LOOKUP:                                   next_state = S_IDLE;  // unused wk1
      default:                                    next_state = S_IDLE;
    endcase
  end

  // 3. output / commands (comb) - the FSM's entire interface to the datapath
  assign cmd_fill   = (state == S_FILL_WAIT)     && mem_resp_valid; // read miss
  assign cmd_store  = (state == S_WRITE_THROUGH) && mem_req_ready && hit; // write hit 
  assign cmd_retire = rd_hit || ((state == S_WRITE_THROUGH) && mem_req_ready);

  assign mem_req_valid = (state == S_FILL_REQ) || (state == S_WRITE_THROUGH);
  assign mem_req_we    = (state == S_WRITE_THROUGH);
  assign mem_req_addr  = {s1_tag, s1_index, {OFFSET_W{1'b0}}};
  assign mem_req_wdata = store_line;
  assign mem_req_be    = (state == S_WRITE_THROUGH) ? store_be : '0;

  // ---- array write datapath (driven by commands) ----
  assign wr_index = s1_index;
  assign wr_line  = cmd_fill ? mem_resp_rdata : store_line;
  assign wr_be    = cmd_fill ? '1             : store_be;
  assign way_we   = cmd_fill ? WAYS'(1)     // fill way 0 (wk1)
                  : cmd_store ? way_hit
                  : '0;

  assign array_raddr = s0_accept ? s0_index : s1_index;
  assign s1_can_advance = !s1_valid || cmd_retire;
  assign s0s1_conflict  = cmd_store && (s0_index == s1_index) && (s0_tag == s1_tag);
  assign req_ready      = s1_can_advance && !s0s1_conflict;

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
  logic dbg_ev_fill, dbg_ev_memwr;
  assign dbg_ev_fill  = cmd_fill;
  assign dbg_ev_memwr = mem_req_valid && mem_req_ready && mem_req_we;
  /* verilator lint_on UNUSEDSIGNAL */

endmodule
