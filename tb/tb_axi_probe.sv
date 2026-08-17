// tb/tb_axi_probe.sv
//
// Week 3, step 1: a harness with no logic in it.
//
// Every signal below is an input because every signal is driven from Python:
//   - the cocotb test drives the master side (ARVALID, ARADDR, WVALID, ...)
//   - cocotbext-axi's AxiRam drives the slave side (ARREADY, RVALID, RDATA, ...)
// The module exists only so the names exist for cocotb to bind to.
//
// Signal names use the prefix m_axi_ because the eventual driver of this bus is
// the cache, which is an AXI *master*. cocotbext-axi's AxiBus.from_prefix(dut,
// "m_axi") looks for exactly these names.
//
// Throwaway. Delete after step 4, or keep as a protocol regression.

/* verilator lint_off UNUSEDSIGNAL */
module tb_axi_probe #(
  parameter int ADDR_W     = 32,
  parameter int AXI_DATA_W = 64,
  parameter int AXI_ID_W   = 4
) (
  input logic clk,
  input logic rst_n,

  // ---- AW: write address ----
  input logic [AXI_ID_W-1:0]     m_axi_awid,
  input logic [ADDR_W-1:0]       m_axi_awaddr,
  input logic [7:0]              m_axi_awlen,
  input logic [2:0]              m_axi_awsize,
  input logic [1:0]              m_axi_awburst,
  input logic                    m_axi_awlock,
  input logic [3:0]              m_axi_awcache,
  input logic [2:0]              m_axi_awprot,
  input logic                    m_axi_awvalid,
  input logic                    m_axi_awready,

  // ---- W: write data ----
  input logic [AXI_DATA_W-1:0]   m_axi_wdata,
  input logic [AXI_DATA_W/8-1:0] m_axi_wstrb,
  input logic                    m_axi_wlast,
  input logic                    m_axi_wvalid,
  input logic                    m_axi_wready,

  // ---- B: write response ----
  input logic [AXI_ID_W-1:0]     m_axi_bid,
  input logic [1:0]              m_axi_bresp,
  input logic                    m_axi_bvalid,
  input logic                    m_axi_bready,

  // ---- AR: read address ----
  input logic [AXI_ID_W-1:0]     m_axi_arid,
  input logic [ADDR_W-1:0]       m_axi_araddr,
  input logic [7:0]              m_axi_arlen,
  input logic [2:0]              m_axi_arsize,
  input logic [1:0]              m_axi_arburst,
  input logic                    m_axi_arlock,
  input logic [3:0]              m_axi_arcache,
  input logic [2:0]              m_axi_arprot,
  input logic                    m_axi_arvalid,
  input logic                    m_axi_arready,

  // ---- R: read data ----
  input logic [AXI_ID_W-1:0]     m_axi_rid,
  input logic [AXI_DATA_W-1:0]   m_axi_rdata,
  input logic [1:0]              m_axi_rresp,
  input logic                    m_axi_rlast,
  input logic                    m_axi_rvalid,
  input logic                    m_axi_rready
);

  // Intentionally empty.

endmodule
/* verilator lint_on UNUSEDSIGNAL */
