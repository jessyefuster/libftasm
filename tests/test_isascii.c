#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = isascii(c);
		ret_ft = ft_isascii(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_isascii(void)
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

	printf("ISASCII TEST:\n\n");
	
	//
	printf("  TEST 1 - isascii(-10) :\n");

	printf("      isascii: ");
	printf("%d\n", isascii(-10));
	printf("   ft_isascii: ");
	printf("%d\n", ft_isascii(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - isascii(0) :\n");

	printf("      isascii: ");
	printf("%d\n", isascii(0));
	printf("   ft_isascii: ");
	printf("%d\n", ft_isascii(0));
	printf("\n");
	//

	//
	printf("  TEST 3 - isascii(400) :\n");

	printf("      isascii: ");
	printf("%d\n", isascii(400));
	printf("   ft_isascii: ");
	printf("%d\n", ft_isascii(400));
	printf("\n");
	//

	//
	printf("  TEST 4 - isascii(140) :\n");

	printf("      isascii: ");
	printf("%d\n", isascii(140));
	printf("   ft_isascii: ");
	printf("%d\n", ft_isascii(140));
	printf("\n");
	//
}
