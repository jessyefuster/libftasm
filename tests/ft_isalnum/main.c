#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int	ft_isalnum(int c);

int		main(void)
{
	char letter = '(';
	int	isalpha = ft_isalnum(letter);

	printf("%c is alnum ? %d\n", letter, isalpha);

	return (0);
}