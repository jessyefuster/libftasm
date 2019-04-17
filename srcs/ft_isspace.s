global _ft_isspace

section .text

; DESCRIPTION
;	Tests if character is white space ('\t', '\n', '\v', '\r', ' ')
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isspace:
	cmp rdi, 32
	je _space
	cmp rdi, 9
	jl _not_space
	cmp rdi, 13
	jg _not_space
	; cmp rdi, '0'			; if below '0', not digit
	; jl _not_digit
	; cmp rdi, '9'			; if above '9', not digit
	; jg _not_digit

	mov rax, 1
	ret

_not_space:
	mov rax, 0
	ret

_space:
	mov rax, 1
	ret
