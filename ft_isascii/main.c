#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int	ft_isascii(int c);

int		main(void)
{
	int c = 128;
	int	isascii = ft_isascii(c);

	printf("%c is ascii ? %d\n", c, isascii);

	return (0);
}