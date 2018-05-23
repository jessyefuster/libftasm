; nasm -f macho64 cat.s -o cat.o & ld cat.o -lSystem -macosx_version_min 10.12 -o cat

%define MACH_SYSCALL(nb)	0x2000000 | nb
%define READ				3
; ssize_t	read(int fildes, void *buf, size_t nbyte)
%define WRITE				4
; ssize_t		write(int fildes, const void *buf, size_t nbyte)
%define OPEN				5
%define STDOUT				1
%assign BUFF_SIZE			4096

section .data
	file: db "main.c", 0
	fmt: db "fd: %d", 10, 0
	fmt2: db "read: %d", 10, 0

section	.bss
	buffer:	resb BUFF_SIZE + 1

section .text
	global start
	global _main
	global _ft_cat
	extern _printf

start:
	call _main
	ret

_ft_cat:
	cmp rdi, 0			
	jl _error						; if FD is negative, error

	push rbp						; store FD on stack
	mov rbp, rdi

	call _read_loop					; read loop

	pop rbp
	ret

_read_loop:
	mov rdi, rbp
	lea rsi, [rel buffer]
	mov rdx, BUFF_SIZE
	mov rax, MACH_SYSCALL(READ)		; read file
	syscall
	jc _error						; if read failed, error

	cmp rax, 0						; if there's nothing left to read,
	je _end							; end loop, no error

	mov rdi, STDOUT
	lea rsi, [rel buffer]
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall							; write what was read

	jmp _read_loop					; repeat

_end:
	mov rax, 0
	ret

_error:
	mov rax, 1
	ret

_main:
	lea rdi,  [rel file]
	mov rsi, 0x0
	mov rax, MACH_SYSCALL(OPEN)
	syscall							; getting FD of "test.txt"
	
	mov rdi, rax
	call _ft_cat					; cat

	ret
