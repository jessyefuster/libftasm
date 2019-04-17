#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = isupper(c);
		ret_ft = ft_isupper(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_isupper(void)
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

	printf("ISUPPER TEST:\n\n");
	
	//
	printf("  TEST 1 - isupper(-10) :\n");

	printf("      isupper: ");
	printf("%d\n", isupper(-10));
	printf("   ft_isupper: ");
	printf("%d\n", ft_isupper(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - isupper(240) :\n");

	printf("      isupper: ");
	printf("%d\n", isupper(240));
	printf("   ft_isupper: ");
	printf("%d\n", ft_isupper(240));
	printf("\n");
	//

	//
	printf("  TEST 3 - isupper('b') :\n");

	printf("      isupper: ");
	printf("%d\n", isupper('b'));
	printf("   ft_isupper: ");
	printf("%d\n", ft_isupper('b'));
	printf("\n");
	//

	//
	printf("  TEST 4 - isupper('D') :\n");

	printf("      isupper: ");
	printf("%d\n", isupper('D'));
	printf("   ft_isupper: ");
	printf("%d\n", ft_isupper('D'));
	printf("\n");
	//
}
