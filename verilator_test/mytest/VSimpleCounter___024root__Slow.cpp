// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCounter.h for the primary calling header

#include "verilated.h"

#include "VSimpleCounter__Syms.h"
#include "VSimpleCounter___024root.h"

void VSimpleCounter___024root___ctor_var_reset(VSimpleCounter___024root* vlSelf);

VSimpleCounter___024root::VSimpleCounter___024root(VSimpleCounter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSimpleCounter___024root___ctor_var_reset(this);
}

void VSimpleCounter___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSimpleCounter___024root::~VSimpleCounter___024root() {
}
