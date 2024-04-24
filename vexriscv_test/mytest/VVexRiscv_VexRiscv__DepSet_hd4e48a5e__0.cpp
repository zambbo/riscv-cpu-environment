// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv_VexRiscv.h"
#include "VVexRiscv__Syms.h"

VL_INLINE_OPT void VVexRiscv_VexRiscv___ico_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___ico_sequent__TOP__VexRiscv__0\n"); );
    // Init
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready;
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready = 0;
    CData/*0:0*/ __PVT__execute_arbitration_haltItself;
    __PVT__execute_arbitration_haltItself = 0;
    CData/*0:0*/ __PVT__writeBack_arbitration_flushNext;
    __PVT__writeBack_arbitration_flushNext = 0;
    CData/*0:0*/ __PVT__IBusSimplePlugin_fetcherHalt;
    __PVT__IBusSimplePlugin_fetcherHalt = 0;
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
    // Body
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rData_inst;
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid;
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
    if (vlSelf->__PVT__when_ShiftPlugins_l169) {
        if ((0U != (0xfU & ((IData)(vlSelf->__PVT__execute_LightShifterPlugin_amplitude) 
                            >> 1U)))) {
            __PVT__execute_arbitration_haltItself = 1U;
        }
    }
    __PVT__CsrPlugin_pipelineLiberator_done = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if (vlSelf->CsrPlugin_hadException) {
        __PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    if (((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
         & ((~ ((IData)(vlSymsp->TOP.dBus_rsp_ready) 
                | (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_STORE))) 
            & (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE)))) {
        vlSelf->__PVT__memory_arbitration_haltItself = 1U;
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
    vlSelf->__PVT__execute_arbitration_isStuck = ((IData)(__PVT__execute_arbitration_haltItself) 
                                                  | (IData)(vlSelf->__PVT__memory_arbitration_haltItself));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_output_valid 
        = ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1) 
           & (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    vlSelf->__PVT__when_CsrPlugin_l1390 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = 
        ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
         & (IData)(vlSelf->__PVT__execute_CsrPlugin_writeInstruction));
    vlSelf->__PVT__decode_arbitration_isStuck = ((IData)(vlSelf->__PVT__decode_arbitration_haltByOther) 
                                                 | ((IData)(vlSelf->__PVT__execute_arbitration_isStuck) 
                                                    | (IData)(vlSelf->__PVT__memory_arbitration_haltItself)));
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
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = 
        ((IData)(vlSelf->__PVT__decode_arbitration_isStuck)
          ? vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst
          : vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst);
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready 
        = ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck)) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_output_valid));
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
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_output_ready 
        = (1U & ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1)
                  ? (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready)
                  : (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck))));
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
    __PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_output_ready) {
        __PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 1U;
        __PVT__IBusSimplePlugin_cmdFork_canEmit = (7U 
                                                   != (IData)(vlSelf->__PVT__IBusSimplePlugin_pending_value));
    } else {
        __PVT__IBusSimplePlugin_cmdFork_canEmit = 0U;
    }
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

VL_INLINE_OPT void VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__RegFilePlugin_regFile__v0;
    __Vdlyvdim0__RegFilePlugin_regFile__v0 = 0;
    IData/*31:0*/ __Vdlyvval__RegFilePlugin_regFile__v0;
    __Vdlyvval__RegFilePlugin_regFile__v0 = 0;
    CData/*0:0*/ __Vdlyvset__RegFilePlugin_regFile__v0;
    __Vdlyvset__RegFilePlugin_regFile__v0 = 0;
    // Body
    __Vdlyvset__RegFilePlugin_regFile__v0 = 0U;
    vlSelf->__Vdly__CsrPlugin_interrupt_targetPrivilege 
        = vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSelf->__PVT___zz_1) {
        __Vdlyvval__RegFilePlugin_regFile__v0 = vlSelf->lastStageRegFileWrite_payload_data;
        __Vdlyvset__RegFilePlugin_regFile__v0 = 1U;
        __Vdlyvdim0__RegFilePlugin_regFile__v0 = vlSelf->lastStageRegFileWrite_payload_address;
    }
    if (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready) {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rData_inst 
            = vlSymsp->TOP.iBus_rsp_payload_inst;
    }
    vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA 
        = vlSymsp->TOP.dBus_rsp_data;
    vlSelf->__PVT__CsrPlugin_mip_MTIP = vlSymsp->TOP.timerInterrupt;
    vlSelf->__PVT__CsrPlugin_mip_MEIP = vlSymsp->TOP.externalInterrupt;
    vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW 
        = vlSelf->__PVT__execute_to_memory_MEMORY_ADDRESS_LOW;
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA 
        = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
            vlSelf->__PVT__CsrPlugin_mepc = vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc;
            vlSelf->__PVT__CsrPlugin_mcause_interrupt 
                = (1U & (~ (IData)(vlSelf->CsrPlugin_hadException)));
            vlSelf->__PVT__CsrPlugin_mcause_exceptionCode 
                = vlSelf->CsrPlugin_interrupt_code;
        }
    }
    if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302) {
            vlSelf->__Vdly__CsrPlugin_interrupt_targetPrivilege = 3U;
            vlSelf->CsrPlugin_interrupt_code = 7U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_1) {
            vlSelf->__Vdly__CsrPlugin_interrupt_targetPrivilege = 3U;
            vlSelf->CsrPlugin_interrupt_code = 3U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_2) {
            vlSelf->__Vdly__CsrPlugin_interrupt_targetPrivilege = 3U;
            vlSelf->CsrPlugin_interrupt_code = 0xbU;
        }
    }
    if (vlSelf->__PVT__when_ShiftPlugins_l169) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
            vlSelf->__PVT__execute_LightShifterPlugin_amplitudeReg 
                = (0x1fU & ((IData)(vlSelf->__PVT__execute_LightShifterPlugin_amplitude) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__memory_to_writeBack_PC = vlSelf->__PVT__execute_to_memory_PC;
    vlSelf->__PVT__CsrPlugin_mip_MSIP = vlSymsp->TOP.softwareInterrupt;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_BRANCH_DO 
            = ((0U != (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
               & ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
                  | ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
                     | (IData)(vlSelf->__PVT___zz_execute_BRANCH_DO))));
        vlSelf->__PVT__execute_to_memory_MEMORY_STORE 
            = vlSelf->__PVT__decode_to_execute_MEMORY_STORE;
        vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID;
        vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE 
            = vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE;
        vlSelf->__PVT__memory_to_writeBack_ENV_CTRL 
            = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
        vlSelf->__PVT__execute_to_memory_BRANCH_CALC 
            = (0xfffffffeU & (((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSelf->__PVT__decode_to_execute_RS1
                                : vlSelf->__PVT__decode_to_execute_PC) 
                              + ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0x1fU))) 
                                      << 0x15U) | (
                                                   (0x100000U 
                                                    & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlSelf->__PVT__decode_to_execute_INSTRUCTION) 
                                                      | ((0x800U 
                                                          & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                               >> 0x14U))))))
                                  : ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? (((- (IData)(
                                                     (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0x14U))
                                      : (((- (IData)(
                                                     (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0x1fU))) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                        >> 7U))))))))));
        vlSelf->__PVT__execute_to_memory_MEMORY_ADDRESS_LOW 
            = (3U & vlSelf->__PVT__execute_SrcPlugin_addSub);
        vlSelf->__PVT__execute_to_memory_PC = vlSelf->__PVT__decode_to_execute_PC;
    } else {
        vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID;
        vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE 
            = vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE;
        vlSelf->__PVT__memory_to_writeBack_ENV_CTRL 
            = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mip_MSIP = (1U 
                                                 & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 3U));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID;
        vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE 
            = vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE;
        vlSelf->__PVT__execute_to_memory_ENV_CTRL = vlSelf->__PVT__decode_to_execute_ENV_CTRL;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL 
            = vlSelf->__PVT__decode_ALU_BITWISE_CTRL;
        vlSelf->__PVT__decode_to_execute_ALU_CTRL = vlSelf->__PVT__decode_ALU_CTRL;
        vlSelf->__PVT__decode_to_execute_RS2 = vlSelf->__PVT___zz_RegFilePlugin_regFile_port1;
        vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS 
            = vlSelf->__PVT__decode_SRC_USE_SUB_LESS;
        vlSelf->__PVT__decode_to_execute_SHIFT_CTRL 
            = vlSelf->__PVT__decode_SHIFT_CTRL;
        vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE 
            = (1U & (~ (IData)(((0U == (0xf8000U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                & ((1U == (3U & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                 >> 0xdU))) 
                                   | (3U == (3U & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                   >> 0xdU))))))));
        vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
            = ((0x2000U == (0x2010U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
               | (0x1000U == (0x5000U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
        vlSelf->__PVT__execute_CsrPlugin_csr_834 = 
            (0x342U == (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                        >> 0x14U));
        vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO 
            = ((~ (IData)(vlSelf->__PVT__decode_SRC_USE_SUB_LESS)) 
               & ((0x24U == (0x64U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                  | (0x1010U == (0x3054U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
        vlSelf->__PVT__decode_to_execute_SRC1 = ((0U 
                                                  == (IData)(vlSelf->__PVT__decode_SRC1_CTRL))
                                                  ? vlSelf->__PVT___zz_RegFilePlugin_regFile_port0
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->__PVT__decode_SRC1_CTRL))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->__PVT__decode_SRC1_CTRL))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)
                                                    : 
                                                   (0x1fU 
                                                    & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                       >> 0xfU)))));
        vlSelf->__PVT__decode_to_execute_IS_CSR = (
                                                   (0x1050U 
                                                    == 
                                                    (0x1050U 
                                                     & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                   | (0x2050U 
                                                      == 
                                                      (0x2050U 
                                                       & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
        vlSelf->__PVT__decode_to_execute_SRC2 = ((0U 
                                                  == (IData)(vlSelf->__PVT__decode_SRC2_CTRL))
                                                  ? vlSelf->__PVT___zz_RegFilePlugin_regFile_port1
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->__PVT__decode_SRC2_CTRL))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                      >> 0x14U))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__decode_SRC2_CTRL))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                             >> 7U))))
                                                    : vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc)));
        vlSelf->__PVT__execute_CsrPlugin_csr_836 = 
            (0x344U == (vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                        >> 0x14U));
        vlSelf->__PVT__decode_to_execute_MEMORY_STORE 
            = (0x20U == (0x20U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst));
        vlSelf->__PVT__decode_to_execute_BRANCH_CTRL 
            = vlSelf->__PVT__decode_BRANCH_CTRL;
        vlSelf->__PVT__decode_to_execute_RS1 = vlSelf->__PVT___zz_RegFilePlugin_regFile_port0;
        vlSelf->__PVT__decode_to_execute_PC = vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc;
        vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__decode_REGFILE_WRITE_VALID;
        vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE 
            = (0U == (0x58U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst));
        vlSelf->__PVT__decode_to_execute_ENV_CTRL = 
            (0x50U == (0x3050U & vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst));
    }
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address 
        = (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
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
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
            = vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA;
    }
    vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port1 
        = vlSelf->RegFilePlugin_regFile[(0x1fU & (vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED 
                                                  >> 0x14U))];
    vlSelf->__PVT__execute_BranchPlugin_eq = (vlSelf->__PVT__decode_to_execute_SRC1 
                                              == vlSelf->__PVT__decode_to_execute_SRC2);
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
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port0 
        = vlSelf->RegFilePlugin_regFile[(0x1fU & (vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED 
                                                  >> 0xfU))];
    if (__Vdlyvset__RegFilePlugin_regFile__v0) {
        vlSelf->RegFilePlugin_regFile[__Vdlyvdim0__RegFilePlugin_regFile__v0] 
            = __Vdlyvval__RegFilePlugin_regFile__v0;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck)))) {
        vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc 
            = vlSelf->IBusSimplePlugin_fetchPc_pcReg;
    }
}

VL_INLINE_OPT void VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__1(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__1\n"); );
    // Init
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid;
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid = 0;
    CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_done;
    __PVT__CsrPlugin_pipelineLiberator_done = 0;
    CData/*2:0*/ __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
    __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter = 0;
    CData/*0:0*/ __Vdly__CsrPlugin_mstatus_MPIE;
    __Vdly__CsrPlugin_mstatus_MPIE = 0;
    // Body
    __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
    __Vdly__CsrPlugin_mstatus_MPIE = vlSelf->__PVT__CsrPlugin_mstatus_MPIE;
    if (vlSymsp->TOP.reset) {
        __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter = 0U;
        __Vdly__CsrPlugin_mstatus_MPIE = 0U;
        vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid = 0U;
        vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1 = 0U;
        vlSelf->__PVT__execute_LightShifterPlugin_isActive = 0U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MEIE = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MTIE = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MSIE = 0U;
        vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
        vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        vlSelf->__PVT__writeBack_arbitration_isValid = 0U;
        vlSelf->IBusSimplePlugin_fetchPc_pcReg = 0x80000000U;
        vlSelf->__PVT__IBusSimplePlugin_pending_value = 0U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        vlSelf->__PVT__CsrPlugin_mstatus_MIE = 0U;
        vlSelf->__PVT__memory_arbitration_isValid = 0U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        vlSelf->__PVT__execute_arbitration_isValid = 0U;
        vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid = 0U;
        vlSelf->__PVT___zz_5 = 1U;
    } else {
        __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
            = (7U & ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter) 
                     - (IData)(vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
        if (vlSelf->__PVT__decode_arbitration_isFlushed) {
            __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
                = (7U & ((IData)(vlSelf->__PVT__IBusSimplePlugin_pending_value) 
                         - (IData)(vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_2)));
            vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1 = 0U;
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1390) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
                __Vdly__CsrPlugin_mstatus_MPIE = vlSelf->__PVT__CsrPlugin_mstatus_MIE;
                vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1456) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                __Vdly__CsrPlugin_mstatus_MPIE = 1U;
                vlSelf->__PVT__CsrPlugin_mstatus_MPP = 0U;
            }
        }
        if (vlSelf->__PVT__when_Fetcher_l133) {
            vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
        }
        if (vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_fire) {
            vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = 1U;
        }
        if (((~ (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_valid)) 
             & (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_ready))) {
            vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
        }
        if (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready) {
            vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid 
                = vlSymsp->TOP.iBus_rsp_valid;
        }
        if (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__oneStage_doFlush) {
            vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid = 0U;
        }
        if (vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_output_ready) {
            vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1 
                = ((~ (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt)) 
                   & (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_valid));
        }
        if (vlSelf->__PVT__when_ShiftPlugins_l169) {
            if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
                vlSelf->__PVT__execute_LightShifterPlugin_isActive = 1U;
                if ((0U == (0xfU & ((IData)(vlSelf->__PVT__execute_LightShifterPlugin_amplitude) 
                                    >> 1U)))) {
                    vlSelf->__PVT__execute_LightShifterPlugin_isActive = 0U;
                }
            }
        }
        if (vlSelf->__PVT__execute_arbitration_removeIt) {
            vlSelf->__PVT__execute_LightShifterPlugin_isActive = 0U;
        }
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 
                = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1;
            if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 
                    = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 1U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1340) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT__CsrPlugin_mie_MEIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 0xbU));
                vlSelf->__PVT__CsrPlugin_mie_MTIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 7U));
                vlSelf->__PVT__CsrPlugin_mie_MSIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 3U));
            }
        }
        vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_1) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_2) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1390) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MIE = 0U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1456) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MIE 
                    = vlSelf->__PVT__CsrPlugin_mstatus_MPIE;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                __Vdly__CsrPlugin_mstatus_MPIE = (1U 
                                                  & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                                     >> 7U));
                if ((3U == (3U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                  >> 0xbU)))) {
                    vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
                }
                vlSelf->__PVT__CsrPlugin_mstatus_MIE 
                    = (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 3U));
            }
        }
        if (vlSelf->CsrPlugin_interruptJump) {
            vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        }
        vlSelf->__PVT__writeBack_arbitration_isValid = 0U;
        if ((1U & ((~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)) 
                   & (~ (IData)(vlSelf->__PVT__memory_arbitration_removeIt))))) {
            vlSelf->__PVT__writeBack_arbitration_isValid 
                = vlSelf->__PVT__memory_arbitration_isValid;
        }
        if (((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_booted) 
             & ((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_ready) 
                | (IData)(vlSelf->__PVT__when_Fetcher_l133)))) {
            vlSelf->IBusSimplePlugin_fetchPc_pcReg 
                = vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc;
        }
        vlSelf->__PVT__IBusSimplePlugin_pending_value 
            = vlSelf->__PVT__IBusSimplePlugin_pending_next;
        if ((1U & ((~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)) 
                   | (IData)(vlSelf->__PVT__memory_arbitration_removeIt)))) {
            vlSelf->__PVT__memory_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                   & (~ (IData)(vlSelf->__PVT__execute_arbitration_removeIt))))) {
            vlSelf->__PVT__memory_arbitration_isValid 
                = vlSelf->__PVT__execute_arbitration_isValid;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                   | (IData)(vlSelf->__PVT__execute_arbitration_removeIt)))) {
            vlSelf->__PVT__execute_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck)) 
                   & (~ (IData)(vlSelf->__PVT__decode_arbitration_removeIt))))) {
            vlSelf->__PVT__execute_arbitration_isValid 
                = vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid;
        }
        if (vlSelf->__PVT__decode_arbitration_removeIt) {
            vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck)))) {
            vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid 
                = ((IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_output_valid) 
                   & (~ (IData)(vlSelf->__PVT__decode_arbitration_isFlushed)));
        }
        vlSelf->__PVT___zz_5 = 0U;
    }
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid));
    vlSelf->CsrPlugin_hadException = 0U;
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
        = __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid)))) {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
            = vlSymsp->TOP.iBus_rsp_valid;
    }
    vlSelf->lastStageIsValid = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->lastStageIsFiring = vlSelf->__PVT__writeBack_arbitration_isValid;
    __PVT__CsrPlugin_pipelineLiberator_done = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if (vlSelf->CsrPlugin_hadException) {
        __PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_booted 
        = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U != (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U == (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    vlSelf->__PVT__CsrPlugin_mstatus_MPIE = __Vdly__CsrPlugin_mstatus_MPIE;
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(__PVT__CsrPlugin_pipelineLiberator_done));
    vlSelf->__PVT__when_CsrPlugin_l1390 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_output_valid 
        = ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1) 
           & (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid));
}

extern const VlUnpacked<CData/*0:0*/, 512> VVexRiscv__ConstPool__TABLE_hf9485da8_0;

VL_INLINE_OPT void VVexRiscv_VexRiscv___nba_comb__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___nba_comb__TOP__VexRiscv__0\n"); );
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
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready;
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready = 0;
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
    // Body
    if (vlSelf->__PVT__execute_LightShifterPlugin_isActive) {
        vlSelf->__PVT__execute_LightShifterPlugin_amplitude 
            = (0x1fU & (IData)(vlSelf->__PVT__execute_LightShifterPlugin_amplitudeReg));
        __PVT__execute_LightShifterPlugin_shiftInput 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    } else {
        vlSelf->__PVT__execute_LightShifterPlugin_amplitude 
            = (0x1fU & vlSelf->__PVT__decode_to_execute_SRC2);
        __PVT__execute_LightShifterPlugin_shiftInput 
            = vlSelf->__PVT__decode_to_execute_SRC1;
    }
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_2 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                                               & (IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_1 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP));
    vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid 
        = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    vlSelf->__PVT__when_CsrPlugin_l1456 = ((IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL) 
                                           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    vlSelf->__PVT__BranchPlugin_jumpInterface_valid 
        = ((IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO) 
           & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    __PVT__when_HazardSimplePlugin_l57_1 = ((IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID) 
                                            & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE));
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
    __PVT__when_HazardSimplePlugin_l57_2 = ((IData)(vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID) 
                                            & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
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
    vlSelf->lastStageRegFileWrite_payload_address = 
        (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                  >> 7U));
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
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    if (((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
         & ((~ ((IData)(vlSymsp->TOP.dBus_rsp_ready) 
                | (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_STORE))) 
            & (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE)))) {
        vlSelf->__PVT__memory_arbitration_haltItself = 1U;
    }
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rData_inst;
    vlSelf->lastStageRegFileWrite_valid = vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid;
    __PVT__IBusSimplePlugin_fetcherHalt = 0U;
    __PVT__CsrPlugin_jumpInterface_valid = 0U;
    __PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        __PVT__IBusSimplePlugin_fetcherHalt = 1U;
        __PVT__CsrPlugin_jumpInterface_valid = 1U;
        __PVT__writeBack_arbitration_flushNext = 1U;
        __PVT__CsrPlugin_jumpInterface_payload = 0U;
        __PVT__CsrPlugin_jumpInterface_payload = (vlSelf->__PVT__CsrPlugin_xtvec_base 
                                                  << 2U);
    } else {
        __PVT__CsrPlugin_jumpInterface_payload = 0U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1456) {
        __PVT__IBusSimplePlugin_fetcherHalt = 1U;
        __PVT__CsrPlugin_jumpInterface_valid = 1U;
        __PVT__writeBack_arbitration_flushNext = 1U;
        if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            __PVT__CsrPlugin_jumpInterface_payload 
                = vlSelf->__PVT__CsrPlugin_mepc;
        }
    }
    vlSelf->__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__BranchPlugin_jumpInterface_valid) {
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
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
    __PVT__CsrPlugin_csrMapping_readDataSignal = (__PVT___zz_CsrPlugin_csrMapping_readDataInit 
                                                  | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
                                                     | (__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
                                                        | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3)));
    vlSelf->lastStageRegFileWrite_payload_data = __PVT___zz_lastStageRegFileWrite_payload_data;
    if (vlSelf->__PVT___zz_5) {
        vlSelf->lastStageRegFileWrite_payload_address = 0U;
        vlSelf->lastStageRegFileWrite_valid = 1U;
        vlSelf->lastStageRegFileWrite_payload_data = 0U;
    }
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
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
    if (vlSelf->__PVT__when_ShiftPlugins_l169) {
        if ((0U != (0xfU & ((IData)(vlSelf->__PVT__execute_LightShifterPlugin_amplitude) 
                            >> 1U)))) {
            __PVT__execute_arbitration_haltItself = 1U;
        }
    }
    vlSelf->__PVT__execute_arbitration_isStuck = ((IData)(__PVT__execute_arbitration_haltItself) 
                                                  | (IData)(vlSelf->__PVT__memory_arbitration_haltItself));
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
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? ((~ vlSelf->__PVT__decode_to_execute_SRC1) 
                   & __PVT__CsrPlugin_csrMapping_readDataSignal)
                : (__PVT__CsrPlugin_csrMapping_readDataSignal 
                   | vlSelf->__PVT__decode_to_execute_SRC1))
            : vlSelf->__PVT__decode_to_execute_SRC1);
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
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = 
        ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
         & (IData)(vlSelf->__PVT__execute_CsrPlugin_writeInstruction));
    vlSelf->__PVT__decode_arbitration_isStuck = ((IData)(vlSelf->__PVT__decode_arbitration_haltByOther) 
                                                 | ((IData)(vlSelf->__PVT__execute_arbitration_isStuck) 
                                                    | (IData)(vlSelf->__PVT__memory_arbitration_haltItself)));
    vlSelf->__PVT__when_CsrPlugin_l1340 = (1U & ((~ (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_active)) 
                                                 | (IData)(vlSelf->__PVT__decode_arbitration_removeIt)));
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid)))) {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
            = vlSymsp->TOP.iBus_rsp_payload_inst;
    }
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = 
        ((IData)(vlSelf->__PVT__decode_arbitration_isStuck)
          ? vlSelf->__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst
          : vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst);
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready 
        = ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck)) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_output_valid));
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready 
        = ((IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready) 
           | ((0U != (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)) 
              | (IData)(vlSelf->__PVT__decode_arbitration_isFlushed)));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_output_ready 
        = (1U & ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1)
                  ? (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready)
                  : (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuck))));
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
