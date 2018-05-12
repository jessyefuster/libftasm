; nasm -f macho64 tolower.s -o tolower.o & ld tolower.o -lSystem -macosx_version_min 10.13 -o tolower

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
	global _ft_tolower
	extern _printf

start:
	call _main
	ret


; DESCRIPTION
;	Converts an upper-case letter to the
;	corresponding lower-case letter
; RETURN VALUE
;	Lowercase letter if char is upper, else char
_ft_tolower:
	mov rax, rdi

	cmp rdi, 'A'			;
	jl _end					; if char is not upper,
	cmp rdi, 'Z'			; do nothing
	jg _end					;

	add rax, 32
	ret

_end:
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	mov rdi, 'a'
	call _ft_tolower

	lea rdi, [rel fmt.c]
	mov rsi, rax
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
