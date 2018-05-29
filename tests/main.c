#include "tests.h"

void	ft_putnstr_custom(char *str, size_t len, char c)
{
	for (size_t i = 0; i < len; i++)
	{
		if (str[i] == 0)
			printf("%c\\0%c ", c, c);
		else
			printf("%c%c%c ", c, str[i], c);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1 || (argc > 1 && strcmp("bzero", argv[1]) == 0))
	{
		printf("BZERO TEST:\n\n");
		test_bzero();
		printf("\n\n");
	}

	// if (argc == 1 || (argc > 1 && strcmp("cat", argv[1]) == 0))
	// {
	// 	printf("CAT TEST:\n\n");
	// 	test_cat();
	// 	printf("\n\n");
	// }

	if (argc == 1 || (argc > 1 && strcmp("isalnum", argv[1]) == 0))
	{
		printf("ISALNUM TEST:\n\n");
		test_isalnum();
		printf("\n");
	}

	if (argc == 1 || (argc > 1 && strcmp("isalpha", argv[1]) == 0))
	{
		printf("ISALPHA TEST:\n\n");
		test_isalpha();
		printf("\n");
	}

	if (argc == 1 || (argc > 1 && strcmp("isascii", argv[1]) == 0))
	{
		printf("ISASCII TEST:\n\n");
		test_isascii();
		printf("\n");
	}

	if (argc == 1 || (argc > 1 && strcmp("isdigit", argv[1]) == 0))
	{
		printf("ISDIGIT TEST:\n\n");
		test_isdigit();
		printf("\n");
	}

	if (argc == 1 || (argc > 1 && strcmp("memcpy", argv[1]) == 0))
	{
		printf("MEMCPY TEST:\n\n");
		test_memcpy();
		printf("\n\n");
	}

	if (argc == 1 || (argc > 1 && strcmp("memset", argv[1]) == 0))
	{
		printf("MEMSET TEST:\n\n");
		test_memset();
		printf("\n\n");
	}

	if (argc == 1 || (argc > 1 && strcmp("puts", argv[1]) == 0))
	{
		printf("PUTS TEST:\n\n");
		test_puts();
		printf("\n\n");
	}
	return (0);
}