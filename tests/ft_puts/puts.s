; nasm -f macho64 puts.s -o puts.o & ld puts.o -lSystem -macosx_version_min 10.13 -o puts
%define WRITE				4
%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1

section	.data
test:
	.str db "Test", 0
	.len equ $ - test.str
	.nl db 10
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "%d", 10, 0

section .text
	global start
	global _main
	global _ft_puts
	extern _printf

start:
	call _main
	ret

; DESCRIPTION
;	Write the string, and a terminating newline
;	on stdout
; RETURN VALUE
;	Nonnegative value on success
_ft_puts:
	push rdi					; store string to stack

	call _ft_strlen				; strlen in rax

	mov rdi, STDOUT
	pop rsi						; get string from stack
	mov rdx, rax
	call _write

	mov rdi, STDOUT
	lea rsi, [rel test.nl]
	mov rdx, 1
	call _write
	syscall

	ret

_ft_strlen:
	mov rax, test.len
	ret

_write:
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	lea rdi, [rel test.str]
	call _ft_puts

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
