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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi_probe__DOT__clk = vlSelfRef.clk;
    vlSelfRef.tb_axi_probe__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awid = vlSelfRef.m_axi_awid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awaddr = vlSelfRef.m_axi_awaddr;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awlen = vlSelfRef.m_axi_awlen;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awsize = vlSelfRef.m_axi_awsize;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awburst = vlSelfRef.m_axi_awburst;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awlock = vlSelfRef.m_axi_awlock;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awcache = vlSelfRef.m_axi_awcache;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awprot = vlSelfRef.m_axi_awprot;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awvalid = vlSelfRef.m_axi_awvalid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_awready = vlSelfRef.m_axi_awready;
    vlSelfRef.tb_axi_probe__DOT__m_axi_wdata = vlSelfRef.m_axi_wdata;
    vlSelfRef.tb_axi_probe__DOT__m_axi_wstrb = vlSelfRef.m_axi_wstrb;
    vlSelfRef.tb_axi_probe__DOT__m_axi_wlast = vlSelfRef.m_axi_wlast;
    vlSelfRef.tb_axi_probe__DOT__m_axi_wvalid = vlSelfRef.m_axi_wvalid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_wready = vlSelfRef.m_axi_wready;
    vlSelfRef.tb_axi_probe__DOT__m_axi_bid = vlSelfRef.m_axi_bid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_bresp = vlSelfRef.m_axi_bresp;
    vlSelfRef.tb_axi_probe__DOT__m_axi_bvalid = vlSelfRef.m_axi_bvalid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_bready = vlSelfRef.m_axi_bready;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arid = vlSelfRef.m_axi_arid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_araddr = vlSelfRef.m_axi_araddr;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arlen = vlSelfRef.m_axi_arlen;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arsize = vlSelfRef.m_axi_arsize;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arburst = vlSelfRef.m_axi_arburst;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arlock = vlSelfRef.m_axi_arlock;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arcache = vlSelfRef.m_axi_arcache;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arprot = vlSelfRef.m_axi_arprot;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arvalid = vlSelfRef.m_axi_arvalid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_arready = vlSelfRef.m_axi_arready;
    vlSelfRef.tb_axi_probe__DOT__m_axi_rid = vlSelfRef.m_axi_rid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_rdata = vlSelfRef.m_axi_rdata;
    vlSelfRef.tb_axi_probe__DOT__m_axi_rresp = vlSelfRef.m_axi_rresp;
    vlSelfRef.tb_axi_probe__DOT__m_axi_rlast = vlSelfRef.m_axi_rlast;
    vlSelfRef.tb_axi_probe__DOT__m_axi_rvalid = vlSelfRef.m_axi_rvalid;
    vlSelfRef.tb_axi_probe__DOT__m_axi_rready = vlSelfRef.m_axi_rready;
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_axi_probe.sv", 17, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
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
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awid & 0xf0U)))) {
        Verilated::overWidthError("m_axi_awid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awsize & 0xf8U)))) {
        Verilated::overWidthError("m_axi_awsize");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awburst & 0xfcU)))) {
        Verilated::overWidthError("m_axi_awburst");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awlock & 0xfeU)))) {
        Verilated::overWidthError("m_axi_awlock");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awcache & 0xf0U)))) {
        Verilated::overWidthError("m_axi_awcache");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awprot & 0xf8U)))) {
        Verilated::overWidthError("m_axi_awprot");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_awvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_awready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_wlast & 0xfeU)))) {
        Verilated::overWidthError("m_axi_wlast");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_wvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_wvalid");
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
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_bready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arid & 0xf0U)))) {
        Verilated::overWidthError("m_axi_arid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arsize & 0xf8U)))) {
        Verilated::overWidthError("m_axi_arsize");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arburst & 0xfcU)))) {
        Verilated::overWidthError("m_axi_arburst");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arlock & 0xfeU)))) {
        Verilated::overWidthError("m_axi_arlock");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arcache & 0xf0U)))) {
        Verilated::overWidthError("m_axi_arcache");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arprot & 0xf8U)))) {
        Verilated::overWidthError("m_axi_arprot");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_arvalid");
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
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_rready");
    }
}
#endif  // VL_DEBUG
