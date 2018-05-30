#include "tests.h"

static	void tests_reset_str(char **s1, int i)
{
	if (i == 0)
		memset(s1[0], 0, 15);
	else if (i == 1)
		memset(&s1[1][7], 0, 15);
	else if (i == 2)
		memset(&s1[2][14], 0, 15);
	else if (i == 3)
		memset(&s1[3][3], 0, 15);
}

static	int	tests(void)
{
	char	*ret;
	char	*ret_ft;
	char	**s1;
	char	**s2;

	s1 = (char **)malloc(sizeof(char *) * 4);
	s1[0] = strdup("\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
	s1[1] = strdup("sdhsdjs\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
	s1[2] = strdup("asasfsdfsdvcvs\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
	s1[3] = strdup("sas\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");

	s2 = (char **)malloc(sizeof(char *) * 4);
	s2[0]= "";
	s2[1]= "sdhsdjs";
	s2[2]= "asasfsdfsdvcvs";
	s2[3]= "sas";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ret = strcat(s1[i], s2[j]);
			tests_reset_str(s1, i);
			ret_ft = ft_strcat(s1[i], s2[j]);
			printf("%s\n", ret_ft);
			if (strcmp(ret, ret_ft) != 0)
				return (0);
		}
		// ret = strcat(s1[rand_src], s2[rand_dst]);
		// ret_ft = ft_strcat(s1[rand_src], s2[rand_dst]);
		// printf("%s\n", ret_ft);
		// if (strcmp(ret, ret_ft) != 0 || ret_ft != s1[rand_src])
		// 	return (0);
	}

	return (1);
}

void	test_strcat(void)
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

	printf("STRCAT TEST:\n\n");
	
	char	*s1;
	char	*s2 = "cat";
	char	*s_ret_ft;

	s1 = (char *)malloc(sizeof(char) * 7);
	s1[0] = 'C';
	s1[1] = 'o';
	s1[2] = 'n';
	s1[3] = 0;
	s1[6] = 'x';

	//
	printf("  TEST 1 - strcat(\"Con'\\0''\\0''\\0'x\", \"cat\") :\n");
	
	strcat(s1, s2);
	printf("      strcat: ");
	ft_putnstr_custom(s1, 7, '\'');

	printf("\n");
	s1[3] = 0;
	s1[4] = 0;
	s1[5] = 0;
	s1[6] = 'x';

	s_ret_ft = ft_strcat(s1, s2);
	printf("   ft_strcat: ");
	ft_putnstr_custom(s1, 7, '\'');
	printf("(s1 before: %p, s1 after: %p)", s1, s_ret_ft);
	printf("\n");
	//
}
