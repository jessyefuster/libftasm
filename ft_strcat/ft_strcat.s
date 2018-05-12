; nasm -f macho64 ft_strcat.s -o ft_strcat.o & gcc -c main.c -o main.o && gcc main.o ft_strcat.o -o ft_strcat

section .text
	global _ft_strcat

; DESCRIPTION
;	Appends a copy of the null-terminated str s2 to the end
;	of the null-terminated str s2, then add a terminating 0
; RETURN VALUE
;	Returns pointer s1
_ft_strcat:
	push rdi				; store 1st str pointer

	call _iter				; get 1st str end
	call _concat			; add 2nd str to 1st
	mov BYTE [rdi], 0		; null terminator

	pop rax					; get string pointer to ret
	ret

_iter:
	cmp BYTE [rdi], 0
	je _iter_end
	add rdi, 1
	jmp _iter

	_iter_end:
		ret

_concat:
	cmp BYTE [rsi], 0
	je _concat_end
	mov al, BYTE [rsi]
	mov BYTE [rdi], al
	inc rdi
	inc rsi
	jmp _concat
	
	_concat_end:
		ret
