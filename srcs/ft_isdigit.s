global _ft_isdigit

section .text

; DESCRIPTION
;	Tests if character is digit (0123456789)
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isdigit:
	cmp rdi, '0'			; if below '0', not digit
	jl _not_digit
	cmp rdi, '9'			; if above '9', not digit
	jg _not_digit

	mov rax, 1
	ret

_not_digit:
	mov rax, 0
	ret
