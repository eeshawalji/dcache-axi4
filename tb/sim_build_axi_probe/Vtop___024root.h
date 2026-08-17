// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(m_axi_awid,3,0);
        VL_IN8(m_axi_awlen,7,0);
        VL_IN8(m_axi_awsize,2,0);
        VL_IN8(m_axi_awburst,1,0);
        VL_IN8(m_axi_awlock,0,0);
        VL_IN8(m_axi_awcache,3,0);
        VL_IN8(m_axi_awprot,2,0);
        VL_IN8(m_axi_awvalid,0,0);
        VL_IN8(m_axi_awready,0,0);
        VL_IN8(m_axi_wstrb,7,0);
        VL_IN8(m_axi_wlast,0,0);
        VL_IN8(m_axi_wvalid,0,0);
        VL_IN8(m_axi_wready,0,0);
        VL_IN8(m_axi_bid,3,0);
        VL_IN8(m_axi_bresp,1,0);
        VL_IN8(m_axi_bvalid,0,0);
        VL_IN8(m_axi_bready,0,0);
        VL_IN8(m_axi_arid,3,0);
        VL_IN8(m_axi_arlen,7,0);
        VL_IN8(m_axi_arsize,2,0);
        VL_IN8(m_axi_arburst,1,0);
        VL_IN8(m_axi_arlock,0,0);
        VL_IN8(m_axi_arcache,3,0);
        VL_IN8(m_axi_arprot,2,0);
        VL_IN8(m_axi_arvalid,0,0);
        VL_IN8(m_axi_arready,0,0);
        VL_IN8(m_axi_rid,3,0);
        VL_IN8(m_axi_rresp,1,0);
        VL_IN8(m_axi_rlast,0,0);
        VL_IN8(m_axi_rvalid,0,0);
        VL_IN8(m_axi_rready,0,0);
        CData/*0:0*/ tb_axi_probe__DOT__clk;
        CData/*0:0*/ tb_axi_probe__DOT__rst_n;
        CData/*3:0*/ tb_axi_probe__DOT__m_axi_awid;
        CData/*7:0*/ tb_axi_probe__DOT__m_axi_awlen;
        CData/*2:0*/ tb_axi_probe__DOT__m_axi_awsize;
        CData/*1:0*/ tb_axi_probe__DOT__m_axi_awburst;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_awlock;
        CData/*3:0*/ tb_axi_probe__DOT__m_axi_awcache;
        CData/*2:0*/ tb_axi_probe__DOT__m_axi_awprot;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_awvalid;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_awready;
        CData/*7:0*/ tb_axi_probe__DOT__m_axi_wstrb;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_wlast;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_wvalid;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_wready;
        CData/*3:0*/ tb_axi_probe__DOT__m_axi_bid;
        CData/*1:0*/ tb_axi_probe__DOT__m_axi_bresp;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_bvalid;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_bready;
        CData/*3:0*/ tb_axi_probe__DOT__m_axi_arid;
        CData/*7:0*/ tb_axi_probe__DOT__m_axi_arlen;
        CData/*2:0*/ tb_axi_probe__DOT__m_axi_arsize;
        CData/*1:0*/ tb_axi_probe__DOT__m_axi_arburst;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_arlock;
        CData/*3:0*/ tb_axi_probe__DOT__m_axi_arcache;
        CData/*2:0*/ tb_axi_probe__DOT__m_axi_arprot;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_arvalid;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_arready;
        CData/*3:0*/ tb_axi_probe__DOT__m_axi_rid;
        CData/*1:0*/ tb_axi_probe__DOT__m_axi_rresp;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_rlast;
    };
    struct {
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_rvalid;
        CData/*0:0*/ tb_axi_probe__DOT__m_axi_rready;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        VL_IN(m_axi_awaddr,31,0);
        VL_IN(m_axi_araddr,31,0);
        IData/*31:0*/ tb_axi_probe__DOT__m_axi_awaddr;
        IData/*31:0*/ tb_axi_probe__DOT__m_axi_araddr;
        VL_IN64(m_axi_wdata,63,0);
        VL_IN64(m_axi_rdata,63,0);
        QData/*63:0*/ tb_axi_probe__DOT__m_axi_wdata;
        QData/*63:0*/ tb_axi_probe__DOT__m_axi_rdata;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ tb_axi_probe__DOT__ADDR_W = 0x00000020U;
    static constexpr IData/*31:0*/ tb_axi_probe__DOT__AXI_DATA_W = 0x00000040U;
    static constexpr IData/*31:0*/ tb_axi_probe__DOT__AXI_ID_W = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
