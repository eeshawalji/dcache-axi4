// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_wr__DOT__u_wr__DOT__clk__0 
        = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__clk;
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
        vlSelfRef.tb_axi_wr__DOT__m_axi_awid = 0U;
        vlSelfRef.tb_axi_wr__DOT__m_axi_awlen = 3U;
        vlSelfRef.tb_axi_wr__DOT__m_axi_awsize = 3U;
        vlSelfRef.tb_axi_wr__DOT__m_axi_awburst = 1U;
        vlSelfRef.tb_axi_wr__DOT__m_axi_awlock = 0U;
        vlSelfRef.tb_axi_wr__DOT__m_axi_awcache = 3U;
        vlSelfRef.tb_axi_wr__DOT__m_axi_awprot = 0U;
        vlSelfRef.tb_axi_wr__DOT__m_axi_wstrb = 0xffU;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awid = 0U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awlen = 3U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awsize = 3U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awburst = 1U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awlock = 0U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awcache = 3U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awprot = 0U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wstrb = 0xffU;
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
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_axi_wr.sv", 10, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_axi_wr.u_wr.clk)\n");
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
    VL_SCOPED_RAND_RESET_W(256, vlSelf->req_line, __VscopeHash, 4576969908210716317ull);
    vlSelf->resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735948940430534270ull);
    vlSelf->resp_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10351113187740844511ull);
    vlSelf->m_axi_awid = 0U;
    ;
    vlSelf->m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13558266821849222593ull);
    vlSelf->m_axi_awlen = 3U;
    ;
    vlSelf->m_axi_awsize = 3U;
    ;
    vlSelf->m_axi_awburst = 1U;
    ;
    vlSelf->m_axi_awlock = 0U;
    ;
    vlSelf->m_axi_awcache = 3U;
    ;
    vlSelf->m_axi_awprot = 0U;
    ;
    vlSelf->m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17994771565963626208ull);
    vlSelf->m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16573481163850279297ull);
    vlSelf->m_axi_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1286380785785437420ull);
    vlSelf->m_axi_wstrb = 255U;
    ;
    vlSelf->m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2914646395814725164ull);
    vlSelf->m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17462522629772039856ull);
    vlSelf->m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10076110868751280388ull);
    vlSelf->m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11115145799783860064ull);
    vlSelf->m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3179402000051064225ull);
    vlSelf->m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17532096651654485089ull);
    vlSelf->m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 919615779156835605ull);
    vlSelf->tb_axi_wr__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6758660223306307014ull);
    vlSelf->tb_axi_wr__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13379162965340372987ull);
    vlSelf->tb_axi_wr__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4331578522772451591ull);
    vlSelf->tb_axi_wr__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13418960460999897478ull);
    vlSelf->tb_axi_wr__DOT__req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16813545282449463070ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_axi_wr__DOT__req_line, __VscopeHash, 12851943915506088954ull);
    vlSelf->tb_axi_wr__DOT__resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4133139070316251322ull);
    vlSelf->tb_axi_wr__DOT__resp_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1477425494083755665ull);
    vlSelf->tb_axi_wr__DOT__m_axi_awid = 0U;
    ;
    vlSelf->tb_axi_wr__DOT__m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7931157282770102964ull);
    vlSelf->tb_axi_wr__DOT__m_axi_awlen = 3U;
    ;
    vlSelf->tb_axi_wr__DOT__m_axi_awsize = 3U;
    ;
    vlSelf->tb_axi_wr__DOT__m_axi_awburst = 1U;
    ;
    vlSelf->tb_axi_wr__DOT__m_axi_awlock = 0U;
    ;
    vlSelf->tb_axi_wr__DOT__m_axi_awcache = 3U;
    ;
    vlSelf->tb_axi_wr__DOT__m_axi_awprot = 0U;
    ;
    vlSelf->tb_axi_wr__DOT__m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16783867314226510393ull);
    vlSelf->tb_axi_wr__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8314658796021923632ull);
    vlSelf->tb_axi_wr__DOT__m_axi_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17983345265073300820ull);
    vlSelf->tb_axi_wr__DOT__m_axi_wstrb = 255U;
    ;
    vlSelf->tb_axi_wr__DOT__m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16628524431777406454ull);
    vlSelf->tb_axi_wr__DOT__m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13731881991501674788ull);
    vlSelf->tb_axi_wr__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14331555623513998928ull);
    vlSelf->tb_axi_wr__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10451967529711557979ull);
    vlSelf->tb_axi_wr__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18183293135774547378ull);
    vlSelf->tb_axi_wr__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11135846919818999748ull);
    vlSelf->tb_axi_wr__DOT__m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9274828461734430330ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5168553954437201101ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16755949771807310239ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13323621705356813437ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14346297119518580685ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13438518785631476174ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_axi_wr__DOT__u_wr__DOT__req_line, __VscopeHash, 17015891316779143080ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11229041906037406208ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__resp_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16976232598227770759ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awid = 0U;
    ;
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3064823338676189716ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awlen = 3U;
    ;
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awsize = 3U;
    ;
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awburst = 1U;
    ;
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awlock = 0U;
    ;
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awcache = 3U;
    ;
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awprot = 0U;
    ;
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7725303352603875067ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15828472247512285457ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9937660166019575248ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_wstrb = 255U;
    ;
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6701934988675275886ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12826878218838270563ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16533692079066529770ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4001192959308287504ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14361164929917342713ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17909492413267148754ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15217558448549182087ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6795238992654086490ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__state_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8180257087874077847ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5315212090881409705ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__beat_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3166826405283174775ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15193778601637582117ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axi_wr__DOT__u_wr__DOT__line_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13214249317404236141ull);
    }
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__aw_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18010093736470343832ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__w_beat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7652073557271809959ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__b_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8038041713409167399ull);
    vlSelf->tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_wr__DOT__u_wr__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
