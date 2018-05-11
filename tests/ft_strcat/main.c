#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern char	*ft_strcat(char *restrict s1, char *restrict s2);

int		main(void)
{
	char	*s1;
	char	*s2 = "cat";

	s1 = (char *)malloc(sizeof(char) * 7);
	s1[0] = 'C';
	s1[1] = 'o';
	s1[2] = 'n';
	s1[3] = 0;

	s1[6] = 'x';

	printf("BEFORE |%c| |%c| |%c| |%c| |%c| |%c| |%c|\n", s1[0], s1[1], s1[2], s1[3], s1[4], s1[5], s1[6]);
	ft_strcat(s1, s2);
	printf("AFTER  |%c| |%c| |%c| |%c| |%c| |%c| |%c|\n", s1[0], s1[1], s1[2], s1[3], s1[4], s1[5], s1[6]);

	return (0);
}