// tb/tb_top.sv — testbench wrapper. Not synthesisable, not part of the design.
//
// Since week 3 the memory model is Python (cocotbext-axi AxiRam), not RTL, so
// this module holds no memory. It exists to expose the cache's AXI port group
// as top-level signals that AxiBus.from_prefix(dut, "m_axi") can bind to.
//
// Directions: the cache is the AXI master, so anything it drives is an output
// here, and anything the slave model drives is an input.

module tb_top #(
  parameter int CAPACITY_BYTES = 8192,
  parameter int LINE_BYTES     = 32,
  parameter int WAYS           = 1,
  parameter int ADDR_W         = 32,
  parameter int CPU_DATA_W     = 32,
  parameter int AXI_DATA_W     = 64,
  parameter int AXI_ID_W       = 4
) (
  input  logic clk,
  input  logic rst_n,

  // ---- CPU side, driven by the cocotb driver ----
  input  logic                    req_valid,
  output logic                    req_ready,
  input  logic [ADDR_W-1:0]       req_addr,
  input  logic                    req_we,
  input  logic [CPU_DATA_W/8-1:0] req_be,
  input  logic [CPU_DATA_W-1:0]   req_wdata,

  output logic                    resp_valid,
  output logic [CPU_DATA_W-1:0]   resp_rdata,

  // ---- AW: driven by the cache ----
  output logic [AXI_ID_W-1:0]     m_axi_awid,
  output logic [ADDR_W-1:0]       m_axi_awaddr,
  output logic [7:0]              m_axi_awlen,
  output logic [2:0]              m_axi_awsize,
  output logic [1:0]              m_axi_awburst,
  output logic                    m_axi_awlock,
  output logic [3:0]              m_axi_awcache,
  output logic [2:0]              m_axi_awprot,
  output logic                    m_axi_awvalid,
  input  logic                    m_axi_awready,   // from AxiRam

  // ---- W: driven by the cache ----
  output logic [AXI_DATA_W-1:0]   m_axi_wdata,
  output logic [AXI_DATA_W/8-1:0] m_axi_wstrb,
  output logic                    m_axi_wlast,
  output logic                    m_axi_wvalid,
  input  logic                    m_axi_wready,    // from AxiRam

  // ---- B: payload from AxiRam, BREADY from the cache ----
  input  logic [AXI_ID_W-1:0]     m_axi_bid,
  input  logic [1:0]              m_axi_bresp,
  input  logic                    m_axi_bvalid,
  output logic                    m_axi_bready,

  // ---- AR: driven by the cache ----
  output logic [AXI_ID_W-1:0]     m_axi_arid,
  output logic [ADDR_W-1:0]       m_axi_araddr,
  output logic [7:0]              m_axi_arlen,
  output logic [2:0]              m_axi_arsize,
  output logic [1:0]              m_axi_arburst,
  output logic                    m_axi_arlock,
  output logic [3:0]              m_axi_arcache,
  output logic [2:0]              m_axi_arprot,
  output logic                    m_axi_arvalid,
  input  logic                    m_axi_arready,   // from AxiRam

  // ---- R: payload from AxiRam, RREADY from the cache ----
  input  logic [AXI_ID_W-1:0]     m_axi_rid,
  input  logic [AXI_DATA_W-1:0]   m_axi_rdata,
  input  logic [1:0]              m_axi_rresp,
  input  logic                    m_axi_rlast,
  input  logic                    m_axi_rvalid,
  output logic                    m_axi_rready
);

  dcache #(
    .CAPACITY_BYTES(CAPACITY_BYTES),
    .LINE_BYTES    (LINE_BYTES),
    .WAYS          (WAYS),
    .ADDR_W        (ADDR_W),
    .CPU_DATA_W    (CPU_DATA_W),
    .AXI_DATA_W    (AXI_DATA_W),
    .AXI_ID_W      (AXI_ID_W)
  ) u_dcache (
    .clk, .rst_n,
    .req_valid, .req_ready, .req_addr, .req_we, .req_be, .req_wdata,
    .resp_valid, .resp_rdata,

    .m_axi_awid, .m_axi_awaddr, .m_axi_awlen, .m_axi_awsize, .m_axi_awburst,
    .m_axi_awlock, .m_axi_awcache, .m_axi_awprot, .m_axi_awvalid, .m_axi_awready,

    .m_axi_wdata, .m_axi_wstrb, .m_axi_wlast, .m_axi_wvalid, .m_axi_wready,

    .m_axi_bid, .m_axi_bresp, .m_axi_bvalid, .m_axi_bready,

    .m_axi_arid, .m_axi_araddr, .m_axi_arlen, .m_axi_arsize, .m_axi_arburst,
    .m_axi_arlock, .m_axi_arcache, .m_axi_arprot, .m_axi_arvalid, .m_axi_arready,

    .m_axi_rid, .m_axi_rdata, .m_axi_rresp, .m_axi_rlast, .m_axi_rvalid, .m_axi_rready
  );

endmodule
