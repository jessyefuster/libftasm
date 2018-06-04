#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = isdigit(c);
		ret_ft = ft_isdigit(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_isdigit(void)
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

	printf("ISDIGIT TEST:\n\n");
	
	//
	printf("  TEST 1 - isdigit(-10) :\n");

	printf("      isdigit: ");
	printf("%d\n", isdigit(-10));
	printf("   ft_isdigit: ");
	printf("%d\n", ft_isdigit(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - isdigit(240) :\n");

	printf("      isdigit: ");
	printf("%d\n", isdigit(240));
	printf("   ft_isdigit: ");
	printf("%d\n", ft_isdigit(240));
	printf("\n");
	//

	//
	printf("  TEST 3 - isdigit('3') :\n");

	printf("      isdigit: ");
	printf("%d\n", isdigit('3'));
	printf("   ft_isdigit: ");
	printf("%d\n", ft_isdigit('3'));
	printf("\n");
	//

	//
	printf("  TEST 4 - isdigit('b') :\n");

	printf("      isdigit: ");
	printf("%d\n", isdigit('b'));
	printf("   ft_isdigit: ");
	printf("%d\n", ft_isdigit('b'));
	printf("\n");
	//
}
