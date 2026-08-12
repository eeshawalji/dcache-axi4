  // tb/tb_top.sv — testbench wrapper. Not synthesisable, not part of the design.
module tb_top #(
  parameter int CAPACITY_BYTES = 8192,
  parameter int LINE_BYTES     = 32,
  parameter int WAYS           = 1,
  parameter int ADDR_W         = 32,
  parameter int CPU_DATA_W     = 32,
  parameter int MEM_LATENCY    = 8
) (
  input  logic clk,
  input  logic rst_n,

  input  logic                    req_valid,
  output logic                    req_ready,
  input  logic [ADDR_W-1:0]       req_addr,
  input  logic                    req_we,
  input  logic [CPU_DATA_W/8-1:0] req_be,
  input  logic [CPU_DATA_W-1:0]   req_wdata,

  output logic                    resp_valid,
  output logic [CPU_DATA_W-1:0]   resp_rdata
);

  // ---- wires between cache and memory ----
  logic                    mem_req_valid, mem_req_ready, mem_req_we;
  logic [ADDR_W-1:0]       mem_req_addr;
  logic [LINE_BYTES*8-1:0] mem_req_wdata, mem_resp_rdata;
  logic [LINE_BYTES-1:0]   mem_req_be;
  logic                    mem_resp_valid;

  dcache #(
    .CAPACITY_BYTES(CAPACITY_BYTES),
    .LINE_BYTES    (LINE_BYTES),
    .WAYS          (WAYS),
    .ADDR_W        (ADDR_W),
    .CPU_DATA_W    (CPU_DATA_W)
  ) u_dcache (
    .clk, .rst_n,
    .req_valid, .req_ready, .req_addr, .req_we, .req_be, .req_wdata,
    .resp_valid, .resp_rdata,
    .mem_req_valid, .mem_req_ready, .mem_req_addr, .mem_req_we,
    .mem_req_wdata, .mem_req_be,
    .mem_resp_valid, .mem_resp_rdata
  );

  dumb_mem #(
    .ADDR_W     (ADDR_W),
    .LINE_BYTES (LINE_BYTES),
    .LATENCY    (MEM_LATENCY)
  ) u_mem (
    .clk, .rst_n,
    .mem_req_valid, .mem_req_ready, .mem_req_addr, .mem_req_we,
    .mem_req_wdata, .mem_req_be,
    .mem_resp_valid, .mem_resp_rdata
  );

endmodule
