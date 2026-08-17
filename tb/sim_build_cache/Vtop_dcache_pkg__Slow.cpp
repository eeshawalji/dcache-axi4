// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_dcache_pkg
constexpr CData/*1:0*/ Vtop_dcache_pkg::AXI_RESP_OKAY;



Vtop_dcache_pkg::Vtop_dcache_pkg() = default;
Vtop_dcache_pkg::~Vtop_dcache_pkg() = default;

void Vtop_dcache_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_dcache_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_dcache_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
