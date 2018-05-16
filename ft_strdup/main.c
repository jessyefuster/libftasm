#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern char	*ft_strdup(char *s1);

int		main(void)
{
	char *s = ft_strdup("DKLSJDKSJD SKLDJ SKDJKLSJD KLSJD SKJDLKSJDK");

	printf("%s\n", s);

	return (0);
}