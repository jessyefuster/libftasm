#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = iscntrl(c);
		ret_ft = ft_iscntrl(c);
		if (ret != ret_ft)
		{
			printf("%d, ret -> %d\n", c, ret);
			return (0);
		}
	}

	return (1);
}

void	test_iscntrl(void)
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

	printf("ISCNTRL TEST:\n\n");
	
	//
	printf("  TEST 1 - iscntrl(-10) :\n");

	printf("      iscntrl: ");
	printf("%d\n", iscntrl(-10));
	printf("   ft_iscntrl: ");
	printf("%d\n", ft_iscntrl(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - iscntrl(240) :\n");

	printf("      iscntrl: ");
	printf("%d\n", iscntrl(240));
	printf("   ft_iscntrl: ");
	printf("%d\n", ft_iscntrl(240));
	printf("\n");
	//

	//
	printf("  TEST 3 - iscntrl(4) :\n");

	printf("      iscntrl: ");
	printf("%d\n", iscntrl(4));
	printf("   ft_iscntrl: ");
	printf("%d\n", ft_iscntrl(4));
	printf("\n");
	//

	//
	printf("  TEST 4 - iscntrl('A') :\n");

	printf("      iscntrl: ");
	printf("%d\n", iscntrl('A'));
	printf("   ft_iscntrl: ");
	printf("%d\n", ft_iscntrl('A'));
	printf("\n");
	//
}
