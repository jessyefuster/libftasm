#include "tests.h"

void	test_memset(void)
{
	printf("MEMSET TEST:\n\n");
	
	char	*dst = strdup("Erase me");
	char	c = 'x';
	size_t	len_dst = strlen(dst);

	//
	printf("  TEST 1 - memset(\"Erase me\", 'x', 5) :\n");

	printf("      memset: ");
	memset(dst, c, 5);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n");

	strcpy(dst, "Erase me");

	printf("   ft_memset: ");
	ft_memset(dst, c, 5);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n\n");
	//

	strcpy(dst, "Erase me");

	//
	printf("  TEST 2 - memset(\"Erase me\", \"xxxxxxxxx\", 0) :\n");

	printf("      memset: ");
	memset(dst, c, 0);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n");

	strcpy(dst, "Erase me");

	printf("   ft_memset: ");
	ft_memset(dst, c, 0);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n");
	//
}
