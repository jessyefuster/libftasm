#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int	ft_tolower(int c);

int		main(void)
{
	char letter = '/';
	int	lower = ft_tolower(letter);

	printf("%c to lower = %c\n", letter, lower);

	return (0);
}