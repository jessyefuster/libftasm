; nasm -f macho64 strdup.s -o strdup.o && ld strdup.o ft_strlen.o ft_memcpy.o -lSystem -macosx_version_min 10.12 -o strdup

section	.data
test:
	.s db "caca", 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "%d", 10, 0

section .text
	global start
	global _main
	global _ft_strdup
	extern _ft_strlen
	extern _ft_memcpy
	extern _printf
	extern _malloc

start:
	call _main
	ret


; DESCRIPTION
;	Allocates memory for a copy of string s,
;	does the copy, and returns a pointer to it
; RETURN VALUE
;	Return pointer to string
_ft_strdup:
	push rbx			; store callee-saved

	mov rbx, rdi		; store string to work register
	push rbx			; store string

	call _ft_strlen		; get string len
	push rax			; store string len

	mov rdi, rax		; set len for malloc
	call _malloc

	cmp rax, 0			; if	malloc failed
	je _null			; return NULL

	mov rdi, rax		; dst (malloc return)
	pop rdx				; number of bytes to cupy
	pop rsi				; src
	call _ft_memcpy		; copy string

	pop rbx
	ret

_null:
	pop rbx
	mov rax, 0
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	lea rdi, [rel test.s]
	call _ft_strdup

	lea rdi, [rel fmt.s]
	mov rsi, rax
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
