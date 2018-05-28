#include "tests.h"

void	test_isalpha(void)
{
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
