; nasm -f macho64 memset.s -o memset.o & ld memset.o -lSystem -macosx_version_min 10.13 -o memset

section	.data
test:
	.s db "Erase me", 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0
	.d db "%d", 10, 0

section .text
	global start
	global _main
	global _ft_memset
	extern _printf

start:
	call _main
	ret


; DESCRIPTION
;	Write n bytes of value c to the string s
;	corresponding lower-case letter
; RETURN VALUE
;	Rteurn pointer to string
_ft_memset:
	push rdi			; store string

	mov rax, rsi		; char to fill
	mov rcx, rdx		; n bytes to iter

	cld
	rep stosb			; memset

	pop rax

_end:
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	lea rdi, [rel test.s]
	mov rsi, 'x'
	mov rdx, 8
	call _ft_memset

	lea rdi, [rel fmt.s]
	lea rsi, [rel test.s]
	mov rax, 0
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
