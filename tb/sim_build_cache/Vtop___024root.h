// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_dcache_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_dcache_pkg* __PVT__dcache_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(req_valid,0,0);
        VL_OUT8(req_ready,0,0);
        VL_IN8(req_we,0,0);
        VL_IN8(req_be,3,0);
        VL_OUT8(resp_valid,0,0);
        CData/*0:0*/ tb_top__DOT__clk;
        CData/*0:0*/ tb_top__DOT__rst_n;
        CData/*0:0*/ tb_top__DOT__req_valid;
        CData/*0:0*/ tb_top__DOT__req_ready;
        CData/*0:0*/ tb_top__DOT__req_we;
        CData/*3:0*/ tb_top__DOT__req_be;
        CData/*0:0*/ tb_top__DOT__resp_valid;
        CData/*0:0*/ tb_top__DOT__mem_req_valid;
        CData/*0:0*/ tb_top__DOT__mem_req_ready;
        CData/*0:0*/ tb_top__DOT__mem_req_we;
        CData/*0:0*/ tb_top__DOT__mem_resp_valid;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__clk;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__rst_n;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__req_valid;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__req_ready;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__req_we;
        CData/*3:0*/ tb_top__DOT__u_dcache__DOT__req_be;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__resp_valid;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__mem_req_valid;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__mem_req_ready;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__mem_req_we;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__mem_resp_valid;
        CData/*7:0*/ tb_top__DOT__u_dcache__DOT__s0_index;
        CData/*4:0*/ tb_top__DOT__u_dcache__DOT__s0_offset;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__s1_valid;
        CData/*7:0*/ tb_top__DOT__u_dcache__DOT__s1_index;
        CData/*4:0*/ tb_top__DOT__u_dcache__DOT__s1_offset;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__s1_we;
        CData/*3:0*/ tb_top__DOT__u_dcache__DOT__s1_be;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__s0_accept;
        CData/*7:0*/ tb_top__DOT__u_dcache__DOT__array_raddr;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__s1_can_advance;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__s0s1_conflict;
        CData/*7:0*/ tb_top__DOT__u_dcache__DOT__wr_index;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__way_we;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__cmd_fill;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__cmd_store;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__cmd_retire;
        CData/*2:0*/ tb_top__DOT__u_dcache__DOT__state;
        CData/*2:0*/ tb_top__DOT__u_dcache__DOT__next_state;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__way_hit;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__hit;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__victim_sel;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__victim_dirty;
        CData/*2:0*/ tb_top__DOT__u_dcache__DOT__s1_word;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__rd_hit;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__st_hit;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__miss;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__dbg_first;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__dbg_hit_way;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__dbg_acc_valid;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__dbg_acc_hit;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__dbg_acc_we;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__dbg_acc_way;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__dbg_ev_fill;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__dbg_ev_evict;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__was_replay;
    };
    struct {
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk;
        CData/*7:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr;
        CData/*7:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__waddr;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk;
        CData/*7:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__raddr;
        CData/*0:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__we;
        CData/*7:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__waddr;
        CData/*0:0*/ tb_top__DOT__u_mem__DOT__clk;
        CData/*0:0*/ tb_top__DOT__u_mem__DOT__rst_n;
        CData/*0:0*/ tb_top__DOT__u_mem__DOT__mem_req_valid;
        CData/*0:0*/ tb_top__DOT__u_mem__DOT__mem_req_ready;
        CData/*0:0*/ tb_top__DOT__u_mem__DOT__mem_req_we;
        CData/*0:0*/ tb_top__DOT__u_mem__DOT__mem_resp_valid;
        CData/*0:0*/ tb_top__DOT__u_mem__DOT__busy;
        CData/*3:0*/ tb_top__DOT__u_mem__DOT__cnt;
        CData/*0:0*/ tb_top__DOT__u_mem__DOT__pending_we;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__u_mem__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*11:0*/ tb_top__DOT__u_mem__DOT__pending_line;
        VL_IN(req_addr,31,0);
        VL_IN(req_wdata,31,0);
        VL_OUT(resp_rdata,31,0);
        IData/*31:0*/ tb_top__DOT__req_addr;
        IData/*31:0*/ tb_top__DOT__req_wdata;
        IData/*31:0*/ tb_top__DOT__resp_rdata;
        IData/*31:0*/ tb_top__DOT__mem_req_addr;
        VlWide<8>/*255:0*/ tb_top__DOT__mem_req_wdata;
        VlWide<8>/*255:0*/ tb_top__DOT__mem_resp_rdata;
        IData/*31:0*/ tb_top__DOT__mem_req_be;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__req_addr;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__req_wdata;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__resp_rdata;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__mem_req_addr;
        VlWide<8>/*255:0*/ tb_top__DOT__u_dcache__DOT__mem_req_wdata;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__mem_req_be;
        VlWide<8>/*255:0*/ tb_top__DOT__u_dcache__DOT__mem_resp_rdata;
        IData/*18:0*/ tb_top__DOT__u_dcache__DOT__s0_tag;
        IData/*18:0*/ tb_top__DOT__u_dcache__DOT__s1_tag;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__s1_wdata;
        VlWide<8>/*255:0*/ tb_top__DOT__u_dcache__DOT__wr_line;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__wr_be;
        VlWide<8>/*255:0*/ tb_top__DOT__u_dcache__DOT__hit_line;
        IData/*18:0*/ tb_top__DOT__u_dcache__DOT__victim_tag;
        VlWide<8>/*255:0*/ tb_top__DOT__u_dcache__DOT__victim_line;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__store_be;
        VlWide<8>/*255:0*/ tb_top__DOT__u_dcache__DOT__store_line;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__dbg_acc_addr;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w;
        VlWide<8>/*255:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata;
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wbe;
        VlWide<8>/*255:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata;
    };
    struct {
        IData/*31:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b;
        IData/*18:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__rdata;
        IData/*18:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__wdata;
        IData/*31:0*/ tb_top__DOT__u_mem__DOT__mem_req_addr;
        VlWide<8>/*255:0*/ tb_top__DOT__u_mem__DOT__mem_req_wdata;
        IData/*31:0*/ tb_top__DOT__u_mem__DOT__mem_req_be;
        VlWide<8>/*255:0*/ tb_top__DOT__u_mem__DOT__mem_resp_rdata;
        IData/*31:0*/ tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*18:0*/, 1> tb_top__DOT__u_dcache__DOT__s1_rd_tag;
        VlUnpacked<VlWide<8>/*255:0*/, 1> tb_top__DOT__u_dcache__DOT__s1_rd_line;
        VlUnpacked<CData/*0:0*/, 256> tb_top__DOT__u_dcache__DOT__valid_q;
        VlUnpacked<CData/*0:0*/, 256> tb_top__DOT__u_dcache__DOT__dirty_q;
        VlUnpacked<VlWide<8>/*255:0*/, 256> tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem;
        VlUnpacked<IData/*18:0*/, 256> tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem;
        VlUnpacked<VlWide<8>/*255:0*/, 4096> tb_top__DOT__u_mem__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 256>, false, CData/*0:0*/, 1> __VdlyCommitQueuetb_top__DOT__u_dcache__DOT__valid_q;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 256>, false, CData/*0:0*/, 1> __VdlyCommitQueuetb_top__DOT__u_dcache__DOT__dirty_q;
    VlNBACommitQueue<VlUnpacked<VlWide<8>/*255:0*/, 256>, true, VlWide<8>/*255:0*/, 1> __VdlyCommitQueuetb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem;
    VlNBACommitQueue<VlUnpacked<VlWide<8>/*255:0*/, 4096>, true, VlWide<8>/*255:0*/, 1> __VdlyCommitQueuetb_top__DOT__u_mem__DOT__mem;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ tb_top__DOT__CAPACITY_BYTES = 0x00002000U;
    static constexpr IData/*31:0*/ tb_top__DOT__LINE_BYTES = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__WAYS = 1U;
    static constexpr IData/*31:0*/ tb_top__DOT__ADDR_W = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__CPU_DATA_W = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__MEM_LATENCY = 8U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__CAPACITY_BYTES = 0x00002000U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__LINE_BYTES = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__WAYS = 1U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__ADDR_W = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__CPU_DATA_W = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__AXI_DATA_W = 0x00000040U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__AXI_ID_W = 4U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__SETS = 0x00000100U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__OFFSET_W = 5U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__INDEX_W = 8U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__TAG_W = 0x00000013U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__BEATS = 4U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__BYTE_SEL_W = 2U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__WORD_SEL_W = 3U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__WAY_IDX_W = 1U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__WIDTH = 0x00000100U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__DEPTH = 0x00000100U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__BYTES = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__WIDTH = 0x00000013U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__DEPTH = 0x00000100U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_mem__DOT__ADDR_W = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_mem__DOT__LINE_BYTES = 0x00000020U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_mem__DOT__LATENCY = 8U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_mem__DOT__LINES = 0x00001000U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_mem__DOT__OFFSET_W = 5U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_mem__DOT__LINE_W = 0x00000100U;
    static constexpr IData/*31:0*/ tb_top__DOT__u_mem__DOT__CNT_W = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
