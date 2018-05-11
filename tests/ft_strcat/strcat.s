; nasm -f macho64 ft_strcat.s -o ft_strcat.o & ld ft_strcat.o -lSystem -macosx_version_min 10.13 -o ft_strcat

section	.data
test:
	.str1 db "Con", 0, 0, 0, 0
	.str2 db "cat", 0
fmt:
	.c db "%c", 10, 0
	.s db "%s", 10, 0

section .text
	global start
	global _main
	global _ft_strcat
	extern _printf

start:
	call _main
	ret

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


_main:
	push rbp						; store base stack pointer
	mov rbp, rsp					; set stack pointer


	lea rdi, [rel test.str1]		; 1st arg, 1st string
	lea rsi, [rel test.str2]		; 2nd arg, 2nd string
	call _ft_strcat


	lea rdi, [rel fmt.s]
	mov rsi, rax
	mov rax, 0
	call _printf					; printf all string

	pop rbp							; remove base stack pointer
	mov rax, 0						; set return value to OK
	ret
