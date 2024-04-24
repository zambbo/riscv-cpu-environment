// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv___024root.h"

void VVexRiscv___024root___eval_act(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_act\n"); );
}

void VVexRiscv___024root___eval_triggers__ico(VVexRiscv___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__ico(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
void VVexRiscv___024root___eval_ico(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval_triggers__act(VVexRiscv___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__act(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__nba(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
void VVexRiscv___024root___eval_nba(VVexRiscv___024root* vlSelf);

void VVexRiscv___024root___eval(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VVexRiscv___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VVexRiscv___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("VexRiscv.v", 7, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VVexRiscv___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VVexRiscv___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VVexRiscv___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("VexRiscv.v", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VVexRiscv___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VVexRiscv___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("VexRiscv.v", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VVexRiscv___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VVexRiscv___024root___eval_debug_assertions(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->iBus_cmd_ready & 0xfeU))) {
        Verilated::overWidthError("iBus_cmd_ready");}
    if (VL_UNLIKELY((vlSelf->iBus_rsp_valid & 0xfeU))) {
        Verilated::overWidthError("iBus_rsp_valid");}
    if (VL_UNLIKELY((vlSelf->iBus_rsp_payload_error 
                     & 0xfeU))) {
        Verilated::overWidthError("iBus_rsp_payload_error");}
    if (VL_UNLIKELY((vlSelf->timerInterrupt & 0xfeU))) {
        Verilated::overWidthError("timerInterrupt");}
    if (VL_UNLIKELY((vlSelf->externalInterrupt & 0xfeU))) {
        Verilated::overWidthError("externalInterrupt");}
    if (VL_UNLIKELY((vlSelf->softwareInterrupt & 0xfeU))) {
        Verilated::overWidthError("softwareInterrupt");}
    if (VL_UNLIKELY((vlSelf->dBus_cmd_ready & 0xfeU))) {
        Verilated::overWidthError("dBus_cmd_ready");}
    if (VL_UNLIKELY((vlSelf->dBus_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("dBus_rsp_ready");}
    if (VL_UNLIKELY((vlSelf->dBus_rsp_error & 0xfeU))) {
        Verilated::overWidthError("dBus_rsp_error");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
