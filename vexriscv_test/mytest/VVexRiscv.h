// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VVEXRISCV_H_
#define VERILATED_VVEXRISCV_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VVexRiscv__Syms;
class VVexRiscv___024root;
class VVexRiscv_VexRiscv;


// This class is the main interface to the Verilated model
class VVexRiscv VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VVexRiscv__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&iBus_cmd_valid,0,0);
    VL_IN8(&iBus_cmd_ready,0,0);
    VL_IN8(&iBus_rsp_valid,0,0);
    VL_IN8(&iBus_rsp_payload_error,0,0);
    VL_IN8(&timerInterrupt,0,0);
    VL_IN8(&externalInterrupt,0,0);
    VL_IN8(&softwareInterrupt,0,0);
    VL_OUT8(&dBus_cmd_valid,0,0);
    VL_IN8(&dBus_cmd_ready,0,0);
    VL_OUT8(&dBus_cmd_payload_wr,0,0);
    VL_OUT8(&dBus_cmd_payload_size,1,0);
    VL_IN8(&dBus_rsp_ready,0,0);
    VL_IN8(&dBus_rsp_error,0,0);
    VL_OUT(&iBus_cmd_payload_pc,31,0);
    VL_IN(&iBus_rsp_payload_inst,31,0);
    VL_OUT(&dBus_cmd_payload_address,31,0);
    VL_OUT(&dBus_cmd_payload_data,31,0);
    VL_IN(&dBus_rsp_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VVexRiscv_VexRiscv* const VexRiscv;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VVexRiscv___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VVexRiscv(VerilatedContext* contextp, const char* name = "TOP");
    explicit VVexRiscv(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VVexRiscv();
  private:
    VL_UNCOPYABLE(VVexRiscv);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
