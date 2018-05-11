; nasm -f macho64 isascii.s -o isascii.o && ld isascii.o -lSystem -macosx_version_min 10.13 -o isascii

section	.data
test:
	.char db 'c', 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "alscii? %d", 10, 0

section .text
	global start
	global _main
	global _ft_isascii
	extern _printf

start:
	call _main
	ret


; DESCRIPTION
;	Tests if character is ascii
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isascii:
	cmp rdi, 0				; if below 0, not alpha
	jl _not_ascii
	cmp rdi, 127			; if above 127, not alpha
	jg _not_ascii

	mov rax, 1
	ret

_not_ascii:
	mov rax, 0
	ret


_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	mov rdi, -1
	call _ft_isascii

	lea rdi, [rel fmt.d]
	mov rsi, rax
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
