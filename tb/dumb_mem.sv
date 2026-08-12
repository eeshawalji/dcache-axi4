// tb/dumb_mem.sv — throwaway. Replaced by cocotbext-axi AxiRam in week 3.
module dumb_mem #(
  parameter int ADDR_W     = 32,
  parameter int LINE_BYTES = 32,
  parameter int LATENCY    = 8,
  parameter int LINES      = 4096
) (
  input  logic clk,
  input  logic rst_n,

  input  logic                    mem_req_valid,
  output logic                    mem_req_ready,
  input  logic [ADDR_W-1:0]       mem_req_addr,
  input  logic                    mem_req_we,
  input  logic [LINE_BYTES*8-1:0] mem_req_wdata,
  input  logic [LINE_BYTES-1:0]   mem_req_be,

  output logic                    mem_resp_valid,
  output logic [LINE_BYTES*8-1:0] mem_resp_rdata
);

  localparam int OFFSET_W = $clog2(LINE_BYTES);
  localparam int LINE_W   = LINE_BYTES*8;
  localparam int CNT_W    = $clog2(LATENCY+1);

  logic [LINE_W-1:0] mem [LINES];

  logic              busy;
  logic [CNT_W-1:0]  cnt;
  logic              pending_we;
  logic [$clog2(LINES)-1:0] pending_line;

  assign mem_req_ready = !busy;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      busy           <= 1'b0;
      mem_resp_valid <= 1'b0;
    end else begin
      mem_resp_valid <= 1'b0;                      // default: one-cycle pulse

      if (!busy) begin
        if (mem_req_valid) begin
          busy         <= 1'b1;
          cnt          <= CNT_W'(LATENCY);
          pending_we   <= mem_req_we;
          pending_line <= mem_req_addr[OFFSET_W +: $clog2(LINES)];
          if (mem_req_we)
            mem[mem_req_addr[OFFSET_W +: $clog2(LINES)]] <= mem_req_wdata;
        end
      end else if (cnt != 0) begin
        cnt <= cnt - 1'b1;
      end else begin
        busy <= 1'b0;
        if (!pending_we) begin
          mem_resp_rdata <= mem[pending_line];
          mem_resp_valid <= 1'b1;
        end
      end
    end
  end

endmodule
