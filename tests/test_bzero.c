#include "tests.h"

void	test_bzero(void)
{
	printf("BZERO TEST:\n\n");
	
	char	*s = strdup("Hello, World !");
	size_t	n = strlen(s);

	//
	printf("  TEST 1 - bzero(\"Hello, World !\", 14) :\n");

	printf("        bzero: ");
	bzero(s, n);
	ft_putnstr_custom(s, n, '\'');
	printf("\n");

	strcpy(s, "Hello, World !");

	printf("     ft_bzero: ");
	ft_bzero(s, n);
	ft_putnstr_custom(s, n, '\'');
	printf("\n\n");
	//

	strcpy(s, "Hello, World !");

	//
	printf("  TEST 2 - bzero(\"Hello, World !\", 2) :\n");

	printf("        bzero: ");
	bzero(s, 2);
	ft_putnstr_custom(s, n, '\'');
	printf("\n");

	strcpy(s, "Hello, World !");

	printf("     ft_bzero: ");
	ft_bzero(s, 2);
	ft_putnstr_custom(s, n, '\'');
	printf("\n\n");
	//

	strcpy(s, "Hello, World !");

	//
	printf("  TEST 3 - bzero(\"Hello, World !\", 0) :\n");

	printf("        bzero: ");
	bzero(s, 0);
	ft_putnstr_custom(s, n, '\'');
	printf("\n");

	strcpy(s, "Hello, World !");

	printf("     ft_bzero: ");
	ft_bzero(s, 0);
	ft_putnstr_custom(s, n, '\'');
	printf("\n");
	//
}
