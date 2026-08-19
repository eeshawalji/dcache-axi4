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
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.m_axi_awid = 0U;
        vlSelfRef.m_axi_awlen = 3U;
        vlSelfRef.m_axi_awsize = 3U;
        vlSelfRef.m_axi_awburst = 1U;
        vlSelfRef.m_axi_awlock = 0U;
        vlSelfRef.m_axi_awcache = 3U;
        vlSelfRef.m_axi_awprot = 0U;
        vlSelfRef.m_axi_wstrb = 0xffU;
        vlSelfRef.m_axi_arid = 0U;
        vlSelfRef.m_axi_arlen = 3U;
        vlSelfRef.m_axi_arsize = 3U;
        vlSelfRef.m_axi_arburst = 1U;
        vlSelfRef.m_axi_arlock = 0U;
        vlSelfRef.m_axi_arcache = 3U;
        vlSelfRef.m_axi_arprot = 0U;
        vlSelfRef.tb_top__DOT__m_axi_awid = 0U;
        vlSelfRef.tb_top__DOT__m_axi_awlen = 3U;
        vlSelfRef.tb_top__DOT__m_axi_awsize = 3U;
        vlSelfRef.tb_top__DOT__m_axi_awburst = 1U;
        vlSelfRef.tb_top__DOT__m_axi_awlock = 0U;
        vlSelfRef.tb_top__DOT__m_axi_awcache = 3U;
        vlSelfRef.tb_top__DOT__m_axi_awprot = 0U;
        vlSelfRef.tb_top__DOT__m_axi_wstrb = 0xffU;
        vlSelfRef.tb_top__DOT__m_axi_arid = 0U;
        vlSelfRef.tb_top__DOT__m_axi_arlen = 3U;
        vlSelfRef.tb_top__DOT__m_axi_arsize = 3U;
        vlSelfRef.tb_top__DOT__m_axi_arburst = 1U;
        vlSelfRef.tb_top__DOT__m_axi_arlock = 0U;
        vlSelfRef.tb_top__DOT__m_axi_arcache = 3U;
        vlSelfRef.tb_top__DOT__m_axi_arprot = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__victim_sel = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awid = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awlen = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awsize = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awburst = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awlock = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awcache = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_awprot = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_wstrb = 0xffU;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awid = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awlen = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awsize = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awburst = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awlock = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awcache = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awprot = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wstrb = 0xffU;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arid = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arlen = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arsize = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arburst = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arlock = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arcache = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__m_axi_arprot = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arid = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arlen = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arsize = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arburst = 1U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arlock = 0U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arcache = 3U;
        vlSelfRef.tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arprot = 0U;
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
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_top.sv", 10, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_top.u_dcache.u_wr.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge tb_top.u_dcache.u_rd.clk)\n");
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
    vlSelf->m_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1024821634766282054ull);
    vlSelf->m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13558266821849222593ull);
    vlSelf->m_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15527027863330074270ull);
    vlSelf->m_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17768164634708584365ull);
    vlSelf->m_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16027732775651784324ull);
    vlSelf->m_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8893572666646070633ull);
    vlSelf->m_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3753142715102392777ull);
    vlSelf->m_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6216549597533674627ull);
    vlSelf->m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17994771565963626208ull);
    vlSelf->m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16573481163850279297ull);
    vlSelf->m_axi_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1286380785785437420ull);
    vlSelf->m_axi_wstrb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15721383833457952779ull);
    vlSelf->m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2914646395814725164ull);
    vlSelf->m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17462522629772039856ull);
    vlSelf->m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10076110868751280388ull);
    vlSelf->m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11115145799783860064ull);
    vlSelf->m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3179402000051064225ull);
    vlSelf->m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17532096651654485089ull);
    vlSelf->m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 919615779156835605ull);
    vlSelf->m_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1810041573633596834ull);
    vlSelf->m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1846461378547527168ull);
    vlSelf->m_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16617312831593392701ull);
    vlSelf->m_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17543111694348153197ull);
    vlSelf->m_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1752602318331902070ull);
    vlSelf->m_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5045436485330889250ull);
    vlSelf->m_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12174166796431367989ull);
    vlSelf->m_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11389438876727118374ull);
    vlSelf->m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16153593045339235853ull);
    vlSelf->m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14657891178303932712ull);
    vlSelf->m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 134518827027005282ull);
    vlSelf->m_axi_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7098886022588844013ull);
    vlSelf->m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9891928918972316509ull);
    vlSelf->m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5192182110111361339ull);
    vlSelf->m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10047683109683776937ull);
    vlSelf->m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4323339442303808258ull);
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
    vlSelf->tb_top__DOT__m_axi_awid = 0U;
    ;
    vlSelf->tb_top__DOT__m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2885758993320926017ull);
    vlSelf->tb_top__DOT__m_axi_awlen = 3U;
    ;
    vlSelf->tb_top__DOT__m_axi_awsize = 3U;
    ;
    vlSelf->tb_top__DOT__m_axi_awburst = 1U;
    ;
    vlSelf->tb_top__DOT__m_axi_awlock = 0U;
    ;
    vlSelf->tb_top__DOT__m_axi_awcache = 3U;
    ;
    vlSelf->tb_top__DOT__m_axi_awprot = 0U;
    ;
    vlSelf->tb_top__DOT__m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7050390186789886546ull);
    vlSelf->tb_top__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8639525865730450578ull);
    vlSelf->tb_top__DOT__m_axi_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17172024682310045784ull);
    vlSelf->tb_top__DOT__m_axi_wstrb = 255U;
    ;
    vlSelf->tb_top__DOT__m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1948779979734306028ull);
    vlSelf->tb_top__DOT__m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16241016054983476849ull);
    vlSelf->tb_top__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17702562211918319634ull);
    vlSelf->tb_top__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11743091681714908650ull);
    vlSelf->tb_top__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5240851333510173556ull);
    vlSelf->tb_top__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9497051372784786702ull);
    vlSelf->tb_top__DOT__m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6794092153820243876ull);
    vlSelf->tb_top__DOT__m_axi_arid = 0U;
    ;
    vlSelf->tb_top__DOT__m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5941270394529241587ull);
    vlSelf->tb_top__DOT__m_axi_arlen = 3U;
    ;
    vlSelf->tb_top__DOT__m_axi_arsize = 3U;
    ;
    vlSelf->tb_top__DOT__m_axi_arburst = 1U;
    ;
    vlSelf->tb_top__DOT__m_axi_arlock = 0U;
    ;
    vlSelf->tb_top__DOT__m_axi_arcache = 3U;
    ;
    vlSelf->tb_top__DOT__m_axi_arprot = 0U;
    ;
    vlSelf->tb_top__DOT__m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15152867087366114403ull);
    vlSelf->tb_top__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10297454662321824515ull);
    vlSelf->tb_top__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4455606269303179179ull);
    vlSelf->tb_top__DOT__m_axi_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7603667996148562898ull);
    vlSelf->tb_top__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 81675918692355244ull);
    vlSelf->tb_top__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4642658825754751502ull);
    vlSelf->tb_top__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1324672522077508438ull);
    vlSelf->tb_top__DOT__m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5304153063951715629ull);
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
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awid = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8712124754348792354ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awlen = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awsize = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awburst = 1U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awlock = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awcache = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awprot = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9226529871890836239ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5550204013670730510ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8399358798024226168ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_wstrb = 255U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 472064039309450735ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6739354970350235221ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 384271438039297982ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16456290390031668723ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16119201903512602990ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9658934106577921142ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10865377421911974164ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arid = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15497986384364612376ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arlen = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arsize = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arburst = 1U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arlock = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arcache = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arprot = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17381518573199076079ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14232812797472601235ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14698560079050805594ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6144364821218530591ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14950553645136602568ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10711618748076899026ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2305592645710906666ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8927979583942307453ull);
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
    vlSelf->tb_top__DOT__u_dcache__DOT__rd_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161480205531610890ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__rd_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9161134948837027587ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__rd_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5805093665689119511ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__rd_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7586435801569719948ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__rd_resp_line, __VscopeHash, 10356049538895428801ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__wr_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 482574101454108408ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__wr_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1782214263874717602ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__wr_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11254138068163733202ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__wr_resp_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2556791596498925844ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__wr_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14302082122202960024ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dcache__DOT__s1_rd_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 17947859728210253157ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__s1_rd_line[__Vi0], __VscopeHash, 5277537585948186129ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dcache__DOT__valid_q[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4762328653911098174ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dcache__DOT__dirty_q[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11818331716060425116ull);
    }
    vlSelf->tb_top__DOT__u_dcache__DOT__way_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434671596765180331ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14469885625741187493ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__hit_line, __VscopeHash, 10096216048102707175ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__victim_sel = 1U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__victim_tag = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 2674787001296594501ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__victim_line, __VscopeHash, 16580031215589400634ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__victim_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9749724702575915706ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__s1_word = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2660452268636100438ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__rd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13219651939222494268ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__st_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3053495396475468778ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__miss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6872694742664390313ull);
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
    vlSelf->tb_top__DOT__u_dcache__DOT__dbg_ev_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4773971204661822734ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__was_replay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4462851024832098248ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk1__DOT__s = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk2__DOT__w = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk3__DOT__w = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk4__DOT__w = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__unnamedblk5__DOT__w = 0;
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
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2106203208414542674ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10956768719986505315ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17046241787185326301ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9582915624119862499ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12389619019960785581ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__req_line, __VscopeHash, 18063382995181718631ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8020384975474919222ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__resp_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4328740832268371106ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awid = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7379534781351584164ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awlen = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awsize = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awburst = 1U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awlock = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awcache = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awprot = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2795426294261170430ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5150574744401660010ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12705022515743181687ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wstrb = 255U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13891126917040922032ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17134339741478782611ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7923950710608929172ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17147437765317115892ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4074942349969529070ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13786549838619614673ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 877340273442743281ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3441125654365847572ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__state_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7973712238633858796ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6270941868628623993ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__beat_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1685415346896515316ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3175865735555356802ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__line_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2269062949464752686ull);
    }
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__aw_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14413191748026440184ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__w_beat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15571646846467743971ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__b_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15681619257956756740ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_wr__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14297332484856988556ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13812487819191233545ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8317960612649820222ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5949137141548735049ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1723276994794128457ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12920507763721741213ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__resp_line, __VscopeHash, 8682414829043678786ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arid = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8891067251912309782ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arlen = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arsize = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arburst = 1U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4542568965703253898ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8246951724514149589ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15281560430367544726ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12732989125396038ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17727211366462835662ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1755216522814958208ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11457051942236234307ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3722600445599014629ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arlock = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arcache = 3U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__m_axi_arprot = 0U;
    ;
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6637731427963998032ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__state_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6943478427891887315ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9378759861670572134ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__beat_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9288764912786782267ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__line_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15044874134934302274ull);
    }
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__ar_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18339909108576841876ull);
    vlSelf->tb_top__DOT__u_dcache__DOT__u_rd__DOT__r_beat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10068274576403371475ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__u_wr__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__u_dcache__DOT__u_rd__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
