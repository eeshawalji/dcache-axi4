// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*7:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__AWLEN_FIXED;
constexpr CData/*2:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__AWSIZE_FIXED;
constexpr CData/*1:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__BURST_INCR;
constexpr CData/*1:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__RESP_OKAY;
constexpr CData/*1:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__LAST_BEAT;
constexpr CData/*7:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__ARLEN_FIXED;
constexpr CData/*2:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__ARSIZE_FIXED;
constexpr CData/*1:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__BURST_INCR;
constexpr CData/*1:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__RESP_OKAY;
constexpr CData/*1:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__LAST_BEAT;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__CAPACITY_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__LINE_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__WAYS;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__CPU_DATA_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__AXI_DATA_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__AXI_ID_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__CAPACITY_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__LINE_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__WAYS;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__CPU_DATA_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__AXI_DATA_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__AXI_ID_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__SETS;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__OFFSET_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__INDEX_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__TAG_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__BEATS;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__BYTE_SEL_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__WORD_SEL_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__WAY_IDX_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_data__DOT__BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__g_way__BRA__0__KET____DOT__u_tag__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__LINE_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__AXI_DATA_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__AXI_ID_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__LINE_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__BEATS;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__AXI_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_wr__DOT__BEAT_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__LINE_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__AXI_DATA_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__AXI_ID_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__LINE_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__BEATS;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__OFFSET_W;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__AXI_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tb_top__DOT__u_dcache__DOT__u_rd__DOT__BEAT_W;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
