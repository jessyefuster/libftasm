global _ft_iscntrl

section .text

; DESCRIPTION
;	Tests if character is a control character (not printable)
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_iscntrl:
	cmp rdi, 127
	je _cntrl
	cmp rdi, 32
	jl _cntrl

	mov rax, 0
	ret

_cntrl:
	mov rax, 1
	ret
