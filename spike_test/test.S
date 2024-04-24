.section .text

.global _start
_start:
	la t0, DEADBEEF # load address of DEADBEEF
	lw t1, 0(t0) # load word from address in t0 into register t1

	li s2, 0xcafebabe # load immediate value 0xcafebabe into s2
	la s3, CAFEBABE # load the address of the cafebabe
	sw s2, 0(s3) # store the value in s2 into the address pointed by s3

.section .data

DEADBEEF: .word 0xdeadbeef

.section .bss

CAFEBABE: .space 4
