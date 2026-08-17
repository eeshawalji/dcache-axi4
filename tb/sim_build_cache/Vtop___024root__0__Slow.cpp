// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_mem__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__u_mem__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_top.sv", 2, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_top.u_dcache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_top.u_dcache.g_way[0].u_data.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb_top.u_dcache.g_way[0].u_tag.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_top.u_mem.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12465084953323796564ull);
    vlSelf->req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16539944981316001420ull);
    vlSelf->req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8827924800276735786ull);
    vlSelf->req_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15839722762072607281ull);
    vlSelf->req_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6093564010147542526ull);
    vlSelf->req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3891584043155575951ull);
    vlSelf->resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735948940430534270ull);
    vlSelf->resp_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8966316523110060675ull);
    vlSelf->tb_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16256328344204653681ull);
    vlSelf->tb_top__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6801375050781125300ull);
    vlSelf->tb_top__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18234108432937854679ull);
    vlSelf->tb_top__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1196526250962325141ull);
    vlSelf->tb_top__DOT__req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5853667551616935955ull);
    vlSelf->tb_top__DOT__req_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7439808025565147542ull);
    vlSelf->tb_top__DOT__req_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2247449081017156792ull);
    vlSelf->tb_top__DOT__req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 697616831485430123ull);
    vlSelf->tb_top__DOT__resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1102010028623161435ull);
    vlSelf->tb_top__DOT__resp_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5044926872587873132ull);
    vlSelf->tb_top__DOT__mem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8854497332909288486ull);
    vlSelf->tb_top__DOT__mem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16832097404268332798ull);
    vlSelf->tb_top__DOT__mem_req_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15158361983132655701ull);
    vlSelf->tb_top__DOT__mem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4897589986398176894ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__mem_req_wdata, __VscopeHash, 175815350072455179ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__mem_resp_rdata, __VscopeHash, 8277404008200882556ull);
    vlSelf->tb_top__DOT__mem_req_be = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18181760040413456830ull);
    vlSelf->tb_top__DOT__mem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9009567708737078808ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18063238962306651022ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14245656034369152704ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7462360915642274561ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4932088806109286011ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8944893315737062744ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__req_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3863538604069132335ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__req_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17154569048963090490ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3295856167501155009ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 856210986012010973ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__resp_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16170618919547648491ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__mem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14184893026002140831ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__mem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10391933045112143554ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__mem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8992325480101519303ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__mem_req_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10504052254969702077ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__mem_req_wdata, __VscopeHash, 16555569518847263497ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__mem_req_be = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10381766786918740608ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__mem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4402910561207924961ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__mem_resp_rdata, __VscopeHash, 6257786569569263157ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s0_tag = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 5717615755926077814ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s0_index = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7596474588459415447ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s0_offset = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14057614480581235523ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8159601954816217715ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_tag = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 764613577705261899ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_index = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6893470747469196399ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_offset = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12980966527334892496ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9258998844514842456ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1654698984472377368ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16922041969566430319ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s0_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6142032655203066205ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__array_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15344050170195244850ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_can_advance = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13882891006400412829ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s0s1_conflict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12473201734590124113ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__wr_line, __VscopeHash, 4726342151849064499ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__wr_be = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8230676522429160261ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__wr_index = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10752912960373225185ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__way_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6797117715809166139ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__cmd_fill = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7722671369777302048ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__cmd_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13593310942882003283ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__cmd_retire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1395939621782427581ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12902473410496233892ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4824126089812339753ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dcache__DOT__s1_rd_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 17947859728210253157ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__s1_rd_line[__Vi0], __VscopeHash, 5277537585948186129ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dcache__DOT__valid_q[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4762328653911098174ull);
    }
    vlSelf->tb_top__DOT__u_dcache__DOT__way_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434671596765180331ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14469885625741187493ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__hit_line, __VscopeHash, 10096216048102707175ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_word = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2660452268636100438ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__rd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13219651939222494268ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__rd_miss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9513388084538762994ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__wr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1016223031971677966ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__store_be = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11772170805091924444ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__store_line, __VscopeHash, 14525093137049176505ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14976460102325839752ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040351800768528800ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_acc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5672019315024495640ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_acc_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14068243924031165851ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_acc_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2711920988216754407ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_acc_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10553367367522080692ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_acc_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8723622244759748688ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_ev_fill = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16124873044290077153ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_ev_memwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742965709548512090ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17838961243545257765ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12659537557058157435ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__rdata, __VscopeHash, 5973579273405058149ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1139703188773409703ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wbe = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1041703926337894647ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__wdata, __VscopeHash, 13600423760367717276ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__mem[__Vi0], __VscopeHash, 12998637732980933620ull);
    }
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__unnamedblk1__DOT__b = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17343269958687391369ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10030462192020460871ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__rdata = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 10166974964480855438ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17032789599911650291ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16809850754945631544ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__wdata = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 12885480088306321533ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 11538487690434698546ull);
    }
    vlSelf->tb_top__DOT__u_mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 274987458928306208ull);
    vlSelf->tb_top__DOT__u_mem__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12637703563878767066ull);
    vlSelf->tb_top__DOT__u_mem__DOT__mem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16499277305560999224ull);
    vlSelf->tb_top__DOT__u_mem__DOT__mem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7698383289339399099ull);
    vlSelf->tb_top__DOT__u_mem__DOT__mem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10434209926389168217ull);
    vlSelf->tb_top__DOT__u_mem__DOT__mem_req_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1121249743864549571ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_mem__DOT__mem_req_wdata, __VscopeHash, 5595311679397894725ull);
    vlSelf->tb_top__DOT__u_mem__DOT__mem_req_be = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6370266458085703270ull);
    vlSelf->tb_top__DOT__u_mem__DOT__mem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17096976784624839023ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_mem__DOT__mem_resp_rdata, __VscopeHash, 6162825964712258830ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_mem__DOT__mem[__Vi0], __VscopeHash, 6222851820507500537ull);
    }
    vlSelf->tb_top__DOT__u_mem__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14150247607888014107ull);
    vlSelf->tb_top__DOT__u_mem__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1585567896976931937ull);
    vlSelf->tb_top__DOT__u_mem__DOT__pending_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11516896859637253178ull);
    vlSelf->tb_top__DOT__u_mem__DOT__pending_line = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10917312526317011383ull);
    vlSelf->tb_top__DOT__u_mem__DOT__unnamedblk1__DOT__b = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__u_mem__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
