#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = tolower(c);
		ret_ft = ft_tolower(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_tolower(void)
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

	printf("TOLOWER TEST:\n\n");
	
	//
	printf("  TEST 1 - tolower('-') :\n");

	printf("     tolower: %c\n", tolower('-'));
	printf("  ft_tolower: %c\n\n", ft_tolower('-'));
	//

	//
	printf("  TEST 2 - tolower('a') :\n");

	printf("     tolower: %c\n", tolower('a'));
	printf("  ft_tolower: %c\n\n", ft_tolower('a'));
	//

	//
	printf("  TEST 3 - tolower('D') :\n");

	printf("     tolower: %c\n", tolower('D'));
	printf("  ft_tolower: %c\n\n", ft_tolower('D'));
	//
}
