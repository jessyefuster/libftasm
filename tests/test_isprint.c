#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = isprint(c);
		ret_ft = ft_isprint(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_isprint(void)
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

	printf("ISPRINT TEST:\n\n");
	
	//
	printf("  TEST 1 - isprint(-10) :\n");

	printf("      isprint: ");
	printf("%d\n", isprint(-10));
	printf("   ft_isprint: ");
	printf("%d\n", ft_isprint(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - isprint(240) :\n");

	printf("      isprint: ");
	printf("%d\n", isprint(240));
	printf("   ft_isprint: ");
	printf("%d\n", ft_isprint(240));
	printf("\n");
	//

	//
	printf("  TEST 3 - isprint('3') :\n");

	printf("      isprint: ");
	printf("%d\n", isprint('3'));
	printf("   ft_isprint: ");
	printf("%d\n", ft_isprint('3'));
	printf("\n");
	//

	//
	printf("  TEST 4 - isprint(6) :\n");

	printf("      isprint: ");
	printf("%d\n", isprint(6));
	printf("   ft_isprint: ");
	printf("%d\n", ft_isprint(6));
	printf("\n");
	//
}
