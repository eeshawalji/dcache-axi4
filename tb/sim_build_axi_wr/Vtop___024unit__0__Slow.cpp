// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024unit___ctor_var_reset(Vtop___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop___024unit___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name15[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name15[0] = "S_IDLE"s;
    vlSelf->__Venumtab_enum_name15[1] = "S_AW"s;
    vlSelf->__Venumtab_enum_name15[2] = "S_W"s;
    vlSelf->__Venumtab_enum_name15[3] = "S_B"s;
    vlSelf->__Venumtab_enum_name15[4] = "S_RESP"s;
}
