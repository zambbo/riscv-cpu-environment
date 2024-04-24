OUTPUT_ARCH("riscv")
ENTRY("_start")

SECTIONS
{
	SRAM_BASE = 0x80000000;
	. = SRAM_BASE;
	.text : { *(.text) }
	. = SRAM_BASE + 0x10000;
	.data : { *(.data) }
	. = SRAM_BASE + 0x20000;
	.bss : { *(.data) }
}
