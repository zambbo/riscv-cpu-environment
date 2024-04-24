# Copyright 2022 Flavien Solt, ETH Zurich.
# Licensed under the General Public License, Version 3.0, see LICENSE for details.
# SPDX-License-Identifier: GPL-3.0-only


PYTHON ?= python3
RESOURCEWRAPPER_TAG ?= vexriscv

TOP_MODULE = vexriscv_mem_top
TOP_SOC = vexriscv_tiny_soc
TOP_EXECUTABLE_NAME = V$(TOP_SOC)
CASCADE_PYTHON_COMMON=../../common/python_scripts/


TARGET_NAME = vanilla

#include ../../common/design.mk

# This target makes the design until the Yosys instrumentation. From there on, the Makefile can run in parallel for the various instrumentation targets.
before_instrumentation: generated/sv2v_out.v

generated/VexRiscv.v: | generated
	cd ../cascade_vexriscv && sbt "runMain vexriscv.demo.VexRiscvAhbLite3cascade" && cp VexRiscv.v ../cascade/$@ && cd ../cascade

generated/sv2v_out.v: generated/out/vanilla.sv
	sv2v -E=UnbasedUnsized $^ -w $@

generated/out/vanilla.sv: src/memreq_aligner.sv src/prim_fifo_sync.sv src/bmb_full_to_mem.sv src/ahb3lite_pkg.sv generated/VexRiscv.v src/vexriscv_mem_top.sv src/ahb3lite_apb_bridge.sv src/apb_to_mem.sv | generated/out
	morty $^ -o generated/interm.sv
	$(PYTHON) $(CASCADE_PYTHON_COMMON)/remove_displays.py generated/interm.sv $@
	touch $@.log

#
# Verilator simulation
#

# Phony targets

PREPARE_TARGETS_NOTRACE=prepare_$(TARGET_NAMES)_notrace
PREPARE_TARGETS = $(PREPARE_TARGETS_NOTRACE)

.PHONY: $(PREPARE_TARGETS)
$(PREPARE_TARGETS): prepare_$(TARGET_NAMES): build/run_$(TARGET_NAMES)_0.1/default-verilator/$(TOP_EXECUTABLE_NAME)

# Core files
CORE_FILES_NOTRACE=run_$(TARGET_NAMES)_notrace.core
$(CORE_FILES_NOTRACE): run_$(TARGET_NAMES).core: run_$(TARGET_NAMES).core.template
	$(PYTHON) $(CASCADE_PYTHON_COMMON)/gen_corefiles.py $< $@

# Actual targets

BUILD_TARGETS_NOTRACE=build/run_$(TARGET_NAMES)_notrace_0.1/default-verilator/$(TOP_EXECUTABLE_NAME)
BUILD_TARGETS = $(BUILD_TARGETS_NOTRACE)

$(BUILD_TARGETS_NOTRACE): build/run_$(TARGET_NAMES)_notrace_0.1/default-verilator/$(TOP_EXECUTABLE_NAME): generated/out/$(TARGET_NAMES).sv generated/out/$(TARGET_NAMES).sv.log run_$(TARGET_NAMES)_notrace.core
	rm -f fusesoc.conf
	fusesoc library add run_$*_notrace .
	fusesoc run --build run_$*_notrace
	cp $<.log $@.log

RUN_TARGETS_NOTRACE=run_$(TARGET_NAMES)_notrace

$(RUN_TARGETS): run_$(TARGET_NAMES): ./build/run_$(TARGET_NAMES)_0.1/default-verilator/$(TOP_EXECUTABLE_NAME)
	cd build/run_$(TARGET_NAMES)_0.1/default-verilator && ./$(TOP_EXECUTABLE_NAME)
