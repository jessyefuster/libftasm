global _ft_tolower

section .text

; DESCRIPTION
;	Converts an upper-case letter to the
;	corresponding lower-case letter
; RETURN VALUE
;	Lowercase letter if char is upper, else char
_ft_tolower:
	mov rax, rdi

	cmp rdi, 'A'			;
	jl _end					; if char is not upper,
	cmp rdi, 'Z'			; do nothing
	jg _end					;

	add rax, 32
	ret

_end:
	ret
