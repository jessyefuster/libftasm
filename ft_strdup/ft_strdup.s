; nasm -f macho64 ft_strdup.s -o ft_strdup.o && gcc -c main.c -o main.o && gcc main.o ft_strdup.o ft_strlen.o ft_memcpy.o -o ft_strdup

section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_memcpy
	extern _malloc

; DESCRIPTION
;	Allocates memory for a copy of string s,
;	does the copy, and returns a pointer to it
; RETURN VALUE
;	Return pointer to string
_ft_strdup:
	push rbx			; store callee-saved

	mov rbx, rdi		; store string to work register
	push rbx			; store string

	call _ft_strlen		; get string len
	inc rax				; + 1 for ending '\0'
	push rax			; store string len

	mov rdi, rax		; set len for malloc
	call _malloc

	cmp rax, 0			; if	malloc failed
	je _null			; return NULL

	mov rdi, rax		; dst (malloc return)
	pop rdx				; number of bytes to copy
	pop rsi				; src
	call _ft_memcpy		; copy string

	pop rbx
	ret

_null:
	pop rbx
	pop rbx
	pop rbx
	mov rax, 0
	ret
