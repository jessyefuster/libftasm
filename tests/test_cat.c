#include "tests.h"

void	test_cat(void)
{
	printf("CAT TEST:\n\n");

	int		fd;

	//
	printf("  TEST 1 - cat(fd(\"auteur\")) :\n");

	write(1, "      cat: x", 11);
	system("cat auteur");

	write(1, "      ft_cat: ", 14);
	fd = open("auteur", O_RDONLY);
	ft_cat(fd);
	close(fd);
	//
}
