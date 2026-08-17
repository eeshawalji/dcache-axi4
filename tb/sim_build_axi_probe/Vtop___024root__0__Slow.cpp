// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_axi_probe.sv", 17, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
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
    vlSelf->tb_axi_probe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4324721553694841117ull);
    vlSelf->tb_axi_probe__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8765711218887475190ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12586283928359625731ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13956680744654941829ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15649018832021558814ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15024024661498162358ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8389888619865699270ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 275157085613063096ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8142732973232655584ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2388753245930619117ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5426853293927800761ull);
    vlSelf->tb_axi_probe__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17661017279693931818ull);
    vlSelf->tb_axi_probe__DOT__m_axi_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10876214477304626222ull);
    vlSelf->tb_axi_probe__DOT__m_axi_wstrb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10401193564890386514ull);
    vlSelf->tb_axi_probe__DOT__m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14035080664081566123ull);
    vlSelf->tb_axi_probe__DOT__m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9016234080447152020ull);
    vlSelf->tb_axi_probe__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11439352722729831362ull);
    vlSelf->tb_axi_probe__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8131304571970426577ull);
    vlSelf->tb_axi_probe__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16868379096847950618ull);
    vlSelf->tb_axi_probe__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7345611088676884209ull);
    vlSelf->tb_axi_probe__DOT__m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6439174635648103195ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5145200572716419320ull);
    vlSelf->tb_axi_probe__DOT__m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11357739055251797460ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5706918508831729157ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14408388659320125691ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4154054826188403177ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5660838554119760059ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16662836460213460953ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12925190729084917196ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2268631238314013688ull);
    vlSelf->tb_axi_probe__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 123132058585500729ull);
    vlSelf->tb_axi_probe__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11590557395367346436ull);
    vlSelf->tb_axi_probe__DOT__m_axi_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 261414848513444385ull);
    vlSelf->tb_axi_probe__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12973405632477505047ull);
    vlSelf->tb_axi_probe__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3840155458332194409ull);
    vlSelf->tb_axi_probe__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10864751563673357111ull);
    vlSelf->tb_axi_probe__DOT__m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4286065937029984433ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}
