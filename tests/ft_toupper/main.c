#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int	ft_toupper(int c);

int		main(void)
{
	char letter = 'A';
	int	upper = ft_toupper(letter);

	printf("%c to upper = %c\n", letter, upper);

	return (0);
}