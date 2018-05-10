; nasm -f macho64 ft_bzero.s -o ft_bzero.o & ld ft_bzero.o -lSystem -macosx_version_min 10.13 -o ft_bzero

section	.data
msg:
	.fmt db "%s", 0
	.str db "Test", 0
	.len equ $ - msg.str

section .text
	global start
	global _main
	global _ft_bzero
	extern _printf

start:
	call _main
	ret

_ft_bzero:
	cmp rsi, 0
	je	_end

	mov BYTE [rdi], 0
	inc rdi
	dec rsi
	jmp _ft_bzero
	ret

_end:
	ret

_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer

	lea rdi, [rel msg.str]
	mov rsi, msg.len
	call _ft_bzero

	lea rdi, [rel msg.fmt]
	lea rsi, [rel msg.str]
	call _printf
	; lea rsi, [rel msg.str + 1]
	; call _printf
	; lea rsi, [rel msg.str + 2]
	; call _printf
	; lea rsi, [rel msg.str + 3]
	; call _printf

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
