#include "tests.h"

static int	tests(void)
{
	return (1);
}

void	test_memcpy(void)
{
	if (!tests())
	{
		printf(COLOR_RED);
		printf("(failure)  ");
	}
	else
	{
		printf(COLOR_RESET);
	}

	printf("MEMCPY TEST:\n\n");
	
	char	*dst = strdup("Erase me");
	char	*dst_2 = strdup("");
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
	printf("\n\n");
	//

	//
	printf("  TEST 3 - memcpy(\"Erase me\", \"\", 5) :\n");

	printf("      memcpy: ");
	memcpy(dst, src, 0);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n");

	strcpy(dst, "Erase me");

	printf("   ft_memcpy: ");
	ft_memcpy(dst, src, 0);
	ft_putnstr_custom(dst, len_dst, '\'');
	printf("\n\n");
	//

	//
	printf("  TEST 4 - memcpy(\"\", \"xxxxxxxxx\", 6) :\n");

	printf("      memcpy: ");
	memcpy(dst_2, src, 0);
	ft_putnstr_custom(dst_2, 1, '\'');
	printf("\n");

	strcpy(dst_2, "");

	printf("   ft_memcpy: ");
	ft_memcpy(dst_2, src, 0);
	ft_putnstr_custom(dst_2, 1, '\'');
	printf("\n");
	//
}
