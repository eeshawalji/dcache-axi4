// tb/tb_axi_wr.sv
//
// Week 3, step 4: wrapper exposing axi_write_master's ports to cocotb.
//
// Directions mirror tb_axi_rd.sv, flipped. The DUT drives AW, W and BREADY;
// AxiRamWrite drives AWREADY, WREADY and the B payload.

`default_nettype none

module tb_axi_wr #(
  parameter int ADDR_W     = 32,
  parameter int LINE_BYTES = 32,
  parameter int AXI_DATA_W = 64,
  parameter int AXI_ID_W   = 4
) (
  input  var logic clk,
  input  var logic rst_n,

  // ---- cache-facing, driven/observed by the cocotb test ----
  input  var logic                    req_valid,
  output var logic                    req_ready,
  input  var logic [ADDR_W-1:0]       req_addr,
  input  var logic [LINE_BYTES*8-1:0] req_line,
  output var logic                    resp_valid,
  output var logic                    resp_error,

  // ---- AW: driven by the DUT ----
  output var logic [AXI_ID_W-1:0]     m_axi_awid,
  output var logic [ADDR_W-1:0]       m_axi_awaddr,
  output var logic [7:0]              m_axi_awlen,
  output var logic [2:0]              m_axi_awsize,
  output var logic [1:0]              m_axi_awburst,
  output var logic                    m_axi_awlock,
  output var logic [3:0]              m_axi_awcache,
  output var logic [2:0]              m_axi_awprot,
  output var logic                    m_axi_awvalid,
  input  var logic                    m_axi_awready,   // from AxiRamWrite

  // ---- W: driven by the DUT ----
  output var logic [AXI_DATA_W-1:0]   m_axi_wdata,
  output var logic [AXI_DATA_W/8-1:0] m_axi_wstrb,
  output var logic                    m_axi_wlast,
  output var logic                    m_axi_wvalid,
  input  var logic                    m_axi_wready,    // from AxiRamWrite

  // ---- B: payload from AxiRamWrite, BREADY from the DUT ----
  input  var logic [AXI_ID_W-1:0]     m_axi_bid,
  input  var logic [1:0]              m_axi_bresp,
  input  var logic                    m_axi_bvalid,
  output var logic                    m_axi_bready
);

  axi_write_master #(
    .ADDR_W     (ADDR_W),
    .LINE_BYTES (LINE_BYTES),
    .AXI_DATA_W (AXI_DATA_W),
    .AXI_ID_W   (AXI_ID_W)
  ) u_wr (
    .clk, .rst_n,
    .req_valid, .req_ready, .req_addr, .req_line,
    .resp_valid, .resp_error,
    .m_axi_awid, .m_axi_awaddr, .m_axi_awlen, .m_axi_awsize,
    .m_axi_awburst, .m_axi_awlock, .m_axi_awcache, .m_axi_awprot,
    .m_axi_awvalid, .m_axi_awready,
    .m_axi_wdata, .m_axi_wstrb, .m_axi_wlast, .m_axi_wvalid, .m_axi_wready,
    .m_axi_bid, .m_axi_bresp, .m_axi_bvalid, .m_axi_bready
  );

endmodule

`default_nettype wire
