#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = toupper(c);
		ret_ft = ft_toupper(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_toupper(void)
{
	if (!tests())
	{
		printf(COLOR_RED);
		printf("(failure)  ");
	}
	else
	{
		printf(COLOR_GREEN);
		printf("(success)  ");
	}

	printf("TOUPPER TEST:\n\n");
	
	//
	printf("  TEST 1 - toupper('-') :\n");

	printf("     toupper: %c\n", toupper('-'));
	printf("  ft_toupper: %c\n\n", ft_toupper('-'));
	//

	//
	printf("  TEST 2 - toupper('a') :\n");

	printf("     toupper: %c\n", toupper('a'));
	printf("  ft_toupper: %c\n\n", ft_toupper('a'));
	//

	//
	printf("  TEST 3 - toupper('D') :\n");

	printf("     toupper: %c\n", toupper('D'));
	printf("  ft_toupper: %c\n\n", ft_toupper('D'));
	//
	printf(COLOR_RESET);
}
