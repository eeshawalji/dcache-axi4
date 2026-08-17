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

extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_h5b0f8d54_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi_wr__DOT__clk = vlSelfRef.clk;
    vlSelfRef.tb_axi_wr__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.tb_axi_wr__DOT__req_addr = vlSelfRef.req_addr;
    vlSelfRef.tb_axi_wr__DOT__req_line[0U] = vlSelfRef.req_line[0U];
    vlSelfRef.tb_axi_wr__DOT__req_line[1U] = vlSelfRef.req_line[1U];
    vlSelfRef.tb_axi_wr__DOT__req_line[2U] = vlSelfRef.req_line[2U];
    vlSelfRef.tb_axi_wr__DOT__req_line[3U] = vlSelfRef.req_line[3U];
    vlSelfRef.tb_axi_wr__DOT__req_line[4U] = vlSelfRef.req_line[4U];
    vlSelfRef.tb_axi_wr__DOT__req_line[5U] = vlSelfRef.req_line[5U];
    vlSelfRef.tb_axi_wr__DOT__req_line[6U] = vlSelfRef.req_line[6U];
    vlSelfRef.tb_axi_wr__DOT__req_line[7U] = vlSelfRef.req_line[7U];
    vlSelfRef.tb_axi_wr__DOT__m_axi_bid = vlSelfRef.m_axi_bid;
    vlSelfRef.tb_axi_wr__DOT__m_axi_bresp = vlSelfRef.m_axi_bresp;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_ready 
        = (0U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__resp_valid 
        = (4U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__resp_error 
        = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__err_q;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awaddr 
        = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__addr_q;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wdata 
        = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__line_q
        [vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__beat_cnt];
    vlSelfRef.tb_axi_wr__DOT__req_valid = vlSelfRef.req_valid;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast 
        = (3U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__beat_cnt));
    vlSelfRef.tb_axi_wr__DOT__m_axi_awready = vlSelfRef.m_axi_awready;
    vlSelfRef.tb_axi_wr__DOT__m_axi_wready = vlSelfRef.m_axi_wready;
    vlSelfRef.tb_axi_wr__DOT__m_axi_bvalid = vlSelfRef.m_axi_bvalid;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid 
        = (1U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid 
        = (2U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bready 
        = (3U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__clk = vlSelfRef.tb_axi_wr__DOT__clk;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__rst_n = vlSelfRef.tb_axi_wr__DOT__rst_n;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_addr = vlSelfRef.tb_axi_wr__DOT__req_addr;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line[0U] 
        = vlSelfRef.tb_axi_wr__DOT__req_line[0U];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line[1U] 
        = vlSelfRef.tb_axi_wr__DOT__req_line[1U];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line[2U] 
        = vlSelfRef.tb_axi_wr__DOT__req_line[2U];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line[3U] 
        = vlSelfRef.tb_axi_wr__DOT__req_line[3U];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line[4U] 
        = vlSelfRef.tb_axi_wr__DOT__req_line[4U];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line[5U] 
        = vlSelfRef.tb_axi_wr__DOT__req_line[5U];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line[6U] 
        = vlSelfRef.tb_axi_wr__DOT__req_line[6U];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line[7U] 
        = vlSelfRef.tb_axi_wr__DOT__req_line[7U];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bid 
        = vlSelfRef.tb_axi_wr__DOT__m_axi_bid;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bresp 
        = vlSelfRef.tb_axi_wr__DOT__m_axi_bresp;
    vlSelfRef.tb_axi_wr__DOT__req_ready = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_ready;
    vlSelfRef.tb_axi_wr__DOT__resp_valid = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__resp_valid;
    vlSelfRef.tb_axi_wr__DOT__resp_error = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__resp_error;
    vlSelfRef.tb_axi_wr__DOT__m_axi_awaddr = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awaddr;
    vlSelfRef.tb_axi_wr__DOT__m_axi_wdata = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wdata;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_valid 
        = vlSelfRef.tb_axi_wr__DOT__req_valid;
    vlSelfRef.tb_axi_wr__DOT__m_axi_wlast = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awready 
        = vlSelfRef.tb_axi_wr__DOT__m_axi_awready;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wready 
        = vlSelfRef.tb_axi_wr__DOT__m_axi_wready;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bvalid 
        = vlSelfRef.tb_axi_wr__DOT__m_axi_bvalid;
    vlSelfRef.tb_axi_wr__DOT__m_axi_awvalid = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid;
    vlSelfRef.tb_axi_wr__DOT__m_axi_wvalid = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid;
    vlSelfRef.tb_axi_wr__DOT__m_axi_bready = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bready;
    vlSelfRef.req_ready = vlSelfRef.tb_axi_wr__DOT__req_ready;
    vlSelfRef.resp_valid = vlSelfRef.tb_axi_wr__DOT__resp_valid;
    vlSelfRef.resp_error = vlSelfRef.tb_axi_wr__DOT__resp_error;
    vlSelfRef.m_axi_awaddr = vlSelfRef.tb_axi_wr__DOT__m_axi_awaddr;
    vlSelfRef.m_axi_wdata = vlSelfRef.tb_axi_wr__DOT__m_axi_wdata;
    vlSelfRef.m_axi_wlast = vlSelfRef.tb_axi_wr__DOT__m_axi_wlast;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__aw_accept 
        = ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid) 
           & (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awready));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__w_beat = ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid) 
                                                   & (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wready));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__b_accept = 
        ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bvalid) 
         & (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bready));
    vlSelfRef.m_axi_awvalid = vlSelfRef.tb_axi_wr__DOT__m_axi_awvalid;
    vlSelfRef.m_axi_wvalid = vlSelfRef.tb_axi_wr__DOT__m_axi_wvalid;
    vlSelfRef.m_axi_bready = vlSelfRef.tb_axi_wr__DOT__m_axi_bready;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state_n = Vtop__ConstPool__TABLE_h5b0f8d54_0
        [((((((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_valid) 
              << 3U) | ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__aw_accept) 
                        << 2U)) | (((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast) 
                                    << 1U) | (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__w_beat))) 
           << 4U) | (((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__b_accept) 
                      << 3U) | (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state)))];
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__tb_axi_wr__DOT__u_wr__DOT__beat_cnt;
    __Vdly__tb_axi_wr__DOT__u_wr__DOT__beat_cnt = 0;
    QData/*63:0*/ __VdlyVal__tb_axi_wr__DOT__u_wr__DOT__line_q__v0;
    __VdlyVal__tb_axi_wr__DOT__u_wr__DOT__line_q__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_axi_wr__DOT__u_wr__DOT__line_q__v0;
    __VdlyDim0__tb_axi_wr__DOT__u_wr__DOT__line_q__v0 = 0;
    std::string __Vtemp_1;
    // Body
    __Vdly__tb_axi_wr__DOT__u_wr__DOT__beat_cnt = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__beat_cnt;
    if (vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__rst_n) {
        if (VL_UNLIKELY(((((0U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state)) 
                           & (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_valid)) 
                          & (0U != (0x0000001fU & vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_addr)))))) {
            VL_WRITEF_NX("[%0t] %%Error: axi_write_master.sv:220: Assertion failed in %m: axi_write_master: unaligned request 0x%0h\n",4, 'M',vlSymsp->name(),"tb_axi_wr.u_wr", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_addr);
            VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_write_master.sv", 220, "");
        }
        if (vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__b_accept) {
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bresp))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_write_master.sv:224: Assertion failed in %m: axi_write_master: BRESP=%0d for 0x%0h\n",5, 'M',vlSymsp->name(),"tb_axi_wr.u_wr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bresp)
                             , '#',32,vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__addr_q);
                VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_write_master.sv", 224, "");
            }
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bid))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_write_master.sv:226: Assertion failed in %m: axi_write_master: BID=%0d, expected 0\n",4, 'M',vlSymsp->name(),"tb_axi_wr.u_wr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bid));
                VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_write_master.sv", 226, "");
            }
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bvalid) 
                          & (3U != (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state)))))) {
            __Vtemp_1 = Vtop___024unit::__Venumtab_enum_name15
                [vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state];
            VL_WRITEF_NX("[%0t] %%Error: axi_write_master.sv:232: Assertion failed in %m: axi_write_master: unexpected BVALID in state %s\n",4, 'M',vlSymsp->name(),"tb_axi_wr.u_wr", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(__Vtemp_1));
            VL_STOP_MT("/home/eeshawalji/dcache/tb/../hdl/axi_write_master.sv", 232, "");
        }
    }
    if (vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__rst_n) {
        if (((0U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state)) 
             & (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_valid))) {
            vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i = 0U;
            vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__addr_q 
                = (0xffffffe0U & vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_addr);
            __Vdly__tb_axi_wr__DOT__u_wr__DOT__beat_cnt = 0U;
            vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__err_q = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i)) {
                __VdlyVal__tb_axi_wr__DOT__u_wr__DOT__line_q__v0 
                    = (((QData)((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line
                                        [(((IData)(0x0000003fU) 
                                           + (0x000000ffU 
                                              & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i))) 
                                          >> 5U)])) 
                        << ((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i)))
                             ? 0x00000020U : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i))))) 
                       | (((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i)))
                            ? 0ULL : ((QData)((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line
                                                      [
                                                      (((IData)(0x0000001fU) 
                                                        + 
                                                        (0x000000ffU 
                                                         & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i))))) 
                          | ((QData)((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_line
                                             [(7U & 
                                               (VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))])) 
                             >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i)))));
                __VdlyDim0__tb_axi_wr__DOT__u_wr__DOT__line_q__v0 
                    = (3U & vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuetb_axi_wr__DOT__u_wr__DOT__line_q.enqueue(__VdlyVal__tb_axi_wr__DOT__u_wr__DOT__line_q__v0, (IData)(__VdlyDim0__tb_axi_wr__DOT__u_wr__DOT__line_q__v0));
                vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__unnamedblk1__DOT__i);
            }
        }
        if (((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__w_beat) 
             & (~ (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast)))) {
            __Vdly__tb_axi_wr__DOT__u_wr__DOT__beat_cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__beat_cnt)));
        }
        if (vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__b_accept) {
            vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__err_q 
                = (0U != (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bresp));
        }
    } else {
        __Vdly__tb_axi_wr__DOT__u_wr__DOT__beat_cnt = 0U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__addr_q = 0U;
        vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__err_q = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetb_axi_wr__DOT__u_wr__DOT__line_q.commit(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__line_q);
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state = ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__rst_n)
                                                   ? (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state_n)
                                                   : 0U);
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__beat_cnt = __Vdly__tb_axi_wr__DOT__u_wr__DOT__beat_cnt;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awaddr 
        = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__addr_q;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__resp_error 
        = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__err_q;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wdata 
        = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__line_q
        [vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__beat_cnt];
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast 
        = (3U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__beat_cnt));
    vlSelfRef.tb_axi_wr__DOT__m_axi_awaddr = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awaddr;
    vlSelfRef.tb_axi_wr__DOT__resp_error = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__resp_error;
    vlSelfRef.tb_axi_wr__DOT__m_axi_wdata = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wdata;
    vlSelfRef.tb_axi_wr__DOT__m_axi_wlast = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast;
    vlSelfRef.m_axi_awaddr = vlSelfRef.tb_axi_wr__DOT__m_axi_awaddr;
    vlSelfRef.resp_error = vlSelfRef.tb_axi_wr__DOT__resp_error;
    vlSelfRef.m_axi_wdata = vlSelfRef.tb_axi_wr__DOT__m_axi_wdata;
    vlSelfRef.m_axi_wlast = vlSelfRef.tb_axi_wr__DOT__m_axi_wlast;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_ready 
        = (0U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__resp_valid 
        = (4U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid 
        = (1U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid 
        = (2U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bready 
        = (3U == (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state));
    vlSelfRef.tb_axi_wr__DOT__req_ready = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_ready;
    vlSelfRef.tb_axi_wr__DOT__resp_valid = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__resp_valid;
    vlSelfRef.tb_axi_wr__DOT__m_axi_awvalid = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__aw_accept 
        = ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awvalid) 
           & (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_awready));
    vlSelfRef.tb_axi_wr__DOT__m_axi_wvalid = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__w_beat = ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wvalid) 
                                                   & (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wready));
    vlSelfRef.tb_axi_wr__DOT__m_axi_bready = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bready;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__b_accept = 
        ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bvalid) 
         & (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_bready));
    vlSelfRef.req_ready = vlSelfRef.tb_axi_wr__DOT__req_ready;
    vlSelfRef.resp_valid = vlSelfRef.tb_axi_wr__DOT__resp_valid;
    vlSelfRef.m_axi_awvalid = vlSelfRef.tb_axi_wr__DOT__m_axi_awvalid;
    vlSelfRef.m_axi_wvalid = vlSelfRef.tb_axi_wr__DOT__m_axi_wvalid;
    vlSelfRef.m_axi_bready = vlSelfRef.tb_axi_wr__DOT__m_axi_bready;
    vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state_n = Vtop__ConstPool__TABLE_h5b0f8d54_0
        [((((((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__req_valid) 
              << 3U) | ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__aw_accept) 
                        << 2U)) | (((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__m_axi_wlast) 
                                    << 1U) | (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__w_beat))) 
           << 4U) | (((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__b_accept) 
                      << 3U) | (IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__state)))];
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
                                                        ((IData)(vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_wr__DOT__u_wr__DOT__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_wr__DOT__u_wr__DOT__clk__0 
            = vlSelfRef.tb_axi_wr__DOT__u_wr__DOT__clk;
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
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
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
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_axi_wr.sv", 10, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_axi_wr.sv", 10, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/eeshawalji/dcache/tb/tb_axi_wr.sv", 10, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
}
#endif  // VL_DEBUG
