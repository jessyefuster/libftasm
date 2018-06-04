#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = isalnum(c);
		ret_ft = ft_isalnum(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_isalnum(void)
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

	printf("ISALNUM TEST:\n\n");
	
	//
	printf("  TEST 1 - isalnum(-10) :\n");

	printf("      isalnum: ");
	printf("%d\n", isalnum(-10));
	printf("   ft_isalnum: ");
	printf("%d\n", ft_isalnum(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - isalnum(240) :\n");

	printf("      isalnum: ");
	printf("%d\n", isalnum(240));
	printf("   ft_isalnum: ");
	printf("%d\n", ft_isalnum(240));
	printf("\n");
	//

	//
	printf("  TEST 2 - isalnum('2') :\n");

	printf("      isalnum: ");
	printf("%d\n", isalnum('2'));
	printf("   ft_isalnum: ");
	printf("%d\n", ft_isalnum('2'));
	printf("\n");
	//

	//
	printf("  TEST 2 - isalnum('X') :\n");

	printf("      isalnum: ");
	printf("%d\n", isalnum('X'));
	printf("   ft_isalnum: ");
	printf("%d\n", ft_isalnum('X'));
	printf("\n");
	//
}
