#include "tests.h"

void	test_puts(void)
{
	int		ret;
	int		ret_ft;
	char	*str = "Hello, world !";

	//
	printf("  TEST 1 - puts(NULL) :\n");

	write(1, "      puts: ", 12);
	ret = puts(NULL);
	printf("       ret: %d\n", ret);

	write(1, "   ft_puts: ", 12);
	ret_ft = ft_puts(NULL);
	printf("       ret: %d\n", ret_ft);
	//

	//
	printf("  TEST 2 - puts(\"Hello, world !\") :\n");

	write(1, "      puts: ", 12);
	ret = puts(str);
	printf("       ret: %d\n", ret);

	write(1, "   ft_puts: ", 12);
	ret_ft = ft_puts(str);
	printf("       ret: %d\n", ret_ft);
	//

}
