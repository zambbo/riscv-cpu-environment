// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv__Syms.h"
#include "VVexRiscv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__ico(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG

void VVexRiscv___024root___eval_triggers__ico(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVexRiscv___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VVexRiscv___024root___ico_sequent__TOP__0(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->dBus_cmd_valid = ((IData)(vlSymsp->TOP__VexRiscv.__VdfgTmp_he1f40cc6__0) 
                              & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)) 
                                 & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isFlushed))));
    vlSelf->iBus_cmd_payload_pc = (0xfffffffcU & vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_pc);
    vlSelf->iBus_cmd_valid = vlSymsp->TOP__VexRiscv.iBus_cmd_valid;
}

void VVexRiscv_VexRiscv___ico_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf);

void VVexRiscv___024root___eval_ico(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VVexRiscv_VexRiscv___ico_sequent__TOP__VexRiscv__0((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__act(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG

void VVexRiscv___024root___eval_triggers__act(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVexRiscv___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VVexRiscv___024root___nba_sequent__TOP__0(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->dBus_cmd_payload_address = vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub;
    vlSelf->dBus_cmd_payload_wr = vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_STORE;
}

VL_INLINE_OPT void VVexRiscv___024root___nba_sequent__TOP__1(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->dBus_cmd_payload_size = (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU));
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

void VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__1(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__2(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv_VexRiscv___nba_comb__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf);

void VVexRiscv___024root___eval_nba(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__0((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__1((&vlSymsp->TOP__VexRiscv));
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__2((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VVexRiscv_VexRiscv___nba_comb__TOP__VexRiscv__0((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___ico_sequent__TOP__0(vlSelf);
    }
}
