// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv__Syms.h"
#include "VVexRiscv___024root.h"

VL_ATTR_COLD void VVexRiscv_VexRiscv___eval_initial__TOP__VexRiscv(VVexRiscv_VexRiscv* vlSelf);

VL_ATTR_COLD void VVexRiscv___024root___eval_initial(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_initial\n"); );
    // Body
    VVexRiscv_VexRiscv___eval_initial__TOP__VexRiscv((&vlSymsp->TOP__VexRiscv));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__stl(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VVexRiscv___024root___eval_triggers__stl(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVexRiscv___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VVexRiscv___024root___stl_sequent__TOP__0(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->dBus_cmd_payload_size = (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU));
    vlSelf->dBus_cmd_payload_wr = vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_STORE;
    vlSelf->dBus_cmd_payload_data = ((0U == (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU)))
                                      ? ((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))))
                                      : ((1U == (3U 
                                                 & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0xcU)))
                                          ? ((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))
                                          : vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2));
}

VL_ATTR_COLD void VVexRiscv___024root___stl_sequent__TOP__1(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->dBus_cmd_payload_address = vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub;
    vlSelf->dBus_cmd_valid = ((IData)(vlSymsp->TOP__VexRiscv.__VdfgTmp_he1f40cc6__0) 
                              & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)) 
                                 & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isFlushed))));
    vlSelf->iBus_cmd_payload_pc = (0xfffffffcU & vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_pc);
    vlSelf->iBus_cmd_valid = vlSymsp->TOP__VexRiscv.iBus_cmd_valid;
}

VL_ATTR_COLD void VVexRiscv_VexRiscv___stl_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf);

VL_ATTR_COLD void VVexRiscv___024root___eval_stl(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VVexRiscv___024root___stl_sequent__TOP__0(vlSelf);
        VVexRiscv_VexRiscv___stl_sequent__TOP__VexRiscv__0((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___stl_sequent__TOP__1(vlSelf);
    }
}
