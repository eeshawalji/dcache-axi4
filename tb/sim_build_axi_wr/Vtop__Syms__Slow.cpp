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
    Verilated::stackCheck(286);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_axi_wr = new VerilatedScope{this, "tb_axi_wr", "tb_axi_wr", "tb_axi_wr", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_axi_wr__u_wr = new VerilatedScope{this, "tb_axi_wr.u_wr", "u_wr", "axi_write_master", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_axi_wr__u_wr__unnamedblk1 = new VerilatedScope{this, "tb_axi_wr.u_wr.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_tb_axi_wr);
    __Vhier.add(__Vscopep_tb_axi_wr, __Vscopep_tb_axi_wr__u_wr);
    __Vhier.add(__Vscopep_tb_axi_wr__u_wr, __Vscopep_tb_axi_wr__u_wr__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_awaddr", &(TOP.m_axi_awaddr), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("m_axi_awburst", &(TOP.m_axi_awburst), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("m_axi_awcache", &(TOP.m_axi_awcache), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_awid", &(TOP.m_axi_awid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_awlen", &(TOP.m_axi_awlen), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("m_axi_awlock", &(TOP.m_axi_awlock), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_awprot", &(TOP.m_axi_awprot), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("m_axi_awready", &(TOP.m_axi_awready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_awsize", &(TOP.m_axi_awsize), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("m_axi_awvalid", &(TOP.m_axi_awvalid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_bid", &(TOP.m_axi_bid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_bready", &(TOP.m_axi_bready), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_bresp", &(TOP.m_axi_bresp), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("m_axi_bvalid", &(TOP.m_axi_bvalid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_wdata", &(TOP.m_axi_wdata), false, VLVT_UINT64, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_TOP->varInsert("m_axi_wlast", &(TOP.m_axi_wlast), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_wready", &(TOP.m_axi_wready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_wstrb", &(TOP.m_axi_wstrb), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("m_axi_wvalid", &(TOP.m_axi_wvalid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("req_addr", &(TOP.req_addr), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("req_line", &(TOP.req_line), false, VLVT_WDATA, VLVD_IN|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_TOP->varInsert("req_ready", &(TOP.req_ready), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("req_valid", &(TOP.req_valid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("resp_error", &(TOP.resp_error), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("resp_valid", &(TOP.resp_valid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst_n", &(TOP.rst_n), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr->varInsert("AXI_DATA_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__AXI_DATA_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr->varInsert("AXI_ID_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__AXI_ID_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr->varInsert("LINE_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__LINE_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr->varInsert("clk", &(TOP.tb_axi_wr__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awaddr", &(TOP.tb_axi_wr__DOT__m_axi_awaddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awburst", &(TOP.tb_axi_wr__DOT__m_axi_awburst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awcache", &(TOP.tb_axi_wr__DOT__m_axi_awcache), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awid", &(TOP.tb_axi_wr__DOT__m_axi_awid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awlen", &(TOP.tb_axi_wr__DOT__m_axi_awlen), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awlock", &(TOP.tb_axi_wr__DOT__m_axi_awlock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awprot", &(TOP.tb_axi_wr__DOT__m_axi_awprot), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awready", &(TOP.tb_axi_wr__DOT__m_axi_awready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awsize", &(TOP.tb_axi_wr__DOT__m_axi_awsize), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_awvalid", &(TOP.tb_axi_wr__DOT__m_axi_awvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_bid", &(TOP.tb_axi_wr__DOT__m_axi_bid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_bready", &(TOP.tb_axi_wr__DOT__m_axi_bready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_bresp", &(TOP.tb_axi_wr__DOT__m_axi_bresp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_bvalid", &(TOP.tb_axi_wr__DOT__m_axi_bvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_wdata", &(TOP.tb_axi_wr__DOT__m_axi_wdata), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_wlast", &(TOP.tb_axi_wr__DOT__m_axi_wlast), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_wready", &(TOP.tb_axi_wr__DOT__m_axi_wready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_wstrb", &(TOP.tb_axi_wr__DOT__m_axi_wstrb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_axi_wr->varInsert("m_axi_wvalid", &(TOP.tb_axi_wr__DOT__m_axi_wvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("req_addr", &(TOP.tb_axi_wr__DOT__req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr->varInsert("req_line", &(TOP.tb_axi_wr__DOT__req_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_axi_wr->varInsert("req_ready", &(TOP.tb_axi_wr__DOT__req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("req_valid", &(TOP.tb_axi_wr__DOT__req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("resp_error", &(TOP.tb_axi_wr__DOT__resp_error), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("resp_valid", &(TOP.tb_axi_wr__DOT__resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr->varInsert("rst_n", &(TOP.tb_axi_wr__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("AWLEN_FIXED", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__AWLEN_FIXED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("AWSIZE_FIXED", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__AWSIZE_FIXED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("AXI_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__AXI_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("AXI_DATA_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__AXI_DATA_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("AXI_ID_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__AXI_ID_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("BEATS", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__BEATS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("BEAT_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__BEAT_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("BURST_INCR", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__BURST_INCR))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("LAST_BEAT", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__LAST_BEAT))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("LINE_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__LINE_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("LINE_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__LINE_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("RESP_OKAY", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_wr__DOT__u_wr__DOT__RESP_OKAY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("addr_q", &(TOP.tb_axi_wr__DOT__u_wr__DOT__addr_q), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("aw_accept", &(TOP.tb_axi_wr__DOT__u_wr__DOT__aw_accept), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("b_accept", &(TOP.tb_axi_wr__DOT__u_wr__DOT__b_accept), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("beat_cnt", &(TOP.tb_axi_wr__DOT__u_wr__DOT__beat_cnt), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("clk", &(TOP.tb_axi_wr__DOT__u_wr__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("err_q", &(TOP.tb_axi_wr__DOT__u_wr__DOT__err_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("line_q", &(TOP.tb_axi_wr__DOT__u_wr__DOT__line_q), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,3 ,63,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awaddr", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awaddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awburst", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awburst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,1,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awcache", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awcache), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awid", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awlen", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awlen), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awlock", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awlock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awprot", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awprot), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,2,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awready", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awsize", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awsize), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,2,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_awvalid", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_bid", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_bid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_bready", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_bready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_bresp", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_bresp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_bvalid", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_bvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_wdata", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_wdata), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,63,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_wlast", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_wready", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_wready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_wstrb", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_wstrb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("m_axi_wvalid", &(TOP.tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("req_addr", &(TOP.tb_axi_wr__DOT__u_wr__DOT__req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("req_line", &(TOP.tb_axi_wr__DOT__u_wr__DOT__req_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("req_ready", &(TOP.tb_axi_wr__DOT__u_wr__DOT__req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("req_valid", &(TOP.tb_axi_wr__DOT__u_wr__DOT__req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("resp_error", &(TOP.tb_axi_wr__DOT__u_wr__DOT__resp_error), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("resp_valid", &(TOP.tb_axi_wr__DOT__u_wr__DOT__resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("rst_n", &(TOP.tb_axi_wr__DOT__u_wr__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("state", &(TOP.tb_axi_wr__DOT__u_wr__DOT__state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("state_n", &(TOP.tb_axi_wr__DOT__u_wr__DOT__state_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_wr__u_wr->varInsert("w_beat", &(TOP.tb_axi_wr__DOT__u_wr__DOT__w_beat), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 0);
    __Vscopep_tb_axi_wr__u_wr__unnamedblk1->varInsert("i", &(TOP.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_tb_axi_wr);
    __Vhier.remove(__Vscopep_tb_axi_wr, __Vscopep_tb_axi_wr__u_wr);
    __Vhier.remove(__Vscopep_tb_axi_wr__u_wr, __Vscopep_tb_axi_wr__u_wr__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_axi_wr, __Vscopep_tb_axi_wr = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_axi_wr__u_wr, __Vscopep_tb_axi_wr__u_wr = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_axi_wr__u_wr__unnamedblk1, __Vscopep_tb_axi_wr__u_wr__unnamedblk1 = nullptr);
    // Tear down sub module instances
    TOP____024unit.dtor();
}
