#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern size_t	ft_strlen(const char *s);

int		main(void)
{
	char	*s = "ksdjklsjdksjdlksdjksdjlsdlsdj";
	size_t	len = ft_strlen(s);
	size_t	real_len = strlen(s);

	printf("len = %zu, real_len = %zu\n", len, real_len);

	return (0);
}