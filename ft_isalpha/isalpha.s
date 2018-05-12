; nasm -f macho64 isalpha.s -o isalpha.o & ld isalpha.o -lSystem -macosx_version_min 10.13 -o isalpha

section	.data
test:
	.char db 'c', 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "alpha: %d", 10, 0

section .text
	global start
	global _main
	global _ft_isalpha
	extern _printf

start:
	call _main
	ret


; DESCRIPTION
;	Tests if character is alpha (either isupper or islower)
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isalpha:
	or rdi, 0x20			; make uppercase letters lowercase
	
	cmp rdi, 'a'			; if below 'a', not alpha
	jl _not_alpha
	cmp rdi, 'z'			; if above 'z', not alpha
	jg _not_alpha

	mov rax, 1
	ret

_not_alpha:
	mov rax, 0
	ret


_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	mov rdi, 'c'
	call _ft_isalpha

	lea rdi, [rel fmt.d]
	mov rsi, rax
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
