// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMPLECOUNTER__SYMS_H_
#define VERILATED_VSIMPLECOUNTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSimpleCounter.h"

// INCLUDE MODULE CLASSES
#include "VSimpleCounter___024root.h"

// SYMS CLASS (contains all model state)
class VSimpleCounter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSimpleCounter* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSimpleCounter___024root       TOP;

    // CONSTRUCTORS
    VSimpleCounter__Syms(VerilatedContext* contextp, const char* namep, VSimpleCounter* modelp);
    ~VSimpleCounter__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
