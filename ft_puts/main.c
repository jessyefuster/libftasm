#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int	ft_puts(const char *c);

int		main(void)
{
	char *s = "Hello";
	int real_ret = puts(NULL);
	int ret = ft_puts(NULL);

	printf("real ret: %d ret: %d\n", real_ret, ret);

	return (0);
}