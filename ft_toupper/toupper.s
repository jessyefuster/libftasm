; nasm -f macho64 toupper.s -o toupper.o & ld toupper.o -lSystem -macosx_version_min 10.13 -o toupper

section	.data
test:
	.char db 'c', 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "%d", 10, 0

section .text
	global start
	global _main
	global _ft_toupper
	extern _printf

start:
	call _main
	ret


; DESCRIPTION
;	Converts an lower-case letter to the
;	corresponding upper-case letter
; RETURN VALUE
;	Uppercase letter if char is lower, else char
_ft_toupper:
	mov rax, rdi

	cmp rdi, 'a'			;
	jl _end					; if char is not lower,
	cmp rdi, 'z'			; do nothing
	jg _end					;

	sub rax, 32
	ret

_end:
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	mov rdi, '1'
	call _ft_toupper

	lea rdi, [rel fmt.c]
	mov rsi, rax
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
