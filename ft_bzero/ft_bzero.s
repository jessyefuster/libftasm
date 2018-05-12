; nasm -f macho64 ft_bzero.s -o ft_bzero.o & gcc -c main.c -o main.o && gcc main.o ft_bzero.o -o ft_bzero

section .text
	global _ft_bzero

; DESCRIPTION
;	Writes n zeroed bytes to the string s.
;	If n is 0, does nothing
_ft_bzero:
	cmp rsi, 0					; check if len is 0
	je	_end					; if it is, return

	mov BYTE [rdi], 0			; set byte to 0
	inc rdi						;
	dec rsi						; go to next char
	jmp _ft_bzero				;

_end:
	ret
