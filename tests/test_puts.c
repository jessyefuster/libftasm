#include "tests.h"

void	test_puts(void)
{
	printf(COLOR_RESET);

	//

	printf("PUTS TEST:\n\n");

	int		save_stdout = dup(STDOUT_FILENO);
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

	//
	printf("  TEST 3 - puts(\"Hello, world !\") (closed fd):\n");

	close(STDOUT_FILENO);
	ret = puts(str);
	ret_ft = ft_puts(str);
	dup2(save_stdout, 1);

	printf("     puts ret: %d\n", ret);
	printf("  ft_puts ret: %d\n", ret_ft);
	//

}
