// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv___024root.h"

VL_ATTR_COLD void VVexRiscv___024root___eval_static(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_static\n"); );
}

VL_ATTR_COLD void VVexRiscv___024root___eval_final(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_final\n"); );
}

VL_ATTR_COLD void VVexRiscv___024root___eval_triggers__stl(VVexRiscv___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__stl(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___eval_stl(VVexRiscv___024root* vlSelf);

VL_ATTR_COLD void VVexRiscv___024root___eval_settle(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VVexRiscv___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VVexRiscv___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("VexRiscv.v", 7, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VVexRiscv___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__stl(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__ico(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__act(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__nba(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VVexRiscv___024root___ctor_var_reset(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->iBus_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->iBus_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->iBus_cmd_payload_pc = VL_RAND_RESET_I(32);
    vlSelf->iBus_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->iBus_rsp_payload_error = VL_RAND_RESET_I(1);
    vlSelf->iBus_rsp_payload_inst = VL_RAND_RESET_I(32);
    vlSelf->timerInterrupt = VL_RAND_RESET_I(1);
    vlSelf->externalInterrupt = VL_RAND_RESET_I(1);
    vlSelf->softwareInterrupt = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_payload_wr = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_payload_address = VL_RAND_RESET_I(32);
    vlSelf->dBus_cmd_payload_data = VL_RAND_RESET_I(32);
    vlSelf->dBus_cmd_payload_size = VL_RAND_RESET_I(2);
    vlSelf->dBus_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->dBus_rsp_error = VL_RAND_RESET_I(1);
    vlSelf->dBus_rsp_data = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
}
