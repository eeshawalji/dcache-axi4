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
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h3e9e775a_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    VlWide<8>/*255:0*/ __Vtemp_2;
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
    vlSelfRef.tb_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag 
            << 0x0000000dU) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                               << 5U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_valid 
        = ((5U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)) 
           | (2U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_we 
        = (5U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state));
    vlSelfRef.tb_top__DOT__mem_resp_rdata[0U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[0U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[1U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[1U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[2U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[2U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[3U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[3U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[4U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[4U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[5U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[5U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[6U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[6U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[7U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[7U];
    vlSelfRef.tb_top__DOT__clk = vlSelfRef.clk;
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
    vlSelfRef.tb_top__DOT__req_valid = vlSelfRef.req_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word = 
        (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_offset) 
               >> 2U));
    vlSelfRef.tb_top__DOT__mem_resp_valid = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_valid;
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid) 
                                      & (0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__req_addr = vlSelfRef.req_addr;
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_ready 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_mem__DOT__busy)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_rd_tag[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__rdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_we = vlSelfRef.tb_top__DOT__req_we;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_be = vlSelfRef.tb_top__DOT__req_be;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_wdata 
        = vlSelfRef.tb_top__DOT__req_wdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n = vlSelfRef.tb_top__DOT__rst_n;
    vlSelfRef.tb_top__DOT__u_mem__DOT__rst_n = vlSelfRef.tb_top__DOT__rst_n;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__waddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__waddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
    vlSelfRef.tb_top__DOT__mem_req_addr = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_addr;
    vlSelfRef.tb_top__DOT__mem_req_valid = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_valid;
    vlSelfRef.tb_top__DOT__mem_req_we = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_we;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[0U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[1U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[2U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[3U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[4U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[5U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[6U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[7U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[7U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__clk = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__clk = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[7U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_valid 
        = vlSelfRef.tb_top__DOT__req_valid;
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
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_valid 
        = vlSelfRef.tb_top__DOT__mem_resp_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req = 
        ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we) 
         & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we)) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__req_addr 
        = vlSelfRef.tb_top__DOT__req_addr;
    vlSelfRef.tb_top__DOT__mem_req_ready = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_ready;
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
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_addr 
        = vlSelfRef.tb_top__DOT__mem_req_addr;
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_valid 
        = vlSelfRef.tb_top__DOT__mem_req_valid;
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_we = vlSelfRef.tb_top__DOT__mem_req_we;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
    vlSelfRef.tb_top__DOT__mem_req_wdata[0U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[0U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[1U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[1U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[2U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[2U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[3U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[3U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[4U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[4U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[5U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[5U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[6U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[6U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[7U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[7U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_be 
        = (vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be 
           & (- (IData)((5U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)))));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_valid) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_offset 
        = (0x0000001fU & vlSelfRef.tb_top__DOT__u_dcache__DOT__req_addr);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_tag = 
        (vlSelfRef.tb_top__DOT__u_dcache__DOT__req_addr 
         >> 0x0000000dU);
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index 
        = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dcache__DOT__req_addr 
                          >> 5U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_ready 
        = vlSelfRef.tb_top__DOT__mem_req_ready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way = 0U;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) {
        if (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) 
             && (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                       >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w))))) {
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way 
                = (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w);
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
    vlSelfRef.tb_top__DOT__u_dcache__DOT__hit = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid));
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[0U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[0U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[1U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[1U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[2U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[2U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[3U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[3U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[4U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[4U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[5U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[5U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[6U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[6U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[7U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[7U];
    vlSelfRef.tb_top__DOT__mem_req_be = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_be;
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_fill = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[0U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[0U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[1U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[1U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[2U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[2U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[3U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[3U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[4U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[4U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[5U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[5U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[6U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[6U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[7U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[7U];
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
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_memwr 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_valid) 
           & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_ready) 
              & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_we)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_ready) 
                                                & (5U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_way 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_rdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line
        [(0x07ffffffU & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word))];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_hit 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__hit;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_miss = 
        ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit)) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit = 
        ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_be = vlSelfRef.tb_top__DOT__mem_req_be;
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
    vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.tb_top__DOT__resp_rdata = vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_rdata;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__next_state 
        = Vtop__ConstPool__TABLE_h3e9e775a_0[((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req) 
                                                << 6U) 
                                               | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_miss) 
                                                  << 5U)) 
                                              | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_ready) 
                                                     << 3U) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state))))];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_valid 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_retire 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
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
    vlSelfRef.resp_rdata = vlSelfRef.tb_top__DOT__resp_rdata;
    vlSelfRef.tb_top__DOT__resp_valid = vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_valid;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_can_advance 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_retire)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wbe 
        = (vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_be 
           & (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we))));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__we 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we));
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
    CData/*7:0*/ __VdlyVal__tb_top__DOT__u_mem__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_mem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyLsb__tb_top__DOT__u_mem__DOT__mem__v0;
    __VdlyLsb__tb_top__DOT__u_mem__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tb_top__DOT__u_mem__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_mem__DOT__mem__v0 = 0;
    VlWide<8>/*255:0*/ __VdlyMask__tb_top__DOT__u_mem__DOT__mem__v0;
    VL_ZERO_W(256, __VdlyMask__tb_top__DOT__u_mem__DOT__mem__v0);
    VlWide<8>/*255:0*/ __VdlyElem__tb_top__DOT__u_mem__DOT__mem__v0;
    VL_ZERO_W(256, __VdlyElem__tb_top__DOT__u_mem__DOT__mem__v0);
    // Body
    if (vlSelfRef.tb_top__DOT__u_mem__DOT__rst_n) {
        vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_valid = 0U;
        if (vlSelfRef.tb_top__DOT__u_mem__DOT__busy) {
            if ((0U != (IData)(vlSelfRef.tb_top__DOT__u_mem__DOT__cnt))) {
                vlSelfRef.tb_top__DOT__u_mem__DOT__cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_mem__DOT__cnt) 
                                      - (IData)(1U)));
            } else {
                vlSelfRef.tb_top__DOT__u_mem__DOT__busy = 0U;
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_mem__DOT__pending_we)))) {
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[0U] 
                        = vlSelfRef.tb_top__DOT__u_mem__DOT__mem
                        [vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line][0U];
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[1U] 
                        = vlSelfRef.tb_top__DOT__u_mem__DOT__mem
                        [vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line][1U];
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[2U] 
                        = vlSelfRef.tb_top__DOT__u_mem__DOT__mem
                        [vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line][2U];
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[3U] 
                        = vlSelfRef.tb_top__DOT__u_mem__DOT__mem
                        [vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line][3U];
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[4U] 
                        = vlSelfRef.tb_top__DOT__u_mem__DOT__mem
                        [vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line][4U];
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[5U] 
                        = vlSelfRef.tb_top__DOT__u_mem__DOT__mem
                        [vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line][5U];
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[6U] 
                        = vlSelfRef.tb_top__DOT__u_mem__DOT__mem
                        [vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line][6U];
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[7U] 
                        = vlSelfRef.tb_top__DOT__u_mem__DOT__mem
                        [vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line][7U];
                    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_valid = 1U;
                }
            }
        } else if (vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_valid) {
            vlSelfRef.tb_top__DOT__u_mem__DOT__busy = 1U;
            vlSelfRef.tb_top__DOT__u_mem__DOT__cnt = 8U;
            vlSelfRef.tb_top__DOT__u_mem__DOT__pending_we 
                = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_we;
            vlSelfRef.tb_top__DOT__u_mem__DOT__pending_line 
                = (0x00000fffU & (vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_addr 
                                  >> 5U));
            if (vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_we) {
                vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b = 0U;
                while (VL_GTS_III(32, 0x00000020U, vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b)) {
                    if ((1U & (vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_be 
                               >> (0x0000001fU & vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b)))) {
                        __VdlyVal__tb_top__DOT__u_mem__DOT__mem__v0 
                            = (0x000000ffU & (((0U 
                                                == 
                                                (0x0000001fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b)))
                                                ? 0U
                                                : (vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x000000ffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b))))) 
                                              | (vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata
                                                 [(7U 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b) 
                                                      >> 5U))] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b)))));
                        __VdlyLsb__tb_top__DOT__u_mem__DOT__mem__v0 
                            = (0x000000ffU & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b));
                        __VdlyDim0__tb_top__DOT__u_mem__DOT__mem__v0 
                            = (0x00000fffU & (vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_addr 
                                              >> 5U));
                        VL_ASSIGN_W(256, __VdlyMask__tb_top__DOT__u_mem__DOT__mem__v0, Vtop__ConstPool__CONST_h9e67c271_0);
                        VL_ASSIGNSEL_WI(256, 8, (IData)(__VdlyLsb__tb_top__DOT__u_mem__DOT__mem__v0), __VdlyMask__tb_top__DOT__u_mem__DOT__mem__v0, 0xffU);
                        VL_ASSIGN_W(256, __VdlyElem__tb_top__DOT__u_mem__DOT__mem__v0, Vtop__ConstPool__CONST_h9e67c271_0);
                        VL_ASSIGNSEL_WI(256, 8, (IData)(__VdlyLsb__tb_top__DOT__u_mem__DOT__mem__v0), __VdlyElem__tb_top__DOT__u_mem__DOT__mem__v0, __VdlyVal__tb_top__DOT__u_mem__DOT__mem__v0);
                        vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_mem__DOT__mem.enqueue(__VdlyElem__tb_top__DOT__u_mem__DOT__mem__v0, __VdlyMask__tb_top__DOT__u_mem__DOT__mem__v0, (IData)(__VdlyDim0__tb_top__DOT__u_mem__DOT__mem__v0));
                    }
                    vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b);
                }
            }
        }
    } else {
        vlSelfRef.tb_top__DOT__u_mem__DOT__busy = 0U;
        vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_valid = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_mem__DOT__mem.commit(vlSelfRef.tb_top__DOT__u_mem__DOT__mem);
    vlSelfRef.tb_top__DOT__mem_resp_rdata[0U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[0U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[1U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[1U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[2U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[2U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[3U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[3U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[4U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[4U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[5U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[5U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[6U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[6U];
    vlSelfRef.tb_top__DOT__mem_resp_rdata[7U] = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_rdata[7U];
    vlSelfRef.tb_top__DOT__mem_resp_valid = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_resp_valid;
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_ready 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_mem__DOT__busy)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[0U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[1U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[2U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[3U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[4U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[5U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[6U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[7U] 
        = vlSelfRef.tb_top__DOT__mem_resp_rdata[7U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_valid 
        = vlSelfRef.tb_top__DOT__mem_resp_valid;
    vlSelfRef.tb_top__DOT__mem_req_ready = vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_ready;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_ready 
        = vlSelfRef.tb_top__DOT__mem_req_ready;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
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

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__u_dcache__DOT__valid_q__v0;
    __VdlyVal__tb_top__DOT__u_dcache__DOT__valid_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v0;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v1;
    __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v1 = 0;
    // Body
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n) {
        if (vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) {
            __VdlyVal__tb_top__DOT__u_dcache__DOT__valid_q__v0 
                = (vlSelfRef.tb_top__DOT__u_dcache__DOT__valid_q
                   [vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index] 
                   | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we));
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v0 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__valid_q.enqueue(__VdlyVal__tb_top__DOT__u_dcache__DOT__valid_q__v0, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v0));
        }
    } else {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s)) {
            __VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v1 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s);
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__valid_q.enqueue(0U, (IData)(__VdlyDim0__tb_top__DOT__u_dcache__DOT__valid_q__v1));
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
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid = 1U;
            } else {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first = 0U;
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid = 0U;
            }
        } else {
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first = 0U;
        }
        vlSelfRef.tb_top__DOT__u_dcache__DOT__state 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__next_state;
    } else {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_first = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__state = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetb_top__DOT__u_dcache__DOT__valid_q.commit(vlSelfRef.tb_top__DOT__u_dcache__DOT__valid_q);
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__rst_n) {
        if (vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_can_advance) {
            if (vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_accept) {
                vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index 
                    = vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index;
            }
        }
    }
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
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_valid 
        = ((5U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)) 
           | (2U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_we 
        = (5U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state));
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid) 
                                      & (0U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__wdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag 
            << 0x0000000dU) | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                                << 5U) | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_offset)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_addr 
        = ((vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag 
            << 0x0000000dU) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index) 
                               << 5U));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[0U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[0U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[1U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[1U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[2U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[2U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[3U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[3U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[4U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[4U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[5U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[5U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[6U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[6U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[7U] 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__store_line[7U];
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
    vlSelfRef.tb_top__DOT__mem_req_valid = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_valid;
    vlSelfRef.tb_top__DOT__mem_req_we = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_we;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req = 
        ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we) 
         & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_we)) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__waddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
    vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__waddr 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_index;
    vlSelfRef.tb_top__DOT__mem_req_addr = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_addr;
    vlSelfRef.tb_top__DOT__mem_req_wdata[0U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[0U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[1U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[1U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[2U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[2U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[3U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[3U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[4U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[4U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[5U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[5U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[6U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[6U];
    vlSelfRef.tb_top__DOT__mem_req_wdata[7U] = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_wdata[7U];
    vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_be 
        = (vlSelfRef.tb_top__DOT__u_dcache__DOT__store_be 
           & (- (IData)((5U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)))));
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_valid 
        = vlSelfRef.tb_top__DOT__mem_req_valid;
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_we = vlSelfRef.tb_top__DOT__mem_req_we;
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_addr 
        = vlSelfRef.tb_top__DOT__mem_req_addr;
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[0U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[0U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[1U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[1U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[2U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[2U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[3U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[3U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[4U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[4U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[5U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[5U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[6U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[6U];
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_wdata[7U] 
        = vlSelfRef.tb_top__DOT__mem_req_wdata[7U];
    vlSelfRef.tb_top__DOT__mem_req_be = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_be;
    vlSelfRef.tb_top__DOT__u_mem__DOT__mem_req_be = vlSelfRef.tb_top__DOT__mem_req_be;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_valid) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_ready) 
                                                & (5U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state)));
    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_memwr 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_valid) 
           & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_ready) 
              & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_we)));
    if (vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) {
        vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_ev_fill = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[0U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[0U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[1U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[1U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[2U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[2U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[3U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[3U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[4U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[4U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[5U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[5U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[6U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[6U];
        vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_line[7U] 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_rdata[7U];
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
    vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_rdata 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__hit_line
        [(0x07ffffffU & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_word))];
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
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
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
            vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w = 0U;
            while (VL_GTS_III(32, 1U, vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) {
                if (((0U >= (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w)) 
                     && (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                               >> (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w))))) {
                    vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way 
                        = (1U & vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w);
                }
                vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w 
                    = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w);
            }
            vlSelfRef.tb_top__DOT__u_dcache__DOT__hit 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_way 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_hit_way;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__dbg_acc_hit 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__hit;
            vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_miss 
                = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_valid 
                = vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit;
            vlSelfRef.tb_top__DOT__resp_valid = vlSelfRef.tb_top__DOT__u_dcache__DOT__resp_valid;
            vlSelfRef.resp_valid = vlSelfRef.tb_top__DOT__resp_valid;
        }
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__hit) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__next_state 
                = Vtop__ConstPool__TABLE_h3e9e775a_0
                [((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__wr_req) 
                    << 6U) | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_miss) 
                              << 5U)) | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_resp_valid) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__mem_req_ready) 
                                           << 3U) | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__state))))];
            vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_retire 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__rd_hit) 
                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__way_we 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_fill) 
                   | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__way_hit) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store)));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__s0s1_conflict 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_store) 
                   & (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_index) 
                       == (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_index)) 
                      & (vlSelfRef.tb_top__DOT__u_dcache__DOT__s0_tag 
                         == vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_tag)));
            vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_can_advance 
                = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__s1_valid)) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__cmd_retire)));
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
                                                        (((((IData)(vlSelfRef.tb_top__DOT__u_mem__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_mem__DOT__clk__0))) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk__0))) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_top__DOT__u_dcache__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_mem__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__u_mem__DOT__clk;
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
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_top.sv", 2, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_top.sv", 2, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_top.sv", 2, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
}
#endif  // VL_DEBUG
