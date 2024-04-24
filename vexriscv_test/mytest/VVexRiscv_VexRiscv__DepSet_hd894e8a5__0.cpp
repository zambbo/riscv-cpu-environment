// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv_VexRiscv.h"

extern const VlUnpacked<CData/*0:0*/, 128> VVexRiscv__ConstPool__TABLE_he82d9b6b_0;

VL_INLINE_OPT void VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__2(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege 
        = vlSelf->__Vdly__CsrPlugin_interrupt_targetPrivilege;
    vlSelf->__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_base = 8U;
    }
    vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
        = vlSelf->__PVT__execute_to_memory_INSTRUCTION;
    vlSelf->lastStageInstruction = vlSelf->__PVT__memory_to_writeBack_INSTRUCTION;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_INSTRUCTION 
            = vlSelf->__PVT__decode_to_execute_INSTRUCTION;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_772 = 
            (0x304U == (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_768 = 
            (0x300U == (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                        >> 0x14U));
        vlSelf->__PVT__decode_to_execute_INSTRUCTION 
            = vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst;
    }
    __Vtableidx30 = (((IData)(vlSelf->__PVT__execute_BranchPlugin_eq) 
                      << 6U) | ((0x20U & ((~ (IData)(vlSelf->__PVT__execute_BranchPlugin_eq)) 
                                          << 5U)) | 
                                (((IData)(vlSelf->__PVT__execute_SRC_LESS) 
                                  << 4U) | ((8U & (
                                                   (~ (IData)(vlSelf->__PVT__execute_SRC_LESS)) 
                                                   << 3U)) 
                                            | (7U & 
                                               (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU))))));
    vlSelf->__PVT___zz_execute_BRANCH_DO = VVexRiscv__ConstPool__TABLE_he82d9b6b_0
        [__Vtableidx30];
    if ((1U & (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck)))) {
        vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
            = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst;
    }
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = ((0x48U 
                                                  == 
                                                  (0x48U 
                                                   & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                 | ((0x1010U 
                                                     == 
                                                     (0x1010U 
                                                      & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                    | ((0x2010U 
                                                        == 
                                                        (0x2010U 
                                                         & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                       | ((0x10U 
                                                           == 
                                                           (0x50U 
                                                            & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                          | ((4U 
                                                              == 
                                                              (0xcU 
                                                               & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                             | (0U 
                                                                == 
                                                                (0x28U 
                                                                 & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)))))));
    if ((0U == (0x1fU & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSelf->__PVT__decode_BRANCH_CTRL = ((((0x48U == 
                                            (0x48U 
                                             & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                           | (4U == 
                                              (0x1cU 
                                               & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))) 
                                          << 1U) | 
                                         (0x40U == 
                                          (0x58U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelf->__PVT__decode_SHIFT_CTRL = (((0x5010U == 
                                          (0x7054U 
                                           & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                         << 1U) | (
                                                   (0x40001010U 
                                                    == 
                                                    (0x40003054U 
                                                     & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                   | (0x1010U 
                                                      == 
                                                      (0x7054U 
                                                       & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    vlSelf->__PVT__decode_ALU_BITWISE_CTRL = (((0x1000U 
                                                == 
                                                (0x1000U 
                                                 & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                               << 1U) 
                                              | (0x2000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelf->__PVT__decode_ALU_CTRL = ((((0x6000U == 
                                         (0x6004U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                        | (0x4000U 
                                           == (0x5004U 
                                               & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))) 
                                       << 1U) | (0x2000U 
                                                 == 
                                                 (0x6004U 
                                                  & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelf->__PVT__decode_SRC2_CTRL = ((((4U == (4U 
                                                 & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                         | (0x20U == 
                                            (0x70U 
                                             & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))) 
                                        << 1U) | ((4U 
                                                   == 
                                                   (4U 
                                                    & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                  | (0U 
                                                     == 
                                                     (0x20U 
                                                      & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    vlSelf->__PVT__decode_SRC1_CTRL = ((((4U == (0x14U 
                                                 & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                         | (0x4050U 
                                            == (0x4050U 
                                                & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))) 
                                        << 1U) | ((4U 
                                                   == 
                                                   (0x44U 
                                                    & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                  | (0x4050U 
                                                     == 
                                                     (0x4050U 
                                                      & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    vlSelf->__PVT__decode_SRC_USE_SUB_LESS = ((0x40U 
                                               == (0x44U 
                                                   & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                              | ((0x2010U 
                                                  == 
                                                  (0x2014U 
                                                   & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                 | (0x40000030U 
                                                    == 
                                                    (0x40004034U 
                                                     & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
}
