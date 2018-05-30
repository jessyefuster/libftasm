#include "tests.h"

static	int	tests(void)
{
	size_t	ret;
	size_t	ret_ft;
	char	*strs[4] = {"", "sdhsdjs", "asalkslakslaklskalkslakslakslkas", "sas"};

	for (int i = 0; i < 4; i++)
	{
		ret = strlen(strs[i]);
		ret_ft = ft_strlen(strs[i]);
		if (ret != ret_ft)
			return (0);
	}

	return (1);
}

void	test_strlen(void)
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

	//

	printf("STRLEN TEST:\n\n");
	
	char	*s = "Hello, world !";

	//
	printf("  TEST 1 - strlen(\"Hello, world !\") :\n");

	printf("      strlen: %zu\n", strlen(s));
	printf("   ft_strlen: %zu\n\n", ft_strlen(s));
	//

	//
	printf("  TEST 2 - strlen(\"\") :\n");

	printf("      strlen: %zu\n", strlen(""));
	printf("   ft_strlen: %zu\n", ft_strlen(""));
	//
}
