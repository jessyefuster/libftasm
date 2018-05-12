; nasm -f macho64 ft_isalnum.s -o ft_isalnum.o && gcc -c main.c -o main.o && gcc main.o ft_isalnum.o -o ft_isalnum && rm *.o

section .text
	global _ft_isalnum
	extern _ft_isalpha
	extern _ft_isdigit

; DESCRIPTION
;	Tests if character is digit or alpha
; RETURN VALUE
;	0 if char tests false, else non-0
_ft_isalnum:
	call _ft_isalpha		;
	cmp rax, 1				; check if alpha
	je _alnum				;

	call _ft_isdigit		;
	cmp rax, 1				; check if digit
	je _alnum				;

	mov rax, 0
	ret

_alnum:
	mov rax, 1
	ret
