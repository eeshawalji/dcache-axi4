// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_dcache_pkg.h"
#include "Vtop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit                 TOP____024unit;
    Vtop_dcache_pkg                TOP__dcache_pkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_dcache_pkg;
    VerilatedScope* __Vscopep_tb_top;
    VerilatedScope* __Vscopep_tb_top__u_dcache;
    VerilatedScope* __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET__;
    VerilatedScope* __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data;
    VerilatedScope* __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_data__unnamedblk1;
    VerilatedScope* __Vscopep_tb_top__u_dcache__g_way__BRA__0__KET____u_tag;
    VerilatedScope* __Vscopep_tb_top__u_dcache__u_rd;
    VerilatedScope* __Vscopep_tb_top__u_dcache__u_wr;
    VerilatedScope* __Vscopep_tb_top__u_dcache__u_wr__unnamedblk1;
    VerilatedScope* __Vscopep_tb_top__u_dcache__unnamedblk1;
    VerilatedScope* __Vscopep_tb_top__u_dcache__unnamedblk2;
    VerilatedScope* __Vscopep_tb_top__u_dcache__unnamedblk3;
    VerilatedScope* __Vscopep_tb_top__u_dcache__unnamedblk4;
    VerilatedScope* __Vscopep_tb_top__u_dcache__unnamedblk5;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
