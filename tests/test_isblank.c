#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = isblank(c);
		ret_ft = ft_isblank(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_isblank(void)
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

	printf("ISBLANK TEST:\n\n");
	
	//
	printf("  TEST 1 - isblank(-10) :\n");

	printf("      isblank: ");
	printf("%d\n", isblank(-10));
	printf("   ft_isblank: ");
	printf("%d\n", ft_isblank(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - isblank(240) :\n");

	printf("      isblank: ");
	printf("%d\n", isblank(240));
	printf("   ft_isblank: ");
	printf("%d\n", ft_isblank(240));
	printf("\n");
	//

	//
	printf("  TEST 3 - isblank('\\t') :\n");

	printf("      isblank: ");
	printf("%d\n", isblank('\t'));
	printf("   ft_isblank: ");
	printf("%d\n", ft_isblank('\t'));
	printf("\n");
	//

	//
	printf("  TEST 4 - isblank(' ') :\n");

	printf("      isblank: ");
	printf("%d\n", isblank(' '));
	printf("   ft_isblank: ");
	printf("%d\n", ft_isblank(' '));
	printf("\n");
	//
}
