#include "tests.h"

void	test_isascii(void)
{
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
