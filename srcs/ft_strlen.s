global _ft_strlen

section .text

; DESCRIPTION
;	Computes len of string
; RETURN VALUE
;	Returns number of char before '\0'
_ft_strlen:
	mov rax, 0			; compare byte for rep
	mov rcx, -1			; counter

	cld
	repne scasb

	not rcx				; getting len
	dec rcx				; from counter

	mov rax, rcx
	ret
