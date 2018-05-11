; nasm -f macho64 ft_toupper.s -o ft_toupper.o && gcc -c main.c -o main.o && gcc main.o ft_toupper.o -o ft_toupper && rm *.o

section .text
	global _ft_toupper

; DESCRIPTION
;	Converts an lower-case letter to the
;	corresponding upper-case letter
; RETURN VALUE
;	Uppercase letter if char is lower, else char
_ft_toupper:
	mov rax, rdi

	cmp rdi, 'a'			;
	jl _end					; if char is not lower,
	cmp rdi, 'z'			; do nothing
	jg _end					;

	sub rax, 32
	ret

_end:
	ret
