; nasm -f macho64 ft_isascii.s -o ft_isascii.o && gcc -c main.c -o main.o && gcc main.o ft_isascii.o -o ft_isascii && rm *.o

section .text
	global _ft_isascii

; DESCRIPTION
;	Tests if character is ascii
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isascii:
	cmp rdi, 0				; if below 0, not alpha
	jb _not_ascii
	cmp rdi, 127			; if above 127, not alpha
	ja _not_ascii

	mov rax, 1
	ret

_not_ascii:
	mov rax, 0
	ret