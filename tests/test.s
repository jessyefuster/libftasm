%define MACH_SYSCALL(nb)	0x2000000 | nb
%define	WRITE				4

section .data
msg: db "Test", 10


section .text
	global start
	global _main
	extern _printf

start:
	call _main
	ret

_main:
	push ebp
	mov ebp, esp
	sub esp, 16

	mov edi, 1
	lea esi, [msg]
	mov edx, 5
	mov eax, MACH_SYSCALL(WRITE)
	syscall

	; pop ebp
	leave
	ret