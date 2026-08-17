// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_DCACHE_PKG_H_
#define VERILATED_VTOP_DCACHE_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_dcache_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*1:0*/ AXI_RESP_OKAY = 0U;

    // CONSTRUCTORS
    Vtop_dcache_pkg();
    ~Vtop_dcache_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_dcache_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
