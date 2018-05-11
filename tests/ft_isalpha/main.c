#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int	ft_isalpha(int c);

int		main(void)
{
	char letter = 'F';
	int	isalpha = ft_isalpha(letter);

	printf("%c is alpha ? %d\n", letter, isalpha);

	return (0);
}