// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVexRiscv.h"
#include "VVexRiscv__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VVexRiscv::VVexRiscv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VVexRiscv__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , iBus_cmd_valid{vlSymsp->TOP.iBus_cmd_valid}
    , iBus_cmd_ready{vlSymsp->TOP.iBus_cmd_ready}
    , iBus_rsp_valid{vlSymsp->TOP.iBus_rsp_valid}
    , iBus_rsp_payload_error{vlSymsp->TOP.iBus_rsp_payload_error}
    , timerInterrupt{vlSymsp->TOP.timerInterrupt}
    , externalInterrupt{vlSymsp->TOP.externalInterrupt}
    , softwareInterrupt{vlSymsp->TOP.softwareInterrupt}
    , dBus_cmd_valid{vlSymsp->TOP.dBus_cmd_valid}
    , dBus_cmd_ready{vlSymsp->TOP.dBus_cmd_ready}
    , dBus_cmd_payload_wr{vlSymsp->TOP.dBus_cmd_payload_wr}
    , dBus_cmd_payload_size{vlSymsp->TOP.dBus_cmd_payload_size}
    , dBus_rsp_ready{vlSymsp->TOP.dBus_rsp_ready}
    , dBus_rsp_error{vlSymsp->TOP.dBus_rsp_error}
    , iBus_cmd_payload_pc{vlSymsp->TOP.iBus_cmd_payload_pc}
    , iBus_rsp_payload_inst{vlSymsp->TOP.iBus_rsp_payload_inst}
    , dBus_cmd_payload_address{vlSymsp->TOP.dBus_cmd_payload_address}
    , dBus_cmd_payload_data{vlSymsp->TOP.dBus_cmd_payload_data}
    , dBus_rsp_data{vlSymsp->TOP.dBus_rsp_data}
    , VexRiscv{vlSymsp->TOP.VexRiscv}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VVexRiscv::VVexRiscv(const char* _vcname__)
    : VVexRiscv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VVexRiscv::~VVexRiscv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VVexRiscv___024root___eval_debug_assertions(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
void VVexRiscv___024root___eval_static(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval_initial(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval_settle(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval(VVexRiscv___024root* vlSelf);

void VVexRiscv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVexRiscv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVexRiscv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VVexRiscv___024root___eval_static(&(vlSymsp->TOP));
        VVexRiscv___024root___eval_initial(&(vlSymsp->TOP));
        VVexRiscv___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VVexRiscv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VVexRiscv::eventsPending() { return false; }

uint64_t VVexRiscv::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VVexRiscv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VVexRiscv___024root___eval_final(VVexRiscv___024root* vlSelf);

VL_ATTR_COLD void VVexRiscv::final() {
    VVexRiscv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VVexRiscv::hierName() const { return vlSymsp->name(); }
const char* VVexRiscv::modelName() const { return "VVexRiscv"; }
unsigned VVexRiscv::threads() const { return 1; }
