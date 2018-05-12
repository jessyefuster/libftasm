#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int	ft_isdigit(int c);

int		main(void)
{
	char letter = '9';
	int	isalpha = ft_isdigit(letter);

	printf("%c is digit ? %d\n", letter, isalpha);

	return (0);
}