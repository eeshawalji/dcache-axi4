// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_hf093358f_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_h5b0f8d54_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_h6f3c35af_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtemp_4;
    // Body
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_we 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__wdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag 
            << 0x0000000dU) | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                                << 5U) | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_offset)));
    vlSelfRef.tb_top__DOT__req_we = vlSelfRef.req_we;
    vlSelfRef.tb_top__DOT__req_be = vlSelfRef.req_be;
    vlSelfRef.tb_top__DOT__req_wdata = vlSelfRef.req_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_error 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__err_q;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag 
            << 0x0000000dU) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                               << 5U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index;
    vlSelfRef.tb_top__DOT__m_axi_bid = vlSelfRef.m_axi_bid;
    vlSelfRef.tb_top__DOT__m_axi_bresp = vlSelfRef.m_axi_bresp;
    vlSelfRef.tb_top__DOT__m_axi_rid = vlSelfRef.m_axi_rid;
    vlSelfRef.tb_top__DOT__m_axi_rdata = vlSelfRef.m_axi_rdata;
    vlSelfRef.tb_top__DOT__m_axi_rresp = vlSelfRef.m_axi_rresp;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awaddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__addr_q;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_araddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__addr_q;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_valid 
        = (4U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[0U] 
        = (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[0U]);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[1U] 
        = (IData)((vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[2U] 
        = (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[1U]);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[3U] 
        = (IData)((vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[4U] 
        = (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[2U]);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[5U] 
        = (IData)((vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[6U] 
        = (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[3U]);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[7U] 
        = (IData)((vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_valid 
        = (2U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_ready 
        = (0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_ready 
        = (0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state));
    vlSelfRef.tb_top__DOT__m_axi_rlast = vlSelfRef.m_axi_rlast;
    vlSelfRef.tb_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_valid 
        = (4U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__req_valid = vlSelfRef.req_valid;
    vlSelfRef.tb_top__DOT__m_axi_arready = vlSelfRef.m_axi_arready;
    vlSelfRef.tb_top__DOT__m_axi_rvalid = vlSelfRef.m_axi_rvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wlast 
        = (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt));
    vlSelfRef.tb_top__DOT__m_axi_awready = vlSelfRef.m_axi_awready;
    vlSelfRef.tb_top__DOT__m_axi_wready = vlSelfRef.m_axi_wready;
    vlSelfRef.tb_top__DOT__m_axi_bvalid = vlSelfRef.m_axi_bvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arvalid 
        = (1U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rready 
        = (2U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word = 
        (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_offset) 
               >> 2U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awvalid 
        = (1U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wvalid 
        = (2U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bready 
        = (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[7U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_valid 
        = (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state));
    vlSelfRef.tb_top__DOT__req_addr = vlSelfRef.req_addr;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_tag[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__rdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_we = vlSelfRef.tb_top__DOT__req_we;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_be = vlSelfRef.tb_top__DOT__req_be;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_wdata 
        = vlSelfRef.tb_top__DOT__req_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_error 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_error;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_addr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_addr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__waddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__waddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bid 
        = vlSelfRef.tb_top__DOT__m_axi_bid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bresp 
        = vlSelfRef.tb_top__DOT__m_axi_bresp;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rid 
        = vlSelfRef.tb_top__DOT__m_axi_rid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rdata 
        = vlSelfRef.tb_top__DOT__m_axi_rdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rresp 
        = vlSelfRef.tb_top__DOT__m_axi_rresp;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n = vlSelfRef.tb_top__DOT__rst_n;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awaddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awaddr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_araddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_araddr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[7U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_ready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_ready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_ready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_ready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rlast 
        = vlSelfRef.tb_top__DOT__m_axi_rlast;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__clk = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_valid 
        = vlSelfRef.tb_top__DOT__req_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arready 
        = vlSelfRef.tb_top__DOT__m_axi_arready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rvalid 
        = vlSelfRef.tb_top__DOT__m_axi_rvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wlast 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wlast;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awready 
        = vlSelfRef.tb_top__DOT__m_axi_awready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wready 
        = vlSelfRef.tb_top__DOT__m_axi_wready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bvalid 
        = vlSelfRef.tb_top__DOT__m_axi_bvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arvalid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be = 0U;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be 
        = (((~ ((IData)(0x0000000fU) << (0x0000001fU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word) 
                                            << 2U)))) 
            & vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be) 
           | (0x00000000ffffffffULL & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_be) 
                                       << (0x0000001fU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word) 
                                              << 2U)))));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awvalid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wvalid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_addr 
        = vlSelfRef.tb_top__DOT__req_addr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_tag = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line, Vtop__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_dirty = 0U;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) {
        if (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) 
             && (1U & (1U >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w))))) {
            if ((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w))) {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_tag 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_tag
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[0U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][0U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[1U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][1U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[2U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][2U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[3U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][3U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[4U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][4U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[5U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][5U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[6U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][6U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[7U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][7U];
            } else {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_tag = 0U;
                VL_ASSIGN_W(256, vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line, Vtop__ConstPool__CONST_h9e67c271_0);
            }
            vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_dirty 
                = (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) 
                    && (1U & (vlSelfRef.tb_top__DOT__u_dcache__DOT__valid_q
                              [vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index] 
                              >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)))) 
                   & ((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) 
                      && (1U & (vlSelfRef.tb_top__DOT__u_dcache__DOT__dirty_q
                                [vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index] 
                                >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)))));
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w 
            = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w);
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w)) {
        if (VL_LIKELY(((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w))))) {
            vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit 
                = (((~ ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w))) 
                    & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit)) 
                   | (1U & ((((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w)) 
                              && (1U & (vlSelfRef.tb_top__DOT__u_dcache__DOT__valid_q
                                        [vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index] 
                                        >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w)))) 
                             & (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w))
                                  ? vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_tag
                                 [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w)]
                                  : 0U) == vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag)) 
                            << (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w))));
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w 
            = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w);
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bresp 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bresp;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rresp 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rresp;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__rst_n 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__rst_n 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n;
    vlSelfRef.tb_top__DOT__m_axi_awaddr = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awaddr;
    vlSelfRef.tb_top__DOT__m_axi_araddr = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_araddr;
    vlSelfRef.tb_top__DOT__m_axi_wdata = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rlast 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rlast;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_evict 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rvalid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rvalid;
    vlSelfRef.tb_top__DOT__m_axi_wlast = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wlast;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bvalid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bvalid;
    vlSelfRef.tb_top__DOT__m_axi_arvalid = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arvalid;
    vlSelfRef.tb_top__DOT__m_axi_rready = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rready;
    vlSelfRef.tb_top__DOT__m_axi_awvalid = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awvalid;
    vlSelfRef.tb_top__DOT__m_axi_wvalid = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wvalid;
    vlSelfRef.tb_top__DOT__m_axi_bready = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_valid) 
           & (5U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_offset 
        = (0x0000001fU & vlSelfRef.tb_top__DOT__u_dcache__DOT__req_addr);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_tag = 
        (vlSelfRef.tb_top__DOT__u_dcache__DOT__req_addr 
         >> 0x0000000dU);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index 
        = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dcache__DOT__req_addr 
                          >> 5U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[7U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_tag 
            << 0x0000000dU) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                               << 5U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way = 0U;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w)) {
        if (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w)) 
             && (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                       >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w))))) {
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way 
                = (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w);
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w 
            = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w);
    }
    VL_ASSIGN_W(256, vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line, Vtop__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) {
        if ((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))) {
            __Vtemp_4[0U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][0U];
            __Vtemp_4[1U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][1U];
            __Vtemp_4[2U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][2U];
            __Vtemp_4[3U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][3U];
            __Vtemp_4[4U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][4U];
            __Vtemp_4[5U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][5U];
            __Vtemp_4[6U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][6U];
            __Vtemp_4[7U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][7U];
        } else {
            VL_ASSIGN_W(256, __Vtemp_4, Vtop__ConstPool__CONST_h9e67c271_0);
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[0U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[0U] 
               | (__Vtemp_4[0U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[1U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[1U] 
               | (__Vtemp_4[1U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[2U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[2U] 
               | (__Vtemp_4[2U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[3U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[3U] 
               | (__Vtemp_4[3U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[4U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[4U] 
               | (__Vtemp_4[4U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[5U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[5U] 
               | (__Vtemp_4[5U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[6U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[6U] 
               | (__Vtemp_4[6U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[7U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[7U] 
               | (__Vtemp_4[7U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w 
            = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w);
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__hit = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid));
    vlSelfRef.m_axi_awaddr = vlSelfRef.tb_top__DOT__m_axi_awaddr;
    vlSelfRef.m_axi_araddr = vlSelfRef.tb_top__DOT__m_axi_araddr;
    vlSelfRef.m_axi_wdata = vlSelfRef.tb_top__DOT__m_axi_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__ar_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arready));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__r_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rready));
    vlSelfRef.m_axi_wlast = vlSelfRef.tb_top__DOT__m_axi_wlast;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__aw_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awready));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__w_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wready));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__b_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bready));
    vlSelfRef.m_axi_arvalid = vlSelfRef.tb_top__DOT__m_axi_arvalid;
    vlSelfRef.m_axi_rready = vlSelfRef.tb_top__DOT__m_axi_rready;
    vlSelfRef.m_axi_awvalid = vlSelfRef.tb_top__DOT__m_axi_awvalid;
    vlSelfRef.m_axi_wvalid = vlSelfRef.tb_top__DOT__m_axi_wvalid;
    vlSelfRef.m_axi_bready = vlSelfRef.tb_top__DOT__m_axi_bready;
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_fill = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[0U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[0U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[1U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[1U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[2U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[2U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[3U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[3U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[4U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[4U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[5U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[5U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[6U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[6U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[7U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[7U];
    } else {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_fill = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[0U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[0U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[1U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[1U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[2U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[2U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[3U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[3U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[4U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[4U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[5U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[5U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[6U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[6U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[7U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[7U];
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_be = (vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be 
                                                   | (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill))));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_addr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_addr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_way 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_rdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line
        [(0x07ffffffU & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word))];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_hit 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__hit;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__miss = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we)) 
            & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__st_hit = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
         & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit) 
            & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state_n 
        = Vtop__ConstPool__TABLE_hf093358f_0[((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_valid) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__ar_accept) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rlast) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__r_beat) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state)))];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state_n 
        = Vtop__ConstPool__TABLE_h5b0f8d54_0[((((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__aw_accept) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wlast) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__w_beat))) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__b_accept) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state)))];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[7U];
    vlSelfRef.tb_top__DOT__resp_rdata = vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_rdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__next_state 
        = Vtop__ConstPool__TABLE_h6f3c35af_0[((((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_dirty) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__miss) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_ready) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_ready))) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_valid) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)))];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_retire 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit) 
           | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__st_hit));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__st_hit;
    vlSelfRef.resp_rdata = vlSelfRef.tb_top__DOT__resp_rdata;
    vlSelfRef.tb_top__DOT__resp_valid = vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_can_advance 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_retire)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we = 
        ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
            & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s0s1_conflict 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store) 
           & (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index) 
               == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index)) 
              & (vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_tag 
                 == vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag)));
    vlSelfRef.resp_valid = vlSelfRef.tb_top__DOT__resp_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wbe 
        = (vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_be 
           & (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we))));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__we 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_ready 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0s1_conflict)) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_can_advance));
    vlSelfRef.tb_top__DOT__req_ready = vlSelfRef.tb_top__DOT__u_dcache__DOT__req_ready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__req_valid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__req_ready));
    vlSelfRef.req_ready = vlSelfRef.tb_top__DOT__req_ready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__array_raddr 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_accept)
            ? (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index)
            : (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__array_raddr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__raddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__array_raddr;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__tb_top__DOT__u_dcache__DOT__valid_q__v0;
    __VdlyVal__tb_top__DOT__u_dcache__DOT__valid_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v0;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__u_dcache__DOT__dirty_q__v0;
    __VdlyVal__tb_top__DOT__u_dcache__DOT__dirty_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v0;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__u_dcache__DOT__dirty_q__v1;
    __VdlyVal__tb_top__DOT__u_dcache__DOT__dirty_q__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v1;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v1;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v2;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v2 = 0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n) 
                       & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_valid)) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_error))))) {
        VL_WRITEF_NX("[%0t] %%Error: dcache.sv:378: Assertion failed in %m: dcache: writeback failed, BRESP not OKAY\n",3, 'M',vlSymsp->name(),"tb_top.u_dcache", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/dcache.sv", 378, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n) 
                       & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__was_replay)) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__miss))))) {
        VL_WRITEF_NX("[%0t] %%Error: dcache.sv:374: Assertion failed in %m: dcache: miss immediately after fill -- the fill did not take\n",3, 'M',vlSymsp->name(),"tb_top.u_dcache", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/dcache.sv", 374, "");
    }
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n) {
        if (vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) {
            __VdlyVal__tb_top__DOT__u_dcache__DOT__valid_q__v0 
                = (vlSelfRef.tb_top__DOT__u_dcache__DOT__valid_q
                   [vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index] 
                   | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we));
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v0 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__valid_q.enqueue(__VdlyVal__tb_top__DOT__u_dcache__DOT__valid_q__v0, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v0));
            __VdlyVal__tb_top__DOT__u_dcache__DOT__dirty_q__v0 
                = (vlSelfRef.tb_top__DOT__u_dcache__DOT__dirty_q
                   [vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index] 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we)));
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v0 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__dirty_q.enqueue(__VdlyVal__tb_top__DOT__u_dcache__DOT__dirty_q__v0, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v0));
        } else if (vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store) {
            __VdlyVal__tb_top__DOT__u_dcache__DOT__dirty_q__v1 
                = (vlSelfRef.tb_top__DOT__u_dcache__DOT__dirty_q
                   [vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index] 
                   | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we));
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v1 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__dirty_q.enqueue(__VdlyVal__tb_top__DOT__u_dcache__DOT__dirty_q__v1, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v1));
        }
    } else {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s)) {
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v1 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s);
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__valid_q.enqueue(0U, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v1));
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v2 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s);
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__dirty_q.enqueue(0U, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__dirty_q__v2));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s 
                = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s);
        }
    }
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n) {
        if (vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_can_advance) {
            if (vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_accept) {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first = 1U;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__req_wdata;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_be 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__req_be;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_offset 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_offset;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__req_we;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_tag;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid = 1U;
            } else {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first = 0U;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid = 0U;
            }
        } else {
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__dirty_q.commit(vlSelfRef.tb_top__DOT__u_dcache__DOT__dirty_q);
    vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__valid_q.commit(vlSelfRef.tb_top__DOT__u_dcache__DOT__valid_q);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__was_replay 
        = (6U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__state = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n)
                                                    ? (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__next_state)
                                                    : 0U);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word = 
        (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_offset) 
               >> 2U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_we 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__wdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag 
            << 0x0000000dU) | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                                << 5U) | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_offset)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag 
            << 0x0000000dU) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                               << 5U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be = 0U;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be 
        = (((~ ((IData)(0x0000000fU) << (0x0000001fU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word) 
                                            << 2U)))) 
            & vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be) 
           | (0x00000000ffffffffULL & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_be) 
                                       << (0x0000001fU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word) 
                                              << 2U)))));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__waddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_valid 
        = (4U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_valid 
        = (2U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt;
    __Vdly__tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt = 0;
    QData/*63:0*/ __VdlyVal__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0;
    __VdlyVal__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0;
    __VdlySet__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0 = 0;
    // Body
    __Vdly__tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt;
    __VdlySet__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0 = 0U;
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__rst_n) {
        if (VL_UNLIKELY(((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state)) 
                           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_valid)) 
                          & (0U != (0x0000001fU & vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_addr)))))) {
            VL_WRITEF_NX("[%0t] %%Error: axi_read_master.sv:199: Assertion failed in %m: axi_read_master: unaligned request 0x%0h\n",4, 'M',vlSymsp->name(),"tb_top.u_dcache.u_rd", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_addr);
            VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_read_master.sv", 199, "");
        }
        if (((0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state)) 
             & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_valid))) {
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__addr_q 
                = (0xffffffe0U & vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_addr);
            __Vdly__tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt = 0U;
        }
        if (vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__r_beat) {
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rresp))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_read_master.sv:203: Assertion failed in %m: axi_read_master: beat %0d returned RRESP=%0d\n",5, 'M',vlSymsp->name(),"tb_top.u_dcache.u_rd", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt)
                             , '#',2,vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rresp);
                VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_read_master.sv", 203, "");
            }
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rid))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_read_master.sv:206: Assertion failed in %m: axi_read_master: beat %0d returned RID=%0d, expected 0\n",5, 'M',vlSymsp->name(),"tb_top.u_dcache.u_rd", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt)
                             , '#',4,vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rid);
                VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_read_master.sv", 206, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rlast) 
                              & (3U != (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt)))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_read_master.sv:212: Assertion failed in %m: axi_read_master: RLAST on beat %0d, expected 3\n",4, 'M',vlSymsp->name(),"tb_top.u_dcache.u_rd", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt));
                VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_read_master.sv", 212, "");
            }
            if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rlast)) 
                              & (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt)))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_read_master.sv:215: Assertion failed in %m: axi_read_master: beat %0d was last but RLAST was low\n",4, 'M',vlSymsp->name(),"tb_top.u_dcache.u_rd", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt));
                VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_read_master.sv", 215, "");
            }
            __VdlyVal__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rdata;
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt;
            __VdlySet__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0 = 1U;
            __Vdly__tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt)));
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state_n;
    } else {
        __Vdly__tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__addr_q = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state = 0U;
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt 
        = __Vdly__tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt;
    if (__VdlySet__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0) {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[__VdlyDim0__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0] 
            = __VdlyVal__tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q__v0;
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_araddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__addr_q;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[0U] 
        = (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[0U]);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[1U] 
        = (IData)((vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[0U] 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[2U] 
        = (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[1U]);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[3U] 
        = (IData)((vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[1U] 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[4U] 
        = (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[2U]);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[5U] 
        = (IData)((vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[2U] 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[6U] 
        = (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[3U]);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[7U] 
        = (IData)((vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[3U] 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_araddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_araddr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line[7U];
    vlSelfRef.tb_top__DOT__m_axi_araddr = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_araddr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_ready 
        = (0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arvalid 
        = (1U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rready 
        = (2U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_valid 
        = (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state));
    vlSelfRef.m_axi_araddr = vlSelfRef.tb_top__DOT__m_axi_araddr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_ready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_ready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arvalid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__ar_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arready));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__r_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rready));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_valid;
    vlSelfRef.tb_top__DOT__m_axi_arvalid = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arvalid;
    vlSelfRef.tb_top__DOT__m_axi_rready = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_rready;
    vlSelfRef.m_axi_arvalid = vlSelfRef.tb_top__DOT__m_axi_arvalid;
    vlSelfRef.m_axi_rready = vlSelfRef.tb_top__DOT__m_axi_rready;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt;
    __Vdly__tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt = 0;
    QData/*63:0*/ __VdlyVal__tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q__v0;
    __VdlyVal__tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q__v0;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q__v0 = 0;
    std::string __Vtemp_1;
    // Body
    __Vdly__tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt;
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__rst_n) {
        if (VL_UNLIKELY(((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state)) 
                           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_valid)) 
                          & (0U != (0x0000001fU & vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_addr)))))) {
            VL_WRITEF_NX("[%0t] %%Error: axi_write_master.sv:220: Assertion failed in %m: axi_write_master: unaligned request 0x%0h\n",4, 'M',vlSymsp->name(),"tb_top.u_dcache.u_wr", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_addr);
            VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_write_master.sv", 220, "");
        }
        if (vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__b_accept) {
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bresp))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_write_master.sv:224: Assertion failed in %m: axi_write_master: BRESP=%0d for 0x%0h\n",5, 'M',vlSymsp->name(),"tb_top.u_dcache.u_wr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bresp)
                             , '#',32,vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__addr_q);
                VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_write_master.sv", 224, "");
            }
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bid))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_write_master.sv:226: Assertion failed in %m: axi_write_master: BID=%0d, expected 0\n",4, 'M',vlSymsp->name(),"tb_top.u_dcache.u_wr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bid));
                VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_write_master.sv", 226, "");
            }
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bvalid) 
                          & (3U != (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state)))))) {
            __Vtemp_1 = Vtop___024unit::__Venumtab_enum_name19
                [vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state];
            VL_WRITEF_NX("[%0t] %%Error: axi_write_master.sv:232: Assertion failed in %m: axi_write_master: unexpected BVALID in state %s\n",4, 'M',vlSymsp->name(),"tb_top.u_dcache.u_wr", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(__Vtemp_1));
            VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_write_master.sv", 232, "");
        }
    }
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__rst_n) {
        if (((0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state)) 
             & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_valid))) {
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i = 0U;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__addr_q 
                = (0xffffffe0U & vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_addr);
            __Vdly__tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt = 0U;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__err_q = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i)) {
                __VdlyVal__tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q__v0 
                    = (((QData)((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line
                                        [(((IData)(0x0000003fU) 
                                           + (0x000000ffU 
                                              & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i))) 
                                          >> 5U)])) 
                        << ((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i)))
                             ? 0x00000020U : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i))))) 
                       | (((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i)))
                            ? 0ULL : ((QData)((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line
                                                      [
                                                      (((IData)(0x0000001fU) 
                                                        + 
                                                        (0x000000ffU 
                                                         & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i))))) 
                          | ((QData)((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line
                                             [(7U & 
                                               (VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))])) 
                             >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i)))));
                __VdlyDim0__tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q__v0 
                    = (3U & vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q.enqueue(__VdlyVal__tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q__v0, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q__v0));
                vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i);
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__w_beat) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wlast)))) {
            __Vdly__tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt)));
        }
        if (vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__b_accept) {
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__err_q 
                = (0U != (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bresp));
        }
    } else {
        __Vdly__tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__addr_q = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__err_q = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q.commit(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__rst_n)
            ? (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state_n)
            : 0U);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt 
        = __Vdly__tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_error 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__err_q;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awaddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__addr_q;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wlast 
        = (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_error 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_error;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awaddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awaddr;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wlast 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wlast;
    vlSelfRef.tb_top__DOT__m_axi_awaddr = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awaddr;
    vlSelfRef.tb_top__DOT__m_axi_wdata = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wdata;
    vlSelfRef.tb_top__DOT__m_axi_wlast = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wlast;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_ready 
        = (0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_valid 
        = (4U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awvalid 
        = (1U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wvalid 
        = (2U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bready 
        = (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state));
    vlSelfRef.m_axi_awaddr = vlSelfRef.tb_top__DOT__m_axi_awaddr;
    vlSelfRef.m_axi_wdata = vlSelfRef.tb_top__DOT__m_axi_wdata;
    vlSelfRef.m_axi_wlast = vlSelfRef.tb_top__DOT__m_axi_wlast;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_ready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_ready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awvalid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__aw_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awready));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wvalid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wvalid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__w_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wready));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bready 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__b_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bvalid) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bready));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_evict 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_valid;
    vlSelfRef.tb_top__DOT__m_axi_awvalid = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awvalid;
    vlSelfRef.tb_top__DOT__m_axi_wvalid = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wvalid;
    vlSelfRef.tb_top__DOT__m_axi_bready = vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_bready;
    vlSelfRef.m_axi_awvalid = vlSelfRef.tb_top__DOT__m_axi_awvalid;
    vlSelfRef.m_axi_wvalid = vlSelfRef.tb_top__DOT__m_axi_wvalid;
    vlSelfRef.m_axi_bready = vlSelfRef.tb_top__DOT__m_axi_bready;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyLsb__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlyLsb__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 = 0;
    VlWide<8>/*255:0*/ __VdlyMask__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    VL_ZERO_W(256, __VdlyMask__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0);
    VlWide<8>/*255:0*/ __VdlyElem__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0;
    VL_ZERO_W(256, __VdlyElem__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0);
    // Body
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b = 0U;
    while (VL_GTS_III(32, 0x00000020U, vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b)) {
        if ((1U & (vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wbe 
                   >> (0x0000001fU & vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b)))) {
            __VdlyVal__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & (((0U == (0x0000001fU 
                                           & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b)))
                                    ? 0U : (vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata
                                            [(((IData)(7U) 
                                               + (0x000000ffU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b))) 
                                              >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b))))) 
                                  | (vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata
                                     [(7U & (VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b) 
                                             >> 5U))] 
                                     >> (0x0000001fU 
                                         & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b)))));
            __VdlyLsb__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 
                = (0x000000ffU & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b));
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__waddr;
            VL_ASSIGN_W(256, __VdlyMask__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0, Vtop__ConstPool__CONST_h9e67c271_0);
            VL_ASSIGNSEL_WI(256, 8, (IData)(__VdlyLsb__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0), __VdlyMask__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0, 0xffU);
            VL_ASSIGN_W(256, __VdlyElem__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0, Vtop__ConstPool__CONST_h9e67c271_0);
            VL_ASSIGNSEL_WI(256, 8, (IData)(__VdlyLsb__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0), __VdlyElem__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0, __VdlyVal__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0);
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem.enqueue(__VdlyElem__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0, __VdlyMask__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem__v0));
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b 
            = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b);
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr][0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr][1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr][2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr][3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr][4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr][5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr][6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem
        [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr][7U];
    vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem.commit(vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line[0U][7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata[7U];
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_valid) 
           & (5U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state_n 
        = Vtop__ConstPool__TABLE_hf093358f_0[((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_valid) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__ar_accept) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rlast) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__r_beat) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__state)))];
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_fill = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[0U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[0U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[1U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[1U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[2U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[2U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[3U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[3U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[4U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[4U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[5U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[5U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[6U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[6U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[7U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_line[7U];
    } else {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_fill = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[0U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[0U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[1U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[1U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[2U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[2U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[3U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[3U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[4U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[4U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[5U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[5U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[6U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[6U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[7U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[7U];
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_be = (vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be 
                                                   | (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill))));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[7U];
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtemp_2;
    // Body
    vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_tag = 0U;
    VL_ASSIGN_W(256, vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line, Vtop__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_dirty = 0U;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) {
        if (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) 
             && (1U & (1U >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w))))) {
            if ((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w))) {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_tag 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_tag
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[0U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][0U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[1U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][1U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[2U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][2U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[3U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][3U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[4U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][4U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[5U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][5U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[6U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][6U];
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[7U] 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                    [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)][7U];
            } else {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_tag = 0U;
                VL_ASSIGN_W(256, vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line, Vtop__ConstPool__CONST_h9e67c271_0);
            }
            vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_dirty 
                = (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) 
                    && (1U & (vlSelfRef.tb_top__DOT__u_dcache__DOT__valid_q
                              [vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index] 
                              >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)))) 
                   & ((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) 
                      && (1U & (vlSelfRef.tb_top__DOT__u_dcache__DOT__dirty_q
                                [vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index] 
                                >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)))));
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w 
            = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w);
    }
    VL_ASSIGN_W(256, vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line, Vtop__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) {
        if ((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))) {
            __Vtemp_2[0U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][0U];
            __Vtemp_2[1U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][1U];
            __Vtemp_2[2U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][2U];
            __Vtemp_2[3U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][3U];
            __Vtemp_2[4U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][4U];
            __Vtemp_2[5U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][5U];
            __Vtemp_2[6U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][6U];
            __Vtemp_2[7U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_line
                [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)][7U];
        } else {
            VL_ASSIGN_W(256, __Vtemp_2, Vtop__ConstPool__CONST_h9e67c271_0);
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[0U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[0U] 
               | (__Vtemp_2[0U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[1U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[1U] 
               | (__Vtemp_2[1U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[2U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[2U] 
               | (__Vtemp_2[2U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[3U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[3U] 
               | (__Vtemp_2[3U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[4U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[4U] 
               | (__Vtemp_2[4U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[5U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[5U] 
               | (__Vtemp_2[5U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[6U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[6U] 
               | (__Vtemp_2[6U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[7U] 
            = (vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line[7U] 
               | (__Vtemp_2[7U] & (- (IData)(((0U >= 
                                               (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w)) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w))))))));
        vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w 
            = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w);
    }
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_line[7U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_tag 
            << 0x0000000dU) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                               << 5U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_rdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line
        [(0x07ffffffU & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word))];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_addr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_addr;
    vlSelfRef.tb_top__DOT__resp_rdata = vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_rdata;
    vlSelfRef.resp_rdata = vlSelfRef.tb_top__DOT__resp_rdata;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            IData/*18:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 0U;
            if (vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__we) {
                __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__0___VdlySet__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0 = 1U;
            }
            vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__rdata 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem
                [vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem__v0;
            }
            vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_tag[0U] 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__rdata;
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w = 0U;
            while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w)) {
                if (VL_LIKELY(((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w))))) {
                    vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit 
                        = (((~ ((IData)(1U) << (1U 
                                                & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w))) 
                            & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit)) 
                           | (1U & ((((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w)) 
                                      && (1U & (vlSelfRef.tb_top__DOT__u_dcache__DOT__valid_q
                                                [vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index] 
                                                >> 
                                                (1U 
                                                 & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w)))) 
                                     & (((0U >= (1U 
                                                 & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w))
                                          ? vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_tag
                                         [(1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w)]
                                          : 0U) == vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag)) 
                                    << (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w))));
                }
                vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w 
                    = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w);
            }
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way = 0U;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w = 0U;
            while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w)) {
                if (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w)) 
                     && (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                               >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w))))) {
                    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way 
                        = (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w);
                }
                vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w 
                    = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w);
            }
            vlSelfRef.tb_top__DOT__u_dcache__DOT__hit 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_way 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_hit 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__hit;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__miss 
                = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit 
                = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                   & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we)) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit)));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__st_hit 
                = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                   & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we)));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_valid 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_retire 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit) 
                   | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__st_hit));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__st_hit;
            vlSelfRef.tb_top__DOT__resp_valid = vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_valid;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_can_advance 
                = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid)) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_retire)));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__s0s1_conflict 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store) 
                   & (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index) 
                       == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index)) 
                      & (vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_tag 
                         == vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag)));
            vlSelfRef.resp_valid = vlSelfRef.tb_top__DOT__resp_valid;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__req_ready 
                = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0s1_conflict)) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_can_advance));
            vlSelfRef.tb_top__DOT__req_ready = vlSelfRef.tb_top__DOT__u_dcache__DOT__req_ready;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_accept 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__req_valid) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__req_ready));
            vlSelfRef.req_ready = vlSelfRef.tb_top__DOT__req_ready;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__array_raddr 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_accept)
                    ? (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index)
                    : (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__array_raddr;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__raddr 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__array_raddr;
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_addr 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_addr;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_valid 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_valid;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_valid 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_valid;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__waddr 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state_n 
                = Vtop__ConstPool__TABLE_h5b0f8d54_0
                [((((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_valid) 
                      << 3U) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__aw_accept) 
                                << 2U)) | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wlast) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__w_beat))) 
                   << 4U) | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__b_accept) 
                              << 3U) | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__state)))];
        }
    }
    if ((0x0000000000000015ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) 
                   | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store)));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wbe 
                = (vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_be 
                   & (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we))));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__we 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we));
        }
    }
    if ((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.tb_top__DOT__u_dcache__DOT__next_state 
                = Vtop__ConstPool__TABLE_h6f3c35af_0
                [((((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_dirty) 
                      << 4U) | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__miss) 
                                 << 3U) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req_ready) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_resp_valid) 
                        << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_req_ready))) 
                   << 4U) | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_resp_valid) 
                              << 3U) | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)))];
        }
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk__0))) 
                                                          << 4U) 
                                                         | (((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk__0))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_top.sv", 10, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_top.sv", 10, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_top.sv", 10, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.req_valid & 0xfeU)))) {
        Verilated::overWidthError("req_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.req_we & 0xfeU)))) {
        Verilated::overWidthError("req_we");
    }
    if (VL_UNLIKELY(((vlSelfRef.req_be & 0xf0U)))) {
        Verilated::overWidthError("req_be");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_awready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_wready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_wready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bid & 0xf0U)))) {
        Verilated::overWidthError("m_axi_bid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bresp & 0xfcU)))) {
        Verilated::overWidthError("m_axi_bresp");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_bvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_arready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rid & 0xf0U)))) {
        Verilated::overWidthError("m_axi_rid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rresp & 0xfcU)))) {
        Verilated::overWidthError("m_axi_rresp");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rlast & 0xfeU)))) {
        Verilated::overWidthError("m_axi_rlast");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_rvalid");
    }
}
#endif  // VL_DEBUG
