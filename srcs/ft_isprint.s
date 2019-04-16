global _ft_isprint

section .text

; DESCRIPTION
;	Tests if character is printable
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isprint:
	cmp rdi, 32
	jl _not_print
	cmp rdi, 127
	jge _not_print

	mov rax, 1
	ret

_not_print:
	mov rax, 0
	ret
