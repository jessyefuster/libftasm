global _ft_memcpy

section .text

; DESCRIPTION
;	Write n bytes of value c to the string s
;	corresponding lower-case letter
; RETURN VALUE
;	Rteurn pointer to string
_ft_memcpy:
	push rdi

	mov rcx, rdx

	cld
	rep movsb

	pop rax
	ret