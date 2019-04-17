global _ft_isupper

section .text

; DESCRIPTION
;	Tests if character is upper
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isupper:
	cmp rdi, 'A'			; if below 'A', not alpha
	jl _not_upper
	cmp rdi, 'Z'			; if above 'Z', not alpha
	jg _not_upper

	mov rax, 1
	ret

_not_upper:
	mov rax, 0
	ret
