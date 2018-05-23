global _ft_toupper

section .text

; DESCRIPTION
;	Converts an lower-case letter to the
;	corresponding upper-case letter
; RETURN VALUE
;	Uppercase letter if char is lower, else char
_ft_toupper:
	mov rax, rdi

	cmp rdi, 'a'			;
	jl _end					; if char is not lower,
	cmp rdi, 'z'			; do nothing
	jg _end					;

	sub rax, 32
	ret

_end:
	ret
