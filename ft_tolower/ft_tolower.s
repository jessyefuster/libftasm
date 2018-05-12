; nasm -f macho64 ft_tolower.s -o ft_tolower.o && gcc -c main.c -o main.o && gcc main.o ft_tolower.o -o ft_tolower && rm *.o

section .text
	global _ft_tolower

; DESCRIPTION
;	Converts an upper-case letter to the
;	corresponding lower-case letter
; RETURN VALUE
;	Lowercase letter if char is upper, else char
_ft_tolower:
	mov rax, rdi

	cmp rdi, 'A'			;
	jl _end					; if char is not upper,
	cmp rdi, 'Z'			; do nothing
	jg _end					;

	add rax, 32
	ret

_end:
	ret
