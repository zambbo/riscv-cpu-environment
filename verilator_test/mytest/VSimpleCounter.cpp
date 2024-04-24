// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimpleCounter.h"
#include "VSimpleCounter__Syms.h"

//============================================================
// Constructors

VSimpleCounter::VSimpleCounter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSimpleCounter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , output_n{vlSymsp->TOP.output_n}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSimpleCounter::VSimpleCounter(const char* _vcname__)
    : VSimpleCounter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSimpleCounter::~VSimpleCounter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSimpleCounter___024root___eval_debug_assertions(VSimpleCounter___024root* vlSelf);
#endif  // VL_DEBUG
void VSimpleCounter___024root___eval_static(VSimpleCounter___024root* vlSelf);
void VSimpleCounter___024root___eval_initial(VSimpleCounter___024root* vlSelf);
void VSimpleCounter___024root___eval_settle(VSimpleCounter___024root* vlSelf);
void VSimpleCounter___024root___eval(VSimpleCounter___024root* vlSelf);

void VSimpleCounter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimpleCounter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimpleCounter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSimpleCounter___024root___eval_static(&(vlSymsp->TOP));
        VSimpleCounter___024root___eval_initial(&(vlSymsp->TOP));
        VSimpleCounter___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSimpleCounter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSimpleCounter::eventsPending() { return false; }

uint64_t VSimpleCounter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSimpleCounter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSimpleCounter___024root___eval_final(VSimpleCounter___024root* vlSelf);

VL_ATTR_COLD void VSimpleCounter::final() {
    VSimpleCounter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSimpleCounter::hierName() const { return vlSymsp->name(); }
const char* VSimpleCounter::modelName() const { return "VSimpleCounter"; }
unsigned VSimpleCounter::threads() const { return 1; }
