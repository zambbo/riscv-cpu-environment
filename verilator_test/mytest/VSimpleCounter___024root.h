// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimpleCounter.h for the primary calling header

#ifndef VERILATED_VSIMPLECOUNTER___024ROOT_H_
#define VERILATED_VSIMPLECOUNTER___024ROOT_H_  // guard

#include "verilated.h"

class VSimpleCounter__Syms;

class VSimpleCounter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__reset;
    CData/*0:0*/ __VactContinue;
    VL_OUT(output_n,31,0);
    IData/*31:0*/ SimpleCounter__DOT__input_n;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSimpleCounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimpleCounter___024root(VSimpleCounter__Syms* symsp, const char* v__name);
    ~VSimpleCounter___024root();
    VL_UNCOPYABLE(VSimpleCounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
