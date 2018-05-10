; nasm -f macho64 ft_bzero.s -o ft_bzero.o & ld ft_bzero.o -lSystem -macosx_version_min 10.13 -o ft_bzero

section	.data
msg:
	.str db "Test", 0
	.len equ $ - msg.str
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

_ft_bzero:
	cmp rsi, 0					; check if len is 0
	je	_end					; if it is, return

	mov BYTE [rdi], 0			; set byte to 0
	inc rdi						; go to next char
	dec rsi
	jmp _ft_bzero

_end:
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	lea rdi, [rel msg.str]			; 1st arg, string pointer
	mov rsi, msg.len				; 2nd arg, bytes number
	call _ft_bzero

	; lea rdi, [rel fmt.s]
	; lea rsi, [rel msg.str]
	; call _printf					; printf all string

	lea rdi, [rel fmt.c]
	mov rsi, [rel msg.str + 3]
	call _printf					; printf last char

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
