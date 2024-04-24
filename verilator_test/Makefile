VERILATOR=verilator
TEST_DIRECTORY=mytest
TOP_MODULE=SimpleCounter

.PHONY: run verilate clean

run: $(TEST_DIRECTORY)/V$(TOP_MODULE)
	./$(TEST_DIRECTORY)/V$(TOP_MODULE)

$(TEST_DIRECTORY)/V$(TOP_MODULE): $(TEST_DIRECTORY) $(TEST_DIRECTORY)/V$(TOP_MODULE).mk
	make -C $(TEST_DIRECTORY) -f V$(TOP_MODULE).mk	

$(TEST_DIRECTORY): counter.v
	$(VERILATOR) --cc --top-module $(TOP_MODULE) --Mdir $(TEST_DIRECTORY) counter.v --exe toplevel.cc

verilate: counter.v
	$(VERILATOR) --cc --top-module $(TOP_MODULE) --Mdir $(TEST_DIRECTORY) counter.v

clean:
	rm -rf $(TEST_DIRECTORY)
