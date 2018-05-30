#include "tests.h"

void	test_isdigit(void)
{
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
