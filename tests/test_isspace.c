#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = isspace(c);
		ret_ft = ft_isspace(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_isspace(void)
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

	printf("ISSPACE TEST:\n\n");
	
	//
	printf("  TEST 1 - isspace(-10) :\n");

	printf("      isspace: ");
	printf("%d\n", isspace(-10));
	printf("   ft_isspace: ");
	printf("%d\n", ft_isspace(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - isspace(240) :\n");

	printf("      isspace: ");
	printf("%d\n", isspace(240));
	printf("   ft_isspace: ");
	printf("%d\n", ft_isspace(240));
	printf("\n");
	//

	//
	printf("  TEST 3 - isspace(' ') :\n");

	printf("      isspace: ");
	printf("%d\n", isspace(' '));
	printf("   ft_isspace: ");
	printf("%d\n", ft_isspace(' '));
	printf("\n");
	//

	//
	printf("  TEST 4 - isspace('\\v') :\n");

	printf("      isspace: ");
	printf("%d\n", isspace('\v'));
	printf("   ft_isspace: ");
	printf("%d\n", ft_isspace('\v'));
	printf("\n");
	//
}
