#include "tests.h"

void	test_memcpy(void)
{
	printf("MEMCPY TEST:\n\n");
	
	char	*dst = strdup("Erase me");
	char	*src = strdup("xxxxxxxxx");
	size_t	len_dst = strlen(dst);

	//
	printf("  TEST 1 - memcpy(\"Erase me\", \"xxxxxxxxx\", 5) :\n");

	printf("      memcpy: ");
	memcpy(dst, src, 5);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n");

	strcpy(dst, "Erase me");

	printf("   ft_memcpy: ");
	ft_memcpy(dst, src, 5);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n\n");
	//

	strcpy(dst, "Erase me");

	//
	printf("  TEST 2 - memcpy(\"Erase me\", \"xxxxxxxxx\", 0) :\n");

	printf("      memcpy: ");
	memcpy(dst, src, 0);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n");

	strcpy(dst, "Erase me");

	printf("   ft_memcpy: ");
	ft_memcpy(dst, src, 0);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n");
	//
}
