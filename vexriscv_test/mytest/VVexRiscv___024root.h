// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVexRiscv.h for the primary calling header

#ifndef VERILATED_VVEXRISCV___024ROOT_H_
#define VERILATED_VVEXRISCV___024ROOT_H_  // guard

#include "verilated.h"

class VVexRiscv__Syms;
class VVexRiscv_VexRiscv;


class VVexRiscv___024root final : public VerilatedModule {
  public:
    // CELLS
    VVexRiscv_VexRiscv* VexRiscv;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(iBus_cmd_valid,0,0);
    VL_IN8(iBus_cmd_ready,0,0);
    VL_IN8(iBus_rsp_valid,0,0);
    VL_IN8(iBus_rsp_payload_error,0,0);
    VL_IN8(timerInterrupt,0,0);
    VL_IN8(externalInterrupt,0,0);
    VL_IN8(softwareInterrupt,0,0);
    VL_OUT8(dBus_cmd_valid,0,0);
    VL_IN8(dBus_cmd_ready,0,0);
    VL_OUT8(dBus_cmd_payload_wr,0,0);
    VL_OUT8(dBus_cmd_payload_size,1,0);
    VL_IN8(dBus_rsp_ready,0,0);
    VL_IN8(dBus_rsp_error,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__reset;
    CData/*0:0*/ __VactContinue;
    VL_OUT(iBus_cmd_payload_pc,31,0);
    VL_IN(iBus_rsp_payload_inst,31,0);
    VL_OUT(dBus_cmd_payload_address,31,0);
    VL_OUT(dBus_cmd_payload_data,31,0);
    VL_IN(dBus_rsp_data,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VVexRiscv__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVexRiscv___024root(VVexRiscv__Syms* symsp, const char* v__name);
    ~VVexRiscv___024root();
    VL_UNCOPYABLE(VVexRiscv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
