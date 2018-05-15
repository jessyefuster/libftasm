; nasm -f macho64 ft_memset.s -o ft_memset.o && gcc -c main.c -o main.o && gcc main.o ft_memset.o -o ft_memset && rm *.o

section .text
	global _main
	global _ft_memset

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
