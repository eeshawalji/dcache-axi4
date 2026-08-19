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
    Verilated::stackCheck(740);
    // Setup sub module instances
    TOP__dcache_pkg.ctor(this, "dcache_pkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__dcache_pkg = &TOP__dcache_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__dcache_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_dcache_pkg = new VerilatedScope{this, "dcache_pkg", "dcache_pkg", "dcache_pkg", -9, VerilatedScope::SCOPE_PACKAGE};
    __Vscopep_tb_top = new VerilatedScope{this, "tb_top", "tb_top", "tb_top", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_top__u_dcache = new VerilatedScope{this, "tb_top.u_dcache", "u_dcache", "dcache", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__ = new VerilatedScope{this, "tb_top.u_dcache.g_way[0]", "g_way[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data = new VerilatedScope{this, "tb_top.u_dcache.g_way[0].u_data", "u_data", "data_array", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data__unnamedblk1 = new VerilatedScope{this, "tb_top.u_dcache.g_way[0].u_data.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag = new VerilatedScope{this, "tb_top.u_dcache.g_way[0].u_tag", "u_tag", "tag_array", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_top__u_dcache__unnamedblk1 = new VerilatedScope{this, "tb_top.u_dcache.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_top__u_dcache__unnamedblk2 = new VerilatedScope{this, "tb_top.u_dcache.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_top__u_dcache__unnamedblk3 = new VerilatedScope{this, "tb_top.u_dcache.unnamedblk3", "unnamedblk3", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_top__u_dcache__unnamedblk4 = new VerilatedScope{this, "tb_top.u_dcache.unnamedblk4", "unnamedblk4", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_top__u_dcache__unnamedblk5 = new VerilatedScope{this, "tb_top.u_dcache.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_top__u_mem = new VerilatedScope{this, "tb_top.u_mem", "u_mem", "dumb_mem", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_top__u_mem__unnamedblk1 = new VerilatedScope{this, "tb_top.u_mem.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_dcache_pkg);
    __Vhier.add(0, __Vscopep_tb_top);
    __Vhier.add(__Vscopep_tb_top, __Vscopep_tb_top__u_dcache);
    __Vhier.add(__Vscopep_tb_top, __Vscopep_tb_top__u_mem);
    __Vhier.add(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__);
    __Vhier.add(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk1);
    __Vhier.add(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk2);
    __Vhier.add(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk3);
    __Vhier.add(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk4);
    __Vhier.add(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk5);
    __Vhier.add(__Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data);
    __Vhier.add(__Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag);
    __Vhier.add(__Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data__unnamedblk1);
    __Vhier.add(__Vscopep_tb_top__u_mem, __Vscopep_tb_top__u_mem__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("req_addr", &(TOP.req_addr), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("req_be", &(TOP.req_be), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("req_ready", &(TOP.req_ready), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("req_valid", &(TOP.req_valid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("req_wdata", &(TOP.req_wdata), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("req_we", &(TOP.req_we), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("resp_rdata", &(TOP.resp_rdata), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("resp_valid", &(TOP.resp_valid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst_n", &(TOP.rst_n), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_dcache_pkg->varInsert("AXI_RESP_OKAY", const_cast<void*>(static_cast<const void*>(&(TOP__dcache_pkg.AXI_RESP_OKAY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_top->varInsert("ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("CAPACITY_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__CAPACITY_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("CPU_DATA_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__CPU_DATA_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("LINE_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__LINE_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("MEM_LATENCY", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__MEM_LATENCY))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("WAYS", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__WAYS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("clk", &(TOP.tb_top__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("mem_req_addr", &(TOP.tb_top__DOT__mem_req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("mem_req_be", &(TOP.tb_top__DOT__mem_req_be), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("mem_req_ready", &(TOP.tb_top__DOT__mem_req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("mem_req_valid", &(TOP.tb_top__DOT__mem_req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("mem_req_wdata", &(TOP.tb_top__DOT__mem_req_wdata), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top->varInsert("mem_req_we", &(TOP.tb_top__DOT__mem_req_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("mem_resp_rdata", &(TOP.tb_top__DOT__mem_resp_rdata), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top->varInsert("mem_resp_valid", &(TOP.tb_top__DOT__mem_resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("req_addr", &(TOP.tb_top__DOT__req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("req_be", &(TOP.tb_top__DOT__req_be), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_top->varInsert("req_ready", &(TOP.tb_top__DOT__req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("req_valid", &(TOP.tb_top__DOT__req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("req_wdata", &(TOP.tb_top__DOT__req_wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("req_we", &(TOP.tb_top__DOT__req_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("resp_rdata", &(TOP.tb_top__DOT__resp_rdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top->varInsert("resp_valid", &(TOP.tb_top__DOT__resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top->varInsert("rst_n", &(TOP.tb_top__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("AXI_DATA_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__AXI_DATA_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("AXI_ID_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__AXI_ID_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("BEATS", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__BEATS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("BYTE_SEL_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__BYTE_SEL_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("CAPACITY_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__CAPACITY_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("CPU_DATA_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__CPU_DATA_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("INDEX_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__INDEX_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("LINE_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__LINE_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("OFFSET_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__OFFSET_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("SETS", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__SETS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("TAG_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__TAG_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("WAYS", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__WAYS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("WAY_IDX_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__WAY_IDX_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("WORD_SEL_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__WORD_SEL_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("array_raddr", &(TOP.tb_top__DOT__u_dcache__DOT__array_raddr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_tb_top__u_dcache->varInsert("clk", &(TOP.tb_top__DOT__u_dcache__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("cmd_fill", &(TOP.tb_top__DOT__u_dcache__DOT__cmd_fill), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("cmd_retire", &(TOP.tb_top__DOT__u_dcache__DOT__cmd_retire), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("cmd_store", &(TOP.tb_top__DOT__u_dcache__DOT__cmd_store), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_acc_addr", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_acc_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_acc_hit", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_acc_hit), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_acc_valid", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_acc_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_acc_way", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_acc_way), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_acc_we", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_acc_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_ev_evict", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_ev_evict), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_ev_fill", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_ev_fill), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_first", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_first), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("dbg_hit_way", &(TOP.tb_top__DOT__u_dcache__DOT__dbg_hit_way), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_tb_top__u_dcache->varInsert("dirty_q", &(TOP.tb_top__DOT__u_dcache__DOT__dirty_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,255 ,0,0);
    __Vscopep_tb_top__u_dcache->varInsert("hit", &(TOP.tb_top__DOT__u_dcache__DOT__hit), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("hit_line", &(TOP.tb_top__DOT__u_dcache__DOT__hit_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top__u_dcache->varInsert("mem_req_addr", &(TOP.tb_top__DOT__u_dcache__DOT__mem_req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("mem_req_be", &(TOP.tb_top__DOT__u_dcache__DOT__mem_req_be), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("mem_req_ready", &(TOP.tb_top__DOT__u_dcache__DOT__mem_req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("mem_req_valid", &(TOP.tb_top__DOT__u_dcache__DOT__mem_req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("mem_req_wdata", &(TOP.tb_top__DOT__u_dcache__DOT__mem_req_wdata), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,255,0);
    __Vscopep_tb_top__u_dcache->varInsert("mem_req_we", &(TOP.tb_top__DOT__u_dcache__DOT__mem_req_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("mem_resp_rdata", &(TOP.tb_top__DOT__u_dcache__DOT__mem_resp_rdata), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top__u_dcache->varInsert("mem_resp_valid", &(TOP.tb_top__DOT__u_dcache__DOT__mem_resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("miss", &(TOP.tb_top__DOT__u_dcache__DOT__miss), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("next_state", &(TOP.tb_top__DOT__u_dcache__DOT__next_state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_top__u_dcache->varInsert("rd_hit", &(TOP.tb_top__DOT__u_dcache__DOT__rd_hit), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("req_addr", &(TOP.tb_top__DOT__u_dcache__DOT__req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("req_be", &(TOP.tb_top__DOT__u_dcache__DOT__req_be), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_top__u_dcache->varInsert("req_ready", &(TOP.tb_top__DOT__u_dcache__DOT__req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("req_valid", &(TOP.tb_top__DOT__u_dcache__DOT__req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("req_wdata", &(TOP.tb_top__DOT__u_dcache__DOT__req_wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("req_we", &(TOP.tb_top__DOT__u_dcache__DOT__req_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("resp_rdata", &(TOP.tb_top__DOT__u_dcache__DOT__resp_rdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("resp_valid", &(TOP.tb_top__DOT__u_dcache__DOT__resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("rst_n", &(TOP.tb_top__DOT__u_dcache__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("s0_accept", &(TOP.tb_top__DOT__u_dcache__DOT__s0_accept), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("s0_index", &(TOP.tb_top__DOT__u_dcache__DOT__s0_index), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_tb_top__u_dcache->varInsert("s0_offset", &(TOP.tb_top__DOT__u_dcache__DOT__s0_offset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,4,0);
    __Vscopep_tb_top__u_dcache->varInsert("s0_tag", &(TOP.tb_top__DOT__u_dcache__DOT__s0_tag), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,18,0);
    __Vscopep_tb_top__u_dcache->varInsert("s0s1_conflict", &(TOP.tb_top__DOT__u_dcache__DOT__s0s1_conflict), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_be", &(TOP.tb_top__DOT__u_dcache__DOT__s1_be), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_can_advance", &(TOP.tb_top__DOT__u_dcache__DOT__s1_can_advance), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_index", &(TOP.tb_top__DOT__u_dcache__DOT__s1_index), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_offset", &(TOP.tb_top__DOT__u_dcache__DOT__s1_offset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_rd_line", &(TOP.tb_top__DOT__u_dcache__DOT__s1_rd_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,0 ,255,0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_rd_tag", &(TOP.tb_top__DOT__u_dcache__DOT__s1_rd_tag), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,0 ,18,0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_tag", &(TOP.tb_top__DOT__u_dcache__DOT__s1_tag), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,18,0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_valid", &(TOP.tb_top__DOT__u_dcache__DOT__s1_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_wdata", &(TOP.tb_top__DOT__u_dcache__DOT__s1_wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_we", &(TOP.tb_top__DOT__u_dcache__DOT__s1_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("s1_word", &(TOP.tb_top__DOT__u_dcache__DOT__s1_word), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,2,0);
    __Vscopep_tb_top__u_dcache->varInsert("st_hit", &(TOP.tb_top__DOT__u_dcache__DOT__st_hit), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("state", &(TOP.tb_top__DOT__u_dcache__DOT__state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_top__u_dcache->varInsert("store_be", &(TOP.tb_top__DOT__u_dcache__DOT__store_be), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("store_line", &(TOP.tb_top__DOT__u_dcache__DOT__store_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,255,0);
    __Vscopep_tb_top__u_dcache->varInsert("valid_q", &(TOP.tb_top__DOT__u_dcache__DOT__valid_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,255 ,0,0);
    __Vscopep_tb_top__u_dcache->varInsert("victim_dirty", &(TOP.tb_top__DOT__u_dcache__DOT__victim_dirty), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("victim_line", &(TOP.tb_top__DOT__u_dcache__DOT__victim_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top__u_dcache->varInsert("victim_sel", &(TOP.tb_top__DOT__u_dcache__DOT__victim_sel), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_tb_top__u_dcache->varInsert("victim_tag", &(TOP.tb_top__DOT__u_dcache__DOT__victim_tag), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,18,0);
    __Vscopep_tb_top__u_dcache->varInsert("was_replay", &(TOP.tb_top__DOT__u_dcache__DOT__was_replay), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache->varInsert("way_hit", &(TOP.tb_top__DOT__u_dcache__DOT__way_hit), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_tb_top__u_dcache->varInsert("way_we", &(TOP.tb_top__DOT__u_dcache__DOT__way_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_tb_top__u_dcache->varInsert("wr_be", &(TOP.tb_top__DOT__u_dcache__DOT__wr_be), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache->varInsert("wr_index", &(TOP.tb_top__DOT__u_dcache__DOT__wr_index), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_tb_top__u_dcache->varInsert("wr_line", &(TOP.tb_top__DOT__u_dcache__DOT__wr_line), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,255,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("clk", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("mem", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,255 ,255,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("raddr", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("rdata", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("waddr", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__waddr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("wbe", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wbe), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data->varInsert("wdata", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data__unnamedblk1->varInsert("b", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("clk", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("mem", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,255 ,18,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("raddr", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__raddr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("rdata", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__rdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,18,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("waddr", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__waddr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("wdata", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,18,0);
    __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag->varInsert("we", &(TOP.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_dcache__unnamedblk1->varInsert("s", &(TOP.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__unnamedblk2->varInsert("w", &(TOP.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__unnamedblk3->varInsert("w", &(TOP.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__unnamedblk4->varInsert("w", &(TOP.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_dcache__unnamedblk5->varInsert("w", &(TOP.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_mem__DOT__ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("CNT_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_mem__DOT__CNT_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("LATENCY", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_mem__DOT__LATENCY))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("LINES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_mem__DOT__LINES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("LINE_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_mem__DOT__LINE_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("LINE_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_mem__DOT__LINE_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("OFFSET_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb_top__DOT__u_mem__DOT__OFFSET_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("busy", &(TOP.tb_top__DOT__u_mem__DOT__busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_mem->varInsert("clk", &(TOP.tb_top__DOT__u_mem__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_mem->varInsert("cnt", &(TOP.tb_top__DOT__u_mem__DOT__cnt), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_top__u_mem->varInsert("mem", &(TOP.tb_top__DOT__u_mem__DOT__mem), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,4095 ,255,0);
    __Vscopep_tb_top__u_mem->varInsert("mem_req_addr", &(TOP.tb_top__DOT__u_mem__DOT__mem_req_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("mem_req_be", &(TOP.tb_top__DOT__u_mem__DOT__mem_req_be), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_top__u_mem->varInsert("mem_req_ready", &(TOP.tb_top__DOT__u_mem__DOT__mem_req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_top__u_mem->varInsert("mem_req_valid", &(TOP.tb_top__DOT__u_mem__DOT__mem_req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_mem->varInsert("mem_req_wdata", &(TOP.tb_top__DOT__u_mem__DOT__mem_req_wdata), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top__u_mem->varInsert("mem_req_we", &(TOP.tb_top__DOT__u_mem__DOT__mem_req_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_mem->varInsert("mem_resp_rdata", &(TOP.tb_top__DOT__u_mem__DOT__mem_resp_rdata), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_tb_top__u_mem->varInsert("mem_resp_valid", &(TOP.tb_top__DOT__u_mem__DOT__mem_resp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_mem->varInsert("pending_line", &(TOP.tb_top__DOT__u_mem__DOT__pending_line), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,11,0);
    __Vscopep_tb_top__u_mem->varInsert("pending_we", &(TOP.tb_top__DOT__u_mem__DOT__pending_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_mem->varInsert("rst_n", &(TOP.tb_top__DOT__u_mem__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_top__u_mem__unnamedblk1->varInsert("b", &(TOP.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_dcache_pkg);
    __Vhier.remove(0, __Vscopep_tb_top);
    __Vhier.remove(__Vscopep_tb_top, __Vscopep_tb_top__u_dcache);
    __Vhier.remove(__Vscopep_tb_top, __Vscopep_tb_top__u_mem);
    __Vhier.remove(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__);
    __Vhier.remove(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk1);
    __Vhier.remove(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk2);
    __Vhier.remove(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk3);
    __Vhier.remove(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk4);
    __Vhier.remove(__Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache__unnamedblk5);
    __Vhier.remove(__Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data);
    __Vhier.remove(__Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag);
    __Vhier.remove(__Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data__unnamedblk1);
    __Vhier.remove(__Vscopep_tb_top__u_mem, __Vscopep_tb_top__u_mem__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_dcache_pkg, __Vscopep_dcache_pkg = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top, __Vscopep_tb_top = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache, __Vscopep_tb_top__u_dcache = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data__unnamedblk1, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag, __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__unnamedblk1, __Vscopep_tb_top__u_dcache__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__unnamedblk2, __Vscopep_tb_top__u_dcache__unnamedblk2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__unnamedblk3, __Vscopep_tb_top__u_dcache__unnamedblk3 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__unnamedblk4, __Vscopep_tb_top__u_dcache__unnamedblk4 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_dcache__unnamedblk5, __Vscopep_tb_top__u_dcache__unnamedblk5 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_mem, __Vscopep_tb_top__u_mem = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_top__u_mem__unnamedblk1, __Vscopep_tb_top__u_mem__unnamedblk1 = nullptr);
    // Tear down sub module instances
    TOP__dcache_pkg.dtor();
}
