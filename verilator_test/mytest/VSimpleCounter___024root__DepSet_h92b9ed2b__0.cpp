// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCounter.h for the primary calling header

#include "verilated.h"

#include "VSimpleCounter___024root.h"

void VSimpleCounter___024root___eval_act(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSimpleCounter___024root___nba_sequent__TOP__0(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->SimpleCounter__DOT__input_n = ((IData)(vlSelf->reset)
                                            ? ((0xffffffffU 
                                                == vlSelf->SimpleCounter__DOT__input_n)
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + vlSelf->SimpleCounter__DOT__input_n))
                                            : 0U);
    vlSelf->output_n = vlSelf->SimpleCounter__DOT__input_n;
}

void VSimpleCounter___024root___eval_nba(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSimpleCounter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VSimpleCounter___024root___eval_triggers__act(VSimpleCounter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCounter___024root___dump_triggers__act(VSimpleCounter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCounter___024root___dump_triggers__nba(VSimpleCounter___024root* vlSelf);
#endif  // VL_DEBUG

void VSimpleCounter___024root___eval(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSimpleCounter___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSimpleCounter___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("counter.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSimpleCounter___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSimpleCounter___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("counter.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSimpleCounter___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSimpleCounter___024root___eval_debug_assertions(VSimpleCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCounter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
