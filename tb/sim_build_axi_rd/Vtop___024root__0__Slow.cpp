// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_rd__DOT__u_rd__DOT__clk__0 
        = vlSelfRef.tb_axi_rd__DOT__u_rd__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.m_axi_arid = 0U;
        vlSelfRef.m_axi_arlen = 3U;
        vlSelfRef.m_axi_arsize = 3U;
        vlSelfRef.m_axi_arburst = 1U;
        vlSelfRef.m_axi_arlock = 0U;
        vlSelfRef.m_axi_arcache = 3U;
        vlSelfRef.m_axi_arprot = 0U;
        vlSelfRef.tb_axi_rd__DOT__m_axi_arlock = 0U;
        vlSelfRef.tb_axi_rd__DOT__m_axi_arcache = 3U;
        vlSelfRef.tb_axi_rd__DOT__m_axi_arprot = 0U;
        vlSelfRef.tb_axi_rd__DOT__m_axi_arid = 0U;
        vlSelfRef.tb_axi_rd__DOT__m_axi_arlen = 3U;
        vlSelfRef.tb_axi_rd__DOT__m_axi_arsize = 3U;
        vlSelfRef.tb_axi_rd__DOT__m_axi_arburst = 1U;
        vlSelfRef.tb_axi_rd__DOT__u_rd__DOT__m_axi_arid = 0U;
        vlSelfRef.tb_axi_rd__DOT__u_rd__DOT__m_axi_arlen = 3U;
        vlSelfRef.tb_axi_rd__DOT__u_rd__DOT__m_axi_arsize = 3U;
        vlSelfRef.tb_axi_rd__DOT__u_rd__DOT__m_axi_arburst = 1U;
    }
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
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_axi_rd.sv", 11, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_axi_rd.u_rd.clk)\n");
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
    vlSelf->resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735948940430534270ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->resp_line, __VscopeHash, 11477019284193129792ull);
    vlSelf->m_axi_arid = 0U;
    ;
    vlSelf->m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1846461378547527168ull);
    vlSelf->m_axi_arlen = 3U;
    ;
    vlSelf->m_axi_arsize = 3U;
    ;
    vlSelf->m_axi_arburst = 1U;
    ;
    vlSelf->m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16153593045339235853ull);
    vlSelf->m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14657891178303932712ull);
    vlSelf->m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 134518827027005282ull);
    vlSelf->m_axi_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7098886022588844013ull);
    vlSelf->m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9891928918972316509ull);
    vlSelf->m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5192182110111361339ull);
    vlSelf->m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10047683109683776937ull);
    vlSelf->m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4323339442303808258ull);
    vlSelf->m_axi_arlock = 0U;
    ;
    vlSelf->m_axi_arcache = 3U;
    ;
    vlSelf->m_axi_arprot = 0U;
    ;
    vlSelf->tb_axi_rd__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3002966152994051785ull);
    vlSelf->tb_axi_rd__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4103526411659137584ull);
    vlSelf->tb_axi_rd__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11454600895606006121ull);
    vlSelf->tb_axi_rd__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9642295919555522495ull);
    vlSelf->tb_axi_rd__DOT__req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1846695184696329706ull);
    vlSelf->tb_axi_rd__DOT__resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15909487724654780198ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_axi_rd__DOT__resp_line, __VscopeHash, 17290642968197134148ull);
    vlSelf->tb_axi_rd__DOT__m_axi_arid = 0U;
    ;
    vlSelf->tb_axi_rd__DOT__m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16137974507639674769ull);
    vlSelf->tb_axi_rd__DOT__m_axi_arlen = 3U;
    ;
    vlSelf->tb_axi_rd__DOT__m_axi_arsize = 3U;
    ;
    vlSelf->tb_axi_rd__DOT__m_axi_arburst = 1U;
    ;
    vlSelf->tb_axi_rd__DOT__m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14213021957607525801ull);
    vlSelf->tb_axi_rd__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14638347667481964240ull);
    vlSelf->tb_axi_rd__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8595360599723111784ull);
    vlSelf->tb_axi_rd__DOT__m_axi_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9683914939770765608ull);
    vlSelf->tb_axi_rd__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18346575231546677537ull);
    vlSelf->tb_axi_rd__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17003199011901533512ull);
    vlSelf->tb_axi_rd__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7414912759917951025ull);
    vlSelf->tb_axi_rd__DOT__m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15354283756873562105ull);
    vlSelf->tb_axi_rd__DOT__m_axi_arlock = 0U;
    ;
    vlSelf->tb_axi_rd__DOT__m_axi_arcache = 3U;
    ;
    vlSelf->tb_axi_rd__DOT__m_axi_arprot = 0U;
    ;
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5464763758565120711ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10634568281128141166ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17512978995769147508ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14110663520104137812ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16778175642917030053ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8161958500482556244ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_axi_rd__DOT__u_rd__DOT__resp_line, __VscopeHash, 12068752369846962382ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_arid = 0U;
    ;
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 52199436135832125ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_arlen = 3U;
    ;
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_arsize = 3U;
    ;
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_arburst = 1U;
    ;
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17765815430714538272ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16125512110549884618ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6669730909278814713ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3125322192459012887ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14917098876082686249ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1750184824793112142ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13399644900586824231ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2510541287404780557ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14837551165003186068ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__state_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15795179727626054479ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18221399090612140691ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__beat_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2526314756629463319ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axi_rd__DOT__u_rd__DOT__line_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2116096471329731776ull);
    }
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__ar_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040337212816543012ull);
    vlSelf->tb_axi_rd__DOT__u_rd__DOT__r_beat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16633921835946737260ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_rd__DOT__u_rd__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
