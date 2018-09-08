;; kernel.asm
bits 32 
section .text

global start
extern umain

start:
	cli	;block interrupts
	mov esp, stack_space	;set stack pointer
	call umain
	hlt	;halt cpu

section .bss
resb 8192	;8KB for stack
stack_space: