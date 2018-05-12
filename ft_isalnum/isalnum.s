; nasm -f macho64 isalnum.s -o isalnum.o && ld isalnum.o -lSystem -macosx_version_min 10.13 -o isalnum

section	.data
test:
	.char db 'c', 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "alnum? %d", 10, 0

section .text
	global start
	global _main
	global _ft_isalnum
	extern _printf
	extern _ft_isalpha
	extern _ft_isdigit

start:
	call _main
	ret


; DESCRIPTION
;	Tests if character is digit or alpha
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isalnum:
	call _ft_isalpha
	cmp rax, 1
	je _alnum

	call _ft_isdigit
	cmp rax, 1
	je _alnum

	mov rax, 0
	ret

_alnum:
	mov rax, 1
	ret


_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	mov rdi, '('
	call _ft_isalnum

	lea rdi, [rel fmt.d]
	mov rsi, rax
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
