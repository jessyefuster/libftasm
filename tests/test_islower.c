#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = islower(c);
		ret_ft = ft_islower(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_islower(void)
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

	printf("ISLOWER TEST:\n\n");
	
	//
	printf("  TEST 1 - islower(-10) :\n");

	printf("      islower: ");
	printf("%d\n", islower(-10));
	printf("   ft_islower: ");
	printf("%d\n", ft_islower(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - islower(240) :\n");

	printf("      islower: ");
	printf("%d\n", islower(240));
	printf("   ft_islower: ");
	printf("%d\n", ft_islower(240));
	printf("\n");
	//

	//
	printf("  TEST 3 - islower('b') :\n");

	printf("      islower: ");
	printf("%d\n", islower('b'));
	printf("   ft_islower: ");
	printf("%d\n", ft_islower('b'));
	printf("\n");
	//

	//
	printf("  TEST 4 - islower('D') :\n");

	printf("      islower: ");
	printf("%d\n", islower('D'));
	printf("   ft_islower: ");
	printf("%d\n", ft_islower('D'));
	printf("\n");
	//
}
