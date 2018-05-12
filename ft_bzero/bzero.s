; nasm -f macho64 bzero.s -o bzero.o & ld bzero.o -lSystem -macosx_version_min 10.13 -o bzero

section	.data
test:
	.str db "Test", 0
	.len equ $ - test.str
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0

section .text
	global start
	global _main
	global _ft_bzero
	extern _printf

start:
	call _main
	ret


; DESCRIPTION
;	Writes n zeroed bytes to the string s.
;	If n is 0, does nothing
_ft_bzero:
	cmp rsi, 0					; check if len is 0
	je	_end					; if it is, return

	mov BYTE [rdi], 0			; set byte to 0
	inc rdi						;
	dec rsi						; go to next char
	jmp _ft_bzero				;

_end:
	ret


_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	lea rdi, [rel test.str]			; 1st arg, string pointer
	mov rsi, test.len				; 2nd arg, bytes number
	call _ft_bzero

	lea rdi, [rel fmt.c]
	mov rsi, [rel test.str + 3]
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
