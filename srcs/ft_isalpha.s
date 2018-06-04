global _ft_isalpha

section .text

; DESCRIPTION
;	Tests if character is alpha (either isupper or islower)
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isalpha:
	or rdi, 0x20			; make uppercase letters lowercase
	
	cmp rdi, 'a'			; if below 'a', not alpha
	jl _not_alpha
	cmp rdi, 'z'			; if above 'z', not alpha
	jg _not_alpha

	mov rax, 1
	ret

_not_alpha:
	mov rax, 0
	ret
