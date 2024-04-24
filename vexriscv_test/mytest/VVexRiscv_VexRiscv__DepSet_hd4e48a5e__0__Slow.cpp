// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv_VexRiscv.h"
#include "VVexRiscv__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 512> VVexRiscv__ConstPool__TABLE_hf9485da8_0;
extern const VlUnpacked<CData/*0:0*/, 128> VVexRiscv__ConstPool__TABLE_he82d9b6b_0;

VL_ATTR_COLD void VVexRiscv_VexRiscv___stl_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___stl_sequent__TOP__VexRiscv__0\n"); );
    // Init
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready;
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready = 0;
    IData/*31:0*/ __PVT___zz_lastStageRegFileWrite_payload_data;
    __PVT___zz_lastStageRegFileWrite_payload_data = 0;
    CData/*0:0*/ __PVT__execute_arbitration_haltItself;
    __PVT__execute_arbitration_haltItself = 0;
    CData/*0:0*/ __PVT__writeBack_arbitration_flushNext;
    __PVT__writeBack_arbitration_flushNext = 0;
    CData/*0:0*/ __PVT__IBusSimplePlugin_fetcherHalt;
    __PVT__IBusSimplePlugin_fetcherHalt = 0;
    IData/*31:0*/ __PVT__CsrPlugin_csrMapping_readDataSignal;
    __PVT__CsrPlugin_csrMapping_readDataSignal = 0;
    CData/*0:0*/ __PVT__CsrPlugin_jumpInterface_valid;
    __PVT__CsrPlugin_jumpInterface_valid = 0;
    IData/*31:0*/ __PVT__CsrPlugin_jumpInterface_payload;
    __PVT__CsrPlugin_jumpInterface_payload = 0;
    CData/*0:0*/ __PVT__IBusSimplePlugin_jump_pcLoad_valid;
    __PVT__IBusSimplePlugin_jump_pcLoad_valid = 0;
    CData/*1:0*/ __PVT___zz_IBusSimplePlugin_jump_pcLoad_payload;
    __PVT___zz_IBusSimplePlugin_jump_pcLoad_payload = 0;
    CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_correction;
    __PVT__IBusSimplePlugin_fetchPc_correction = 0;
    CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_pcRegPropagate;
    __PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 0;
    CData/*0:0*/ __PVT__IBusSimplePlugin_cmdFork_canEmit;
    __PVT__IBusSimplePlugin_cmdFork_canEmit = 0;
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid;
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid = 0;
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready;
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready = 0;
    CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_done;
    __PVT__CsrPlugin_pipelineLiberator_done = 0;
    IData/*31:0*/ __PVT__execute_LightShifterPlugin_shiftInput;
    __PVT__execute_LightShifterPlugin_shiftInput = 0;
    CData/*0:0*/ __PVT__HazardSimplePlugin_src0Hazard;
    __PVT__HazardSimplePlugin_src0Hazard = 0;
    CData/*0:0*/ __PVT__HazardSimplePlugin_src1Hazard;
    __PVT__HazardSimplePlugin_src1Hazard = 0;
    CData/*0:0*/ __PVT__when_HazardSimplePlugin_l57_1;
    __PVT__when_HazardSimplePlugin_l57_1 = 0;
    CData/*0:0*/ __PVT__when_HazardSimplePlugin_l57_2;
    __PVT__when_HazardSimplePlugin_l57_2 = 0;
    IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_readDataInit;
    __PVT___zz_CsrPlugin_csrMapping_readDataInit = 0;
    IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_readDataInit_2;
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0;
    SData/*8:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    SData/*8:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*6:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
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
    vlSelf->lastStageInstruction = vlSelf->__PVT__memory_to_writeBack_INSTRUCTION;
    vlSelf->lastStageIsValid = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->lastStageIsFiring = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
    vlSelf->lastStageRegFileWrite_payload_address = 
        (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                  >> 7U));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_2 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                                               & (IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_1 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP));
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rData_inst;
    vlSelf->__PVT__execute_BranchPlugin_eq = (vlSelf->__PVT__decode_to_execute_SRC1 
                                              == vlSelf->__PVT__decode_to_execute_SRC2);
    vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
        = vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA;
    if ((1U == (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffU & (vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                           >> 8U)));
    } else if ((2U == (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffff0000U & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                  >> 0x10U));
    } else if ((3U == (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                  >> 0x18U));
    }
    if (vlSelf->__PVT__execute_LightShifterPlugin_isActive) {
        __PVT__execute_LightShifterPlugin_shiftInput 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
        vlSelf->__PVT__execute_LightShifterPlugin_amplitude 
            = (0x1fU & (IData)(vlSelf->__PVT__execute_LightShifterPlugin_amplitudeReg));
    } else {
        __PVT__execute_LightShifterPlugin_shiftInput 
            = vlSelf->__PVT__decode_to_execute_SRC1;
        vlSelf->__PVT__execute_LightShifterPlugin_amplitude 
            = (0x1fU & vlSelf->__PVT__decode_to_execute_SRC2);
    }
    vlSelf->__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_base = 8U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0x7fffffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xfffffff0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | (IData)(vlSelf->__PVT__CsrPlugin_mcause_exceptionCode));
    }
    __PVT___zz_CsrPlugin_csrMapping_readDataInit = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        __PVT___zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xffffff7fU & __PVT___zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        __PVT___zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xfffffff7U & __PVT___zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
        __PVT___zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xffffe7ffU & __PVT___zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = ((0xfffff7ffU & __PVT___zz_CsrPlugin_csrMapping_readDataInit_2) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = ((0xffffff7fU & __PVT___zz_CsrPlugin_csrMapping_readDataInit_2) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = ((0xfffffff7U & __PVT___zz_CsrPlugin_csrMapping_readDataInit_2) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
    }
    vlSelf->__PVT__execute_SrcPlugin_addSub = (vlSelf->__PVT__decode_to_execute_SRC1 
                                               + (((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                    ? 
                                                   (~ vlSelf->__PVT__decode_to_execute_SRC2)
                                                    : vlSelf->__PVT__decode_to_execute_SRC2) 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                    ? 1U
                                                    : 0U)));
    if (vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSelf->__PVT__execute_SrcPlugin_addSub = vlSelf->__PVT__decode_to_execute_SRC1;
    }
    vlSelf->__PVT__BranchPlugin_jumpInterface_valid 
        = ((IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO) 
           & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid;
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid));
    __PVT__CsrPlugin_pipelineLiberator_done = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if (vlSelf->CsrPlugin_hadException) {
        __PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSelf->__VdfgTmp_he1f40cc6__0 = ((IData)(vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE) 
                                      & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__when_CsrPlugin_l1587 = ((IData)(vlSelf->__PVT__decode_to_execute_IS_CSR) 
                                           & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__when_ShiftPlugins_l169 = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                             & ((0U 
                                                 != (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & vlSelf->__PVT__decode_to_execute_SRC2))));
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    if (((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
         & ((~ ((IData)(vlSymsp->TOP.dBus_rsp_ready) 
                | (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_STORE))) 
            & (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE)))) {
        vlSelf->__PVT__memory_arbitration_haltItself = 1U;
    }
    vlSelf->__PVT__when_CsrPlugin_l1456 = ((IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL) 
                                           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    __PVT__when_HazardSimplePlugin_l57_1 = ((IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID) 
                                            & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    __PVT__when_HazardSimplePlugin_l57_2 = ((IData)(vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID) 
                                            & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid 
        = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    __PVT___zz_lastStageRegFileWrite_payload_data = vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE) 
         & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid))) {
        __PVT___zz_lastStageRegFileWrite_payload_data 
            = ((0U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? (((- (IData)(
                                                       (1U 
                                                        & ((~ 
                                                            (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                             >> 0xeU)) 
                                                           & (vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                              >> 7U))))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted))
                : ((1U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                 >> 0xcU))) ? (((- (IData)(
                                                           (1U 
                                                            & ((~ 
                                                                (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                                 >> 0xeU)) 
                                                               & (vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                                  >> 0xfU))))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted))
                    : vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted));
    }
    __PVT__CsrPlugin_csrMapping_readDataSignal = (__PVT___zz_CsrPlugin_csrMapping_readDataInit 
                                                  | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
                                                     | (__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
                                                        | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3)));
    vlSelf->__PVT__execute_SRC_LESS = (1U & (((vlSelf->__PVT__decode_to_execute_SRC1 
                                               >> 0x1fU) 
                                              == (vlSelf->__PVT__decode_to_execute_SRC2 
                                                  >> 0x1fU))
                                              ? (vlSelf->__PVT__execute_SrcPlugin_addSub 
                                                 >> 0x1fU)
                                              : ((IData)(vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                                                  ? 
                                                 (vlSelf->__PVT__decode_to_execute_SRC2 
                                                  >> 0x1fU)
                                                  : 
                                                 (vlSelf->__PVT__decode_to_execute_SRC1 
                                                  >> 0x1fU))));
    vlSelf->__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__BranchPlugin_jumpInterface_valid) {
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid)))) {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
            = vlSymsp->TOP.iBus_rsp_payload_inst;
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
            = vlSymsp->TOP.iBus_rsp_valid;
    }
    vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U != (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U == (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(__PVT__CsrPlugin_pipelineLiberator_done));
    __PVT__execute_arbitration_haltItself = 0U;
    if (((~ (IData)(vlSymsp->TOP.dBus_cmd_ready)) & (IData)(vlSelf->__VdfgTmp_he1f40cc6__0))) {
        __PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1587) {
        if (((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
             | (IData)(vlSelf->__PVT__writeBack_arbitration_isValid))) {
            __PVT__execute_arbitration_haltItself = 1U;
        }
    }
    vlSelf->lastStageRegFileWrite_valid = vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid;
    __Vtableidx28 = ((0x100U & ((~ ((0U == (0x44U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                    | ((0U == (0x18U 
                                               & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                       | ((0x2000U 
                                           == (0x6004U 
                                               & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                          | (0x1000U 
                                             == (0x5004U 
                                                 & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)))))) 
                                << 8U)) | ((((0x1fU 
                                              & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 7U)) 
                                             == (0x1fU 
                                                 & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                    >> 0xfU))) 
                                            << 7U) 
                                           | (((IData)(__PVT__when_HazardSimplePlugin_l57_2) 
                                               << 6U) 
                                              | ((((0x1fU 
                                                    & (vlSelf->__PVT__execute_to_memory_INSTRUCTION 
                                                       >> 7U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                       >> 0xfU))) 
                                                  << 5U) 
                                                 | (((IData)(__PVT__when_HazardSimplePlugin_l57_1) 
                                                     << 4U) 
                                                    | ((((0x1fU 
                                                          & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                             >> 7U)) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                             >> 0xfU))) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                                   >> 0xfU))) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid)))))))));
    __PVT__HazardSimplePlugin_src0Hazard = VVexRiscv__ConstPool__TABLE_hf9485da8_0
        [__Vtableidx28];
    __Vtableidx29 = ((0x100U & ((~ ((0x20U == (0x34U 
                                               & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                    | (0x20U == (0x64U 
                                                 & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)))) 
                                << 8U)) | ((((0x1fU 
                                              & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 7U)) 
                                             == (0x1fU 
                                                 & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                    >> 0x14U))) 
                                            << 7U) 
                                           | (((IData)(__PVT__when_HazardSimplePlugin_l57_2) 
                                               << 6U) 
                                              | ((((0x1fU 
                                                    & (vlSelf->__PVT__execute_to_memory_INSTRUCTION 
                                                       >> 7U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                       >> 0x14U))) 
                                                  << 5U) 
                                                 | (((IData)(__PVT__when_HazardSimplePlugin_l57_1) 
                                                     << 4U) 
                                                    | ((((0x1fU 
                                                          & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                             >> 7U)) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                             >> 0x14U))) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                                   >> 0x14U))) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid)))))))));
    __PVT__HazardSimplePlugin_src1Hazard = VVexRiscv__ConstPool__TABLE_hf9485da8_0
        [__Vtableidx29];
    vlSelf->lastStageRegFileWrite_payload_data = __PVT___zz_lastStageRegFileWrite_payload_data;
    if (vlSelf->__PVT___zz_5) {
        vlSelf->lastStageRegFileWrite_payload_address = 0U;
        vlSelf->lastStageRegFileWrite_valid = 1U;
        vlSelf->lastStageRegFileWrite_payload_data = 0U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? ((~ vlSelf->__PVT__decode_to_execute_SRC1) 
                   & __PVT__CsrPlugin_csrMapping_readDataSignal)
                : (__PVT__CsrPlugin_csrMapping_readDataSignal 
                   | vlSelf->__PVT__decode_to_execute_SRC1))
            : vlSelf->__PVT__decode_to_execute_SRC1);
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
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA 
        = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
            ? ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                ? (vlSelf->__PVT__decode_to_execute_SRC1 
                   & vlSelf->__PVT__decode_to_execute_SRC2)
                : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                    ? (vlSelf->__PVT__decode_to_execute_SRC1 
                       | vlSelf->__PVT__decode_to_execute_SRC2)
                    : (vlSelf->__PVT__decode_to_execute_SRC1 
                       ^ vlSelf->__PVT__decode_to_execute_SRC2)))
            : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                ? (IData)(vlSelf->__PVT__execute_SRC_LESS)
                : vlSelf->__PVT__execute_SrcPlugin_addSub));
    if (vlSelf->__PVT__when_CsrPlugin_l1587) {
        vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA 
            = __PVT__CsrPlugin_csrMapping_readDataSignal;
    }
    if (vlSelf->__PVT__when_ShiftPlugins_l169) {
        if ((0U != (0xfU & ((IData)(vlSelf->__PVT__execute_LightShifterPlugin_amplitude) 
                            >> 1U)))) {
            __PVT__execute_arbitration_haltItself = 1U;
        }
        vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA 
            = ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL))
                ? (__PVT__execute_LightShifterPlugin_shiftInput 
                   << 1U) : (IData)((0x1ffffffffULL 
                                     & ((0x7fffffff80000000ULL 
                                         & ((QData)((IData)(
                                                            ((3U 
                                                              == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                             & (__PVT__execute_LightShifterPlugin_shiftInput 
                                                                >> 0x1fU)))) 
                                            << 0x1fU)) 
                                        | ((QData)((IData)(__PVT__execute_LightShifterPlugin_shiftInput)) 
                                           >> 1U)))));
    }
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_output_valid 
        = ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1) 
           & (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    vlSelf->__PVT__when_CsrPlugin_l1390 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->__PVT__execute_arbitration_isStuck = ((IData)(__PVT__execute_arbitration_haltItself) 
                                                  | (IData)(vlSelf->__PVT__memory_arbitration_haltItself));
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
    vlSelf->__PVT__decode_arbitration_haltByOther = 0U;
    if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (((IData)(vlSelf->__PVT__when_CsrPlugin_l1456) 
         | (((IData)(vlSelf->__PVT__execute_to_memory_ENV_CTRL) 
             & (IData)(vlSelf->__PVT__memory_arbitration_isValid)) 
            | ((IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL) 
               & (IData)(vlSelf->__PVT__execute_arbitration_isValid))))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid) 
         & ((IData)(__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    __PVT__CsrPlugin_jumpInterface_payload = 0U;
    __PVT__IBusSimplePlugin_fetcherHalt = 0U;
    __PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        __PVT__CsrPlugin_jumpInterface_payload = (vlSelf->__PVT__CsrPlugin_xtvec_base 
                                                  << 2U);
        __PVT__IBusSimplePlugin_fetcherHalt = 1U;
        __PVT__CsrPlugin_jumpInterface_valid = 1U;
        __PVT__writeBack_arbitration_flushNext = 0U;
        __PVT__writeBack_arbitration_flushNext = 1U;
    } else {
        __PVT__writeBack_arbitration_flushNext = 0U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1456) {
        if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            __PVT__CsrPlugin_jumpInterface_payload 
                = vlSelf->__PVT__CsrPlugin_mepc;
        }
        __PVT__IBusSimplePlugin_fetcherHalt = 1U;
        __PVT__CsrPlugin_jumpInterface_valid = 1U;
        __PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = 
        ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
         & (IData)(vlSelf->__PVT__execute_CsrPlugin_writeInstruction));
    vlSelf->__PVT__decode_arbitration_isStuck = ((IData)(vlSelf->__PVT__decode_arbitration_haltByOther) 
                                                 | ((IData)(vlSelf->__PVT__execute_arbitration_isStuck) 
                                                    | (IData)(vlSelf->__PVT__memory_arbitration_haltItself)));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_valid 
        = ((~ (IData)(__PVT__IBusSimplePlugin_fetcherHalt)) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_booted));
    __PVT___zz_IBusSimplePlugin_jump_pcLoad_payload 
        = (((IData)(vlSelf->__PVT__BranchPlugin_jumpInterface_valid) 
            << 1U) | (IData)(__PVT__CsrPlugin_jumpInterface_valid));
    __PVT__IBusSimplePlugin_jump_pcLoad_valid = ((IData)(vlSelf->__PVT__BranchPlugin_jumpInterface_valid) 
                                                 | (IData)(__PVT__CsrPlugin_jumpInterface_valid));
    vlSelf->__PVT__memory_arbitration_removeIt = 0U;
    if (__PVT__writeBack_arbitration_flushNext) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
    }
    vlSelf->__PVT__decode_arbitration_isFlushed = ((IData)(vlSelf->__PVT__memory_arbitration_flushNext) 
                                                   | (IData)(__PVT__writeBack_arbitration_flushNext));
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = 
        ((IData)(vlSelf->__PVT__decode_arbitration_isStuck)
          ? vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst
          : vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst);
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready 
        = ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck)) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_output_valid));
    __PVT__IBusSimplePlugin_fetchPc_correction = 0U;
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc = (vlSelf->IBusSimplePlugin_fetchPc_pcReg 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc) 
                                                   << 2U));
    if (__PVT__IBusSimplePlugin_jump_pcLoad_valid) {
        __PVT__IBusSimplePlugin_fetchPc_correction = 1U;
        vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc 
            = ((1U & ((~ ((IData)(__PVT___zz_IBusSimplePlugin_jump_pcLoad_payload) 
                          - (IData)(1U))) & (IData)(__PVT___zz_IBusSimplePlugin_jump_pcLoad_payload)))
                ? __PVT__CsrPlugin_jumpInterface_payload
                : vlSelf->__PVT__execute_to_memory_BRANCH_CALC);
    }
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc = (0xfffffffcU 
                                                  & vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc);
    vlSelf->__PVT__execute_arbitration_removeIt = 0U;
    vlSelf->__PVT__decode_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__decode_arbitration_isFlushed) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
    }
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready 
        = ((IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready) 
           | ((0U != (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)) 
              | (IData)(vlSelf->__PVT__decode_arbitration_isFlushed)));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_output_ready 
        = (1U & ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1)
                  ? (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready)
                  : (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck))));
    vlSelf->__PVT__when_CsrPlugin_l1340 = (1U & ((~ (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_active)) 
                                                 | (IData)(vlSelf->__PVT__decode_arbitration_removeIt)));
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__oneStage_doFlush = 0U;
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready 
        = __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid)))) {
        if (__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready) {
            vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__oneStage_doFlush = 1U;
        }
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready = 1U;
    }
    vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_2 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready));
    __PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_output_ready) {
        __PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 1U;
        __PVT__IBusSimplePlugin_cmdFork_canEmit = (7U 
                                                   != (IData)(vlSelf->__PVT__IBusSimplePlugin_pending_value));
    } else {
        __PVT__IBusSimplePlugin_cmdFork_canEmit = 0U;
    }
    vlSelf->__PVT__when_Fetcher_l133 = ((IData)(__PVT__IBusSimplePlugin_fetchPc_correction) 
                                        | (IData)(__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt = 0U;
    if (((~ ((IData)(__PVT__IBusSimplePlugin_cmdFork_canEmit) 
             & (IData)(vlSymsp->TOP.iBus_cmd_ready))) 
         & (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_valid))) {
        vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt = 1U;
    }
    vlSelf->iBus_cmd_valid = ((IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_valid) 
                              & (IData)(__PVT__IBusSimplePlugin_cmdFork_canEmit));
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_ready 
        = ((~ (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt)) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_output_ready));
    vlSelf->__PVT__IBusSimplePlugin_pending_next = 
        (7U & (((IData)(vlSelf->__PVT__IBusSimplePlugin_pending_value) 
                + ((IData)(vlSelf->iBus_cmd_valid) 
                   & (IData)(vlSymsp->TOP.iBus_cmd_ready))) 
               - (IData)(vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_2)));
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_fire 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_valid) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_ready));
}
