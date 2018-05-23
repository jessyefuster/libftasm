global _ft_memset

section .text

; DESCRIPTION
;	Write n bytes of value c to the string s
;	corresponding lower-case letter
; RETURN VALUE
;	Rteurn pointer to string
_ft_memset:
	push rdi			; store string

	mov rax, rsi		; char to fill
	mov rcx, rdx		; n bytes to iter

	cld
	rep stosb			; memset

	pop rax

_end:
	ret
