global _ft_cat

%define MACH_SYSCALL(nb)	0x2000000 | nb
%define READ				3
%define WRITE				4
%define OPEN				5
%define STDOUT				1
%assign BUFF_SIZE			4096

section	.bss
	buffer:	resb BUFF_SIZE + 1

section .text

; DESCRIPTION
;	Read file from FD parameter, writing it to STDOUT.
;	If an error occurs, does nothing.
_ft_cat:
	cmp rdi, 0			
	jl _error						; if FD is negative, error

	push rbx						; store FD on stack
	mov rbx, rdi

	call _read_loop					; read loop

	pop rbx
	ret

_read_loop:
	mov rdi, rbx
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
