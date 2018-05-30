#include "tests.h"

void	test_isalnum(void)
{
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
