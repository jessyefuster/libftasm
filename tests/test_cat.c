#include "tests.h"

void	test_cat(void)
{
	printf("CAT TEST:\n\n");

	int		fd;

	//
	printf("  TEST 1 - cat(-1) :\n");

	ft_cat(-1);
	//

	//
	printf("  TEST 2 - cat(1000) :\n");

	ft_cat(1000);
	//	
}
