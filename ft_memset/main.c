#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern void	*ft_memset(void *b, int c, size_t len);

int		main(void)
{
	char *s = strdup("Erase me");

	printf("BEFORE %s\n", s);
	printf("AFTER  %s\n", ft_memset(s, 'X', 1));

	return (0);
}