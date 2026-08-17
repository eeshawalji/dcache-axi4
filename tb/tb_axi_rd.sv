// tb/tb_axi_rd.sv
//
// Week 3, step 3: wrapper exposing axi_read_master's ports to cocotb.
//
// Unlike tb_axi_probe.sv, this one contains a real design. The AXI directions
// are now genuine: the DUT drives AR and RREADY (outputs), AxiRamRead drives
// ARREADY and the R payload (inputs).

`default_nettype none

module tb_axi_rd #(
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
  output var logic                    resp_valid,
  output var logic [LINE_BYTES*8-1:0] resp_line,

  // ---- AR: driven by the DUT ----
  output var logic [AXI_ID_W-1:0]     m_axi_arid,
  output var logic [ADDR_W-1:0]       m_axi_araddr,
  output var logic [7:0]              m_axi_arlen,
  output var logic [2:0]              m_axi_arsize,
  output var logic [1:0]              m_axi_arburst,
  output var logic                    m_axi_arvalid,
  input  var logic                    m_axi_arready,   // from AxiRamRead

  // ---- R: payload from AxiRamRead, RREADY from the DUT ----
  input  var logic [AXI_ID_W-1:0]     m_axi_rid,
  input  var logic [AXI_DATA_W-1:0]   m_axi_rdata,
  input  var logic [1:0]              m_axi_rresp,
  input  var logic                    m_axi_rlast,
  input  var logic                    m_axi_rvalid,
  output var logic                    m_axi_rready,

  // extra, for Vivado IP packager
  output var logic       m_axi_arlock,
  output var logic [3:0] m_axi_arcache,
  output var logic [2:0] m_axi_arprot
);

  assign m_axi_arlock  = 1'b0;      // normal access, not exclusive
  assign m_axi_arcache = 4'b0011;   // normal, non-cacheable, bufferable
  assign m_axi_arprot  = 3'b000;    // unprivileged, secure, data access

  axi_read_master #(
    .ADDR_W     (ADDR_W),
    .LINE_BYTES (LINE_BYTES),
    .AXI_DATA_W (AXI_DATA_W),
    .AXI_ID_W   (AXI_ID_W)
  ) u_rd (
    .clk, .rst_n,
    .req_valid, .req_ready, .req_addr,
    .resp_valid, .resp_line,
    .m_axi_arid, .m_axi_araddr, .m_axi_arlen, .m_axi_arsize,
    .m_axi_arburst, .m_axi_arvalid, .m_axi_arready,
    .m_axi_rid, .m_axi_rdata, .m_axi_rresp, .m_axi_rlast,
    .m_axi_rvalid, .m_axi_rready
  );

endmodule

`default_nettype wire
