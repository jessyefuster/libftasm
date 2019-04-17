global _ft_isblank

section .text

; DESCRIPTION
;	Tests if character is blank
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isblank:
	cmp rdi, 9			; if tabulation
	je _blank
	cmp rdi, 32			; if space
	je _blank

	mov rax, 0
	ret

_blank:
	mov rax, 1
	ret
