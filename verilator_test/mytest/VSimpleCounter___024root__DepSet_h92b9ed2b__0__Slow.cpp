// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCounter.h for the primary calling header

#include "verilated.h"

#include "VSimpleCounter___024root.h"

VL_ATTR_COLD void VSimpleCounter___024root___eval_static(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSimpleCounter___024root___eval_initial__TOP(VSimpleCounter___024root* vlSelf);

VL_ATTR_COLD void VSimpleCounter___024root___eval_initial(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_initial\n"); );
    // Body
    VSimpleCounter___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void VSimpleCounter___024root___eval_initial__TOP(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->SimpleCounter__DOT__input_n = 0xffffffffU;
}

VL_ATTR_COLD void VSimpleCounter___024root___eval_final(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSimpleCounter___024root___eval_triggers__stl(VSimpleCounter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCounter___024root___dump_triggers__stl(VSimpleCounter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSimpleCounter___024root___eval_stl(VSimpleCounter___024root* vlSelf);

VL_ATTR_COLD void VSimpleCounter___024root___eval_settle(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VSimpleCounter___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VSimpleCounter___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("counter.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VSimpleCounter___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCounter___024root___dump_triggers__stl(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleCounter___024root___stl_sequent__TOP__0(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->output_n = vlSelf->SimpleCounter__DOT__input_n;
}

VL_ATTR_COLD void VSimpleCounter___024root___eval_stl(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VSimpleCounter___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCounter___024root___dump_triggers__act(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCounter___024root___dump_triggers__nba(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleCounter___024root___ctor_var_reset(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->output_n = VL_RAND_RESET_I(32);
    vlSelf->SimpleCounter__DOT__input_n = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
}
