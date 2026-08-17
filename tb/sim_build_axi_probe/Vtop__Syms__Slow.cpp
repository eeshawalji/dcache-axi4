// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(124);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_axi_probe = new VerilatedScope{this, "tb_axi_probe", "tb_axi_probe", "tb_axi_probe", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_tb_axi_probe);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_araddr", &(TOP.m_axi_araddr), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("m_axi_arburst", &(TOP.m_axi_arburst), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("m_axi_arcache", &(TOP.m_axi_arcache), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_arid", &(TOP.m_axi_arid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_arlen", &(TOP.m_axi_arlen), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("m_axi_arlock", &(TOP.m_axi_arlock), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_arprot", &(TOP.m_axi_arprot), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("m_axi_arready", &(TOP.m_axi_arready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_arsize", &(TOP.m_axi_arsize), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("m_axi_arvalid", &(TOP.m_axi_arvalid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_awaddr", &(TOP.m_axi_awaddr), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("m_axi_awburst", &(TOP.m_axi_awburst), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("m_axi_awcache", &(TOP.m_axi_awcache), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_awid", &(TOP.m_axi_awid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_awlen", &(TOP.m_axi_awlen), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("m_axi_awlock", &(TOP.m_axi_awlock), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_awprot", &(TOP.m_axi_awprot), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("m_axi_awready", &(TOP.m_axi_awready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_awsize", &(TOP.m_axi_awsize), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("m_axi_awvalid", &(TOP.m_axi_awvalid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_bid", &(TOP.m_axi_bid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_bready", &(TOP.m_axi_bready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_bresp", &(TOP.m_axi_bresp), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("m_axi_bvalid", &(TOP.m_axi_bvalid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_rdata", &(TOP.m_axi_rdata), false, VLVT_UINT64, VLVD_IN|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_TOP->varInsert("m_axi_rid", &(TOP.m_axi_rid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_rlast", &(TOP.m_axi_rlast), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_rready", &(TOP.m_axi_rready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_rresp", &(TOP.m_axi_rresp), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("m_axi_rvalid", &(TOP.m_axi_rvalid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_wdata", &(TOP.m_axi_wdata), false, VLVT_UINT64, VLVD_IN|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_TOP->varInsert("m_axi_wlast", &(TOP.m_axi_wlast), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_wready", &(TOP.m_axi_wready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_wstrb", &(TOP.m_axi_wstrb), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("m_axi_wvalid", &(TOP.m_axi_wvalid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst_n", &(TOP.rst_n), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_probe__DOT__ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_probe->varInsert("AXI_DATA_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_probe__DOT__AXI_DATA_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_probe->varInsert("AXI_ID_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_probe__DOT__AXI_ID_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_probe->varInsert("clk", &(TOP.tb_axi_probe__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_araddr", &(TOP.tb_axi_probe__DOT__m_axi_araddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arburst", &(TOP.tb_axi_probe__DOT__m_axi_arburst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arcache", &(TOP.tb_axi_probe__DOT__m_axi_arcache), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arid", &(TOP.tb_axi_probe__DOT__m_axi_arid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arlen", &(TOP.tb_axi_probe__DOT__m_axi_arlen), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arlock", &(TOP.tb_axi_probe__DOT__m_axi_arlock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arprot", &(TOP.tb_axi_probe__DOT__m_axi_arprot), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arready", &(TOP.tb_axi_probe__DOT__m_axi_arready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arsize", &(TOP.tb_axi_probe__DOT__m_axi_arsize), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_arvalid", &(TOP.tb_axi_probe__DOT__m_axi_arvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awaddr", &(TOP.tb_axi_probe__DOT__m_axi_awaddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awburst", &(TOP.tb_axi_probe__DOT__m_axi_awburst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awcache", &(TOP.tb_axi_probe__DOT__m_axi_awcache), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awid", &(TOP.tb_axi_probe__DOT__m_axi_awid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awlen", &(TOP.tb_axi_probe__DOT__m_axi_awlen), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awlock", &(TOP.tb_axi_probe__DOT__m_axi_awlock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awprot", &(TOP.tb_axi_probe__DOT__m_axi_awprot), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awready", &(TOP.tb_axi_probe__DOT__m_axi_awready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awsize", &(TOP.tb_axi_probe__DOT__m_axi_awsize), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_awvalid", &(TOP.tb_axi_probe__DOT__m_axi_awvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_bid", &(TOP.tb_axi_probe__DOT__m_axi_bid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_bready", &(TOP.tb_axi_probe__DOT__m_axi_bready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_bresp", &(TOP.tb_axi_probe__DOT__m_axi_bresp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_bvalid", &(TOP.tb_axi_probe__DOT__m_axi_bvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_rdata", &(TOP.tb_axi_probe__DOT__m_axi_rdata), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_rid", &(TOP.tb_axi_probe__DOT__m_axi_rid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_rlast", &(TOP.tb_axi_probe__DOT__m_axi_rlast), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_rready", &(TOP.tb_axi_probe__DOT__m_axi_rready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_rresp", &(TOP.tb_axi_probe__DOT__m_axi_rresp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_rvalid", &(TOP.tb_axi_probe__DOT__m_axi_rvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_wdata", &(TOP.tb_axi_probe__DOT__m_axi_wdata), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_wlast", &(TOP.tb_axi_probe__DOT__m_axi_wlast), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_wready", &(TOP.tb_axi_probe__DOT__m_axi_wready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_wstrb", &(TOP.tb_axi_probe__DOT__m_axi_wstrb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_axi_probe->varInsert("m_axi_wvalid", &(TOP.tb_axi_probe__DOT__m_axi_wvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_probe->varInsert("rst_n", &(TOP.tb_axi_probe__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_tb_axi_probe);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_axi_probe, __Vscopep_tb_axi_probe = nullptr);
    // Tear down sub module instances
}
