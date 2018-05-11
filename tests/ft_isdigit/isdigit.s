; nasm -f macho64 isdigit.s -o isdigit.o & ld isdigit.o -lSystem -macosx_version_min 10.13 -o isdigit

section	.data
test:
	.char db 'c', 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "digit? %d", 10, 0

section .text
	global start
	global _main
	global _ft_isdigit
	extern _printf

start:
	call _main
	ret


; DESCRIPTION
;	Tests if character is digit (0123456789)
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isdigit:
	cmp rdi, '0'			; if below '0', not digit
	jl _not_digit
	cmp rdi, '9'			; if above '9', not digit
	jg _not_digit

	mov rax, 1
	ret

_not_digit:
	mov rax, 0
	ret


_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	mov rdi, '0'
	call _ft_isdigit

	lea rdi, [rel fmt.d]
	mov rsi, rax
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
