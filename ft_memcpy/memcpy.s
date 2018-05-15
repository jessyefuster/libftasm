; nasm -f macho64 memcpy.s -o memcpy.o & ld memcpy.o -lSystem -macosx_version_min 10.13 -o memcpy

section	.data
test:
	.dst db 0,0,0,0, 0
	.src db "caca", 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "%d", 10, 0

section .text
	global start
	global _main
	global _ft_memcpy
	extern _printf

start:
	call _main
	ret


; DESCRIPTION
;	Write n bytes of value c to the string s
;	corresponding lower-case letter
; RETURN VALUE
;	Rteurn pointer to string
_ft_memcpy:
	push rdi

	mov rcx, rdx

	cld
	rep movsb

	pop rax
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	lea rdi, [rel test.dst]
	lea rsi, [rel test.src]
	mov rdx, 4
	call _ft_memcpy

	lea rdi, [rel fmt.s]
	lea rsi, [rel test.dst]
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
