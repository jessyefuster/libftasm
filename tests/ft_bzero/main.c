extern void	_ft_bzero(void *s, size_t n);

int		main(void)
{
	char	*test;

	test = strdup("lol");

	_ft_bzero((void *)test, 3);

	return (0);
}