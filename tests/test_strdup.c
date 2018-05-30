#include "tests.h"

static	int	tests(void)
{
	char	*ret;
	char	*ret_ft;
	char	*strs[4] = {"", "sdhsdjs", "asalkslakslaklskalkslakslakslkas", "sas"};

	for (int i = 0; i < 4; i++)
	{
		ret = strdup(strs[i]);
		ret_ft = ft_strdup(strs[i]);
		if (strcmp(ret, ret_ft) != 0 || ret_ft == strs[i])
			return (0);
	}

	return (1);
}

void	test_strdup(void)
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

	printf("STRDUP TEST:\n\n");
	
	char	*ret;
	char	*s = "Hello, world !";
	size_t	len = strlen(s);

	//
	printf("  TEST 1 - strdup(\"Hello, world !\") :\n");
	
	printf("      strdup: ");
	ret = strdup(s);
	ft_putnstr_custom(ret, len + 1, '\'');
	printf("  (addr %p)\n", ret);

	printf("   ft_strdup: ");
	ret = ft_strdup(s);
	ft_putnstr_custom(ret, len + 1, '\'');
	printf("  (addr %p)\n", ret);
	//
}
