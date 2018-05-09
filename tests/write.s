; nasm -f macho64 write.s -o write.o & ld write.o -lSystem -macosx_version_min 10.13 -o write
%define MACH_SYSCALL(nb)	0x2000000 | nb
%define	WRITE				4

section .data
msg:
	.str db "Test", 10
	.len equ $ - msg.str


section .text
	global start
	global _main

start:
	call _main
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	mov rdx, msg.len				; 3rd argument
	mov rsi, msg.str				; 2nd argument
	mov rdi, 1						; 1st argument
	mov rax, MACH_SYSCALL(WRITE)	; set WRITE syscall
	syscall

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret