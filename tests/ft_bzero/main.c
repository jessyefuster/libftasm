#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern void	ft_bzero(void *s, size_t n);

int		main(void)
{
	char	*test;

	test = strdup("lol");

	printf("BEFORE |%c| |%c| |%c|\n", test[0], test[1], test[2]);
	ft_bzero((void *)test, 3);
	printf("AFTER  |%c| |%c| |%c|\n", test[0], test[1], test[2]);

	return (0);
}