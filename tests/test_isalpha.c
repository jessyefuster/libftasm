#include "tests.h"

static	int	tests(void)
{
	int		ret;
	int		ret_ft;

	for (int c = SCHAR_MIN; c <= UCHAR_MAX; c++)
	{
		ret = isalpha(c);
		ret_ft = ft_isalpha(c);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_isalpha(void)
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

	printf("ISALPHA TEST:\n\n");
	
	//
	printf("  TEST 1 - isalpha(-10) :\n");

	printf("      isalpha: ");
	printf("%d\n", isalpha(-10));
	printf("   ft_isalpha: ");
	printf("%d\n", ft_isalpha(-10));
	printf("\n");
	//

	//
	printf("  TEST 2 - isalpha(240) :\n");

	printf("      isalpha: ");
	printf("%d\n", isalpha(240));
	printf("   ft_isalpha: ");
	printf("%d\n", ft_isalpha(240));
	printf("\n");
	//

	//
	printf("  TEST 3 - isalpha('3') :\n");

	printf("      isalpha: ");
	printf("%d\n", isalpha('3'));
	printf("   ft_isalpha: ");
	printf("%d\n", ft_isalpha('3'));
	printf("\n");
	//

	//
	printf("  TEST 4 - isalpha('b') :\n");

	printf("      isalpha: ");
	printf("%d\n", isalpha('b'));
	printf("   ft_isalpha: ");
	printf("%d\n", ft_isalpha('b'));
	printf("\n");
	//

	//
	printf("  TEST 5 - isalpha('K') :\n");

	printf("      isalpha: ");
	printf("%d\n", isalpha('K'));
	printf("   ft_isalpha: ");
	printf("%d\n", ft_isalpha('K'));
	printf("\n");
	//
}
