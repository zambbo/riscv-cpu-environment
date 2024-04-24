.section .text

.global _start
_start:
  # Enable the FPU
  li t0, 0x2000
  csrs mstatus, t0
  csrw	fcsr,x0

  li t0, 0xFFFFFFFF
  fcvt.s.wu	ft0,t0,rtz

  la t0, fdata
  fld ft1, 0(t0)

  // Here, ft0 = ft1 = 0xffffffff4f7fffff

  flt.s	t0,ft1,ft0

.section .data
fdata:
  .8byte 0xffffffff4f7fffff
