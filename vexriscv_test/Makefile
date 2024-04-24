VERILATOR=verilator
TEST_DIRECTORY=mytest
RISCV_CORE=VexRiscv
TOP_MODULE=vexriscv_tiny_soc
TOP_VERILOG_MODULE=toplevel_v2
HEX_FILE=./test_assembly/program.hex

.PHONY: run verilate clean iverilog

VERILATOR_ARGS=--Wno-WIDTH --Wno-CASEINCOMPLETE

iverilog: a.out
	./a.out

a.out: $(TOP_VERILOG_MODULE).v
	iverilog -s toplevel $^ $(TOP_MODULE).v

run: $(TEST_DIRECTORY)/V$(TOP_MODULE) 
	./$(TEST_DIRECTORY)/V$(TOP_MODULE) $(HEX_FILE)

$(TEST_DIRECTORY)/V$(TOP_MODULE): $(TEST_DIRECTORY) $(TEST_DIRECTORY)/V$(TOP_MODULE).mk
	make -C $(TEST_DIRECTORY) -f V$(TOP_MODULE).mk	

$(TEST_DIRECTORY): $(TOP_MODULE).v
	$(VERILATOR) $(VERILATOR_ARGS) --cc --top-module $(TOP_MODULE) --Mdir $(TEST_DIRECTORY) $(RISCV_CORE).v $(TOP_MODULE).v --exe toplevel.cc

verilate: $(TOP_MODULE).v
	$(VERILATOR) $(VERILATOR_ARGS) --cc --top-module $(TOP_MODULE) --Mdir $(TEST_DIRECTORY) $(RISCV_CORE).v $(TOP_MODULE).v

clean:
	rm -rf $(TEST_DIRECTORY) ./a.out


