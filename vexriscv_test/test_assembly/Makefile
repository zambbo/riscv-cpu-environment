RISCV_PREFIX=riscv64-unknown-elf-
CC=$(RISCV_PREFIX)gcc
CCFLAGS=-march=rv32id_zicsr -mabi=ilp32 -nostdlib -nostartfiles -static
FILENAME=buggy #program

$(FILENAME).hex: $(FILENAME).bin
	python3 bin2hex.py $^ $@

$(FILENAME).bin: $(FILENAME).elf
	$(RISCV_PREFIX)objcopy -O binary $^ $@

$(FILENAME).elf: $(FILENAME).S
	$(CC) -o $@ $(CCFLAGS) -Tlinker.ld $^

.PHONY: clean

clean:
	rm $(FILENAME).elf $(FILENAME).bin
