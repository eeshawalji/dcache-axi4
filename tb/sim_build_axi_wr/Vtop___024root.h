// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(req_valid,0,0);
        VL_OUT8(req_ready,0,0);
        VL_OUT8(resp_valid,0,0);
        VL_OUT8(resp_error,0,0);
        VL_OUT8(m_axi_awid,3,0);
        VL_OUT8(m_axi_awlen,7,0);
        VL_OUT8(m_axi_awsize,2,0);
        VL_OUT8(m_axi_awburst,1,0);
        VL_OUT8(m_axi_awlock,0,0);
        VL_OUT8(m_axi_awcache,3,0);
        VL_OUT8(m_axi_awprot,2,0);
        VL_OUT8(m_axi_awvalid,0,0);
        VL_IN8(m_axi_awready,0,0);
        VL_OUT8(m_axi_wstrb,7,0);
        VL_OUT8(m_axi_wlast,0,0);
        VL_OUT8(m_axi_wvalid,0,0);
        VL_IN8(m_axi_wready,0,0);
        VL_IN8(m_axi_bid,3,0);
        VL_IN8(m_axi_bresp,1,0);
        VL_IN8(m_axi_bvalid,0,0);
        VL_OUT8(m_axi_bready,0,0);
        CData/*0:0*/ tb_axi_wr__DOT__clk;
        CData/*0:0*/ tb_axi_wr__DOT__rst_n;
        CData/*0:0*/ tb_axi_wr__DOT__req_valid;
        CData/*0:0*/ tb_axi_wr__DOT__req_ready;
        CData/*0:0*/ tb_axi_wr__DOT__resp_valid;
        CData/*0:0*/ tb_axi_wr__DOT__resp_error;
        CData/*3:0*/ tb_axi_wr__DOT__m_axi_awid;
        CData/*7:0*/ tb_axi_wr__DOT__m_axi_awlen;
        CData/*2:0*/ tb_axi_wr__DOT__m_axi_awsize;
        CData/*1:0*/ tb_axi_wr__DOT__m_axi_awburst;
        CData/*0:0*/ tb_axi_wr__DOT__m_axi_awlock;
        CData/*3:0*/ tb_axi_wr__DOT__m_axi_awcache;
        CData/*2:0*/ tb_axi_wr__DOT__m_axi_awprot;
        CData/*0:0*/ tb_axi_wr__DOT__m_axi_awvalid;
        CData/*0:0*/ tb_axi_wr__DOT__m_axi_awready;
        CData/*7:0*/ tb_axi_wr__DOT__m_axi_wstrb;
        CData/*0:0*/ tb_axi_wr__DOT__m_axi_wlast;
        CData/*0:0*/ tb_axi_wr__DOT__m_axi_wvalid;
        CData/*0:0*/ tb_axi_wr__DOT__m_axi_wready;
        CData/*3:0*/ tb_axi_wr__DOT__m_axi_bid;
        CData/*1:0*/ tb_axi_wr__DOT__m_axi_bresp;
        CData/*0:0*/ tb_axi_wr__DOT__m_axi_bvalid;
        CData/*0:0*/ tb_axi_wr__DOT__m_axi_bready;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__clk;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__rst_n;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__req_valid;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__req_ready;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__resp_valid;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__resp_error;
        CData/*3:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awid;
        CData/*7:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awlen;
        CData/*2:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awsize;
        CData/*1:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awburst;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awlock;
        CData/*3:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awcache;
        CData/*2:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awprot;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awready;
        CData/*7:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_wstrb;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid;
    };
    struct {
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_wready;
        CData/*3:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_bid;
        CData/*1:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_bresp;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_bvalid;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_bready;
        CData/*2:0*/ tb_axi_wr__DOT__u_wr__DOT__state;
        CData/*2:0*/ tb_axi_wr__DOT__u_wr__DOT__state_n;
        CData/*1:0*/ tb_axi_wr__DOT__u_wr__DOT__beat_cnt;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__err_q;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__aw_accept;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__w_beat;
        CData/*0:0*/ tb_axi_wr__DOT__u_wr__DOT__b_accept;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_wr__DOT__u_wr__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(req_addr,31,0);
        VL_INW(req_line,255,0,8);
        VL_OUT(m_axi_awaddr,31,0);
        IData/*31:0*/ tb_axi_wr__DOT__req_addr;
        VlWide<8>/*255:0*/ tb_axi_wr__DOT__req_line;
        IData/*31:0*/ tb_axi_wr__DOT__m_axi_awaddr;
        IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__req_addr;
        VlWide<8>/*255:0*/ tb_axi_wr__DOT__u_wr__DOT__req_line;
        IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_awaddr;
        IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__addr_q;
        IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(m_axi_wdata,63,0);
        QData/*63:0*/ tb_axi_wr__DOT__m_axi_wdata;
        QData/*63:0*/ tb_axi_wr__DOT__u_wr__DOT__m_axi_wdata;
        VlUnpacked<QData/*63:0*/, 4> tb_axi_wr__DOT__u_wr__DOT__line_q;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<QData/*63:0*/, 4>, false, QData/*63:0*/, 1> __VdlyCommitQueuetb_axi_wr__DOT__u_wr__DOT__line_q;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*7:0*/ tb_axi_wr__DOT__u_wr__DOT__AWLEN_FIXED = 3U;
    static constexpr CData/*2:0*/ tb_axi_wr__DOT__u_wr__DOT__AWSIZE_FIXED = 3U;
    static constexpr CData/*1:0*/ tb_axi_wr__DOT__u_wr__DOT__BURST_INCR = 1U;
    static constexpr CData/*1:0*/ tb_axi_wr__DOT__u_wr__DOT__RESP_OKAY = 0U;
    static constexpr CData/*1:0*/ tb_axi_wr__DOT__u_wr__DOT__LAST_BEAT = 3U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__ADDR_W = 0x00000020U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__LINE_BYTES = 0x00000020U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__AXI_DATA_W = 0x00000040U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__AXI_ID_W = 4U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__ADDR_W = 0x00000020U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__LINE_BYTES = 0x00000020U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__AXI_DATA_W = 0x00000040U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__AXI_ID_W = 4U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__LINE_W = 0x00000100U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__BEATS = 4U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__AXI_BYTES = 8U;
    static constexpr IData/*31:0*/ tb_axi_wr__DOT__u_wr__DOT__BEAT_W = 2U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
