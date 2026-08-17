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
    Verilated::stackCheck(272);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_axi_rd = new VerilatedScope{this, "tb_axi_rd", "tb_axi_rd", "tb_axi_rd", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_axi_rd__u_rd = new VerilatedScope{this, "tb_axi_rd.u_rd", "u_rd", "axi_read_master", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_tb_axi_rd);
    __Vhier.add(__Vscopep_tb_axi_rd, __Vscopep_tb_axi_rd__u_rd);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_araddr", &(TOP.m_axi_araddr), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("m_axi_arburst", &(TOP.m_axi_arburst), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("m_axi_arcache", &(TOP.m_axi_arcache), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_arid", &(TOP.m_axi_arid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_arlen", &(TOP.m_axi_arlen), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("m_axi_arlock", &(TOP.m_axi_arlock), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_arprot", &(TOP.m_axi_arprot), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("m_axi_arready", &(TOP.m_axi_arready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_arsize", &(TOP.m_axi_arsize), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("m_axi_arvalid", &(TOP.m_axi_arvalid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_rdata", &(TOP.m_axi_rdata), false, VLVT_UINT64, VLVD_IN|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_TOP->varInsert("m_axi_rid", &(TOP.m_axi_rid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("m_axi_rlast", &(TOP.m_axi_rlast), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_rready", &(TOP.m_axi_rready), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("m_axi_rresp", &(TOP.m_axi_rresp), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("m_axi_rvalid", &(TOP.m_axi_rvalid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("req_addr", &(TOP.req_addr), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("req_ready", &(TOP.req_ready), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("req_valid", &(TOP.req_valid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("resp_line", &(TOP.resp_line), false, VLVT_WDATA, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_TOP->varInsert("resp_valid", &(TOP.resp_valid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst_n", &(TOP.rst_n), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd->varInsert("AXI_DATA_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__AXI_DATA_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd->varInsert("AXI_ID_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__AXI_ID_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd->varInsert("LINE_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__LINE_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd->varInsert("clk", &(TOP.tb_axi_rd__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_araddr", &(TOP.tb_axi_rd__DOT__m_axi_araddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arburst", &(TOP.tb_axi_rd__DOT__m_axi_arburst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arcache", &(TOP.tb_axi_rd__DOT__m_axi_arcache), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arid", &(TOP.tb_axi_rd__DOT__m_axi_arid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arlen", &(TOP.tb_axi_rd__DOT__m_axi_arlen), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arlock", &(TOP.tb_axi_rd__DOT__m_axi_arlock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arprot", &(TOP.tb_axi_rd__DOT__m_axi_arprot), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,2,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arready", &(TOP.tb_axi_rd__DOT__m_axi_arready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arsize", &(TOP.tb_axi_rd__DOT__m_axi_arsize), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_arvalid", &(TOP.tb_axi_rd__DOT__m_axi_arvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_rdata", &(TOP.tb_axi_rd__DOT__m_axi_rdata), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_rid", &(TOP.tb_axi_rd__DOT__m_axi_rid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_rlast", &(TOP.tb_axi_rd__DOT__m_axi_rlast), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_rready", &(TOP.tb_axi_rd__DOT__m_axi_rready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_rresp", &(TOP.tb_axi_rd__DOT__m_axi_rresp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd->varInsert("m_axi_rvalid", &(TOP.tb_axi_rd__DOT__m_axi_rvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("req_addr", &(TOP.tb_axi_rd__DOT__req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd->varInsert("req_ready", &(TOP.tb_axi_rd__DOT__req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("req_valid", &(TOP.tb_axi_rd__DOT__req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("resp_line", &(TOP.tb_axi_rd__DOT__resp_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_axi_rd->varInsert("resp_valid", &(TOP.tb_axi_rd__DOT__resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd->varInsert("rst_n", &(TOP.tb_axi_rd__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("ARLEN_FIXED", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__ARLEN_FIXED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("ARSIZE_FIXED", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__ARSIZE_FIXED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("AXI_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__AXI_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("AXI_DATA_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__AXI_DATA_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("AXI_ID_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__AXI_ID_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("BEATS", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__BEATS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("BEAT_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__BEAT_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("BURST_INCR", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__BURST_INCR))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("LAST_BEAT", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__LAST_BEAT))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("LINE_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__LINE_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("LINE_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__LINE_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("OFFSET_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__OFFSET_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("RESP_OKAY", const_cast<void*>(static_cast<const void*>(&(TOP.tb_axi_rd__DOT__u_rd__DOT__RESP_OKAY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("addr_q", &(TOP.tb_axi_rd__DOT__u_rd__DOT__addr_q), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("ar_accept", &(TOP.tb_axi_rd__DOT__u_rd__DOT__ar_accept), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("beat_cnt", &(TOP.tb_axi_rd__DOT__u_rd__DOT__beat_cnt), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("clk", &(TOP.tb_axi_rd__DOT__u_rd__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("line_q", &(TOP.tb_axi_rd__DOT__u_rd__DOT__line_q), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,3 ,63,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_araddr", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_araddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_arburst", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_arburst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_arid", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_arid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_arlen", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_arlen), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_arready", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_arready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_arsize", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_arsize), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,2,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_arvalid", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_arvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_rdata", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_rdata), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,63,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_rid", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_rid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_rlast", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_rlast), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_rready", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_rready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_rresp", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_rresp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("m_axi_rvalid", &(TOP.tb_axi_rd__DOT__u_rd__DOT__m_axi_rvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("r_beat", &(TOP.tb_axi_rd__DOT__u_rd__DOT__r_beat), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("req_addr", &(TOP.tb_axi_rd__DOT__u_rd__DOT__req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("req_ready", &(TOP.tb_axi_rd__DOT__u_rd__DOT__req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("req_valid", &(TOP.tb_axi_rd__DOT__u_rd__DOT__req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("resp_line", &(TOP.tb_axi_rd__DOT__u_rd__DOT__resp_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,255,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("resp_valid", &(TOP.tb_axi_rd__DOT__u_rd__DOT__resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("rst_n", &(TOP.tb_axi_rd__DOT__u_rd__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("state", &(TOP.tb_axi_rd__DOT__u_rd__DOT__state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_axi_rd__u_rd->varInsert("state_n", &(TOP.tb_axi_rd__DOT__u_rd__DOT__state_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_tb_axi_rd);
    __Vhier.remove(__Vscopep_tb_axi_rd, __Vscopep_tb_axi_rd__u_rd);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_axi_rd, __Vscopep_tb_axi_rd = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_axi_rd__u_rd, __Vscopep_tb_axi_rd__u_rd = nullptr);
    // Tear down sub module instances
}
