RISCV_PREFIX=riscv64-unknown-elf-
CC=$(RISCV_PREFIX)gcc
CCFLAGS=-march=rv64g -mabi=lp64 -march=rv64g -nostdlib -nostartfiles -static

run: test.elf
	spike -d  --debug-cmd=dbgcmd.cmd --pc=0x80000000 --isa=rv64g $^

test.elf: test.S
	$(CC) -o $@ $(CCFLAGS) -Tlinker.ld $^

.PHONY: clean

clean:
	rm test.elf
