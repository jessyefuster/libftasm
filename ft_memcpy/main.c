#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern void	*ft_memcpy(void *dst, void *src, size_t n);

int		main(void)
{
	char *dst = strdup("xxxxxxxx");
	char *src = strdup("Erase me");

	printf("BEFORE %s\n", dst);
	printf("AFTER  %s\n", ft_memcpy(dst, src, 5));

	return (0);
}