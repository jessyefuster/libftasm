global _ft_puts
extern _ft_strlen

%define WRITE				4
%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1


section	.data
test:
	.null db "(null)", 10, 0
	.nl db 10

section .text

; DESCRIPTION
;	Write the string, and a terminating newline
;	on stdout
; RETURN VALUE
;	Nonnegative value on success
_ft_puts:
	cmp rdi, 0					; check if null
	je _null

	push rdi					; store string to stack

	call _ft_strlen				; strlen in rax

	mov rdi, STDOUT
	pop rsi						; get string from stack
	mov rdx, rax
	call _write

	mov rdi, STDOUT
	lea rsi, [rel test.nl]
	mov rdx, 1
	call _write

	jc _error

	mov rax, 1
	ret

_write:
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	ret

_null:
	mov rdi, STDOUT
	lea rsi, [rel test.null]
	mov rdx, 7
	call _write					; print "(null)"

	mov rax, 1
	ret

_error:
	mov rax, -1
	ret