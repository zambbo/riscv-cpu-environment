// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVexRiscv__Syms.h"
#include "VVexRiscv.h"
#include "VVexRiscv___024root.h"
#include "VVexRiscv_VexRiscv.h"

// FUNCTIONS
VVexRiscv__Syms::~VVexRiscv__Syms()
{
}

VVexRiscv__Syms::VVexRiscv__Syms(VerilatedContext* contextp, const char* namep, VVexRiscv* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__VexRiscv{this, Verilated::catName(namep, "VexRiscv")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.VexRiscv = &TOP__VexRiscv;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__VexRiscv.__Vconfigure(true);
    // Setup scopes
    __Vscope_VexRiscv.configure(this, name(), "VexRiscv", "VexRiscv", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_VexRiscv.varInsert(__Vfinal,"CsrPlugin_hadException", &(TOP__VexRiscv.CsrPlugin_hadException), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"CsrPlugin_inWfi", &(TOP__VexRiscv.CsrPlugin_inWfi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"CsrPlugin_interruptJump", &(TOP__VexRiscv.CsrPlugin_interruptJump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"CsrPlugin_interrupt_code", &(TOP__VexRiscv.CsrPlugin_interrupt_code), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"IBusSimplePlugin_fetchPc_pcReg", &(TOP__VexRiscv.IBusSimplePlugin_fetchPc_pcReg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"RegFilePlugin_regFile", &(TOP__VexRiscv.RegFilePlugin_regFile), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        __Vscope_VexRiscv.varInsert(__Vfinal,"lastStageInstruction", &(TOP__VexRiscv.lastStageInstruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"lastStageIsFiring", &(TOP__VexRiscv.lastStageIsFiring), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"lastStageIsValid", &(TOP__VexRiscv.lastStageIsValid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"lastStagePc", &(TOP__VexRiscv.lastStagePc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_payload_address", &(TOP__VexRiscv.lastStageRegFileWrite_payload_address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_payload_data", &(TOP__VexRiscv.lastStageRegFileWrite_payload_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_valid", &(TOP__VexRiscv.lastStageRegFileWrite_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
