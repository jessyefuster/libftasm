global _ft_islower

section .text

; DESCRIPTION
;	Tests if character is lower
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_islower:
	cmp rdi, 'a'			; if below 'a', not alpha
	jl _not_lower
	cmp rdi, 'z'			; if above 'z', not alpha
	jg _not_lower

	mov rax, 1
	ret

_not_lower:
	mov rax, 0
	ret
