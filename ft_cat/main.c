#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

extern void  ft_cat(int fd);

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
		ft_cat(0);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			ft_cat(fd);
			close(fd);
		}
	}
    return (0);
}