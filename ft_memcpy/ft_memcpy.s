; nasm -f macho64 ft_memcpy.s -o ft_memcpy.o && gcc -c main.c -o main.o && gcc main.o ft_memcpy.o -o ft_memcpy && rm *.o

section .text
	global _ft_memcpy

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