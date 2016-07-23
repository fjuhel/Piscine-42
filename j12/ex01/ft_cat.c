
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_err(char *str)
{
	while (*str)
		write(2, str++, 1);
}

int cat_fd(int ifd, int ofd)
{
	char buffer[4096];
	ssize_t nbytes;
	while ((nbytes = read(ifd, buffer, sizeof(buffer))) > 0)
	{
		if (write(ofd, buffer, nbytes) != nbytes)
			return -1;
	}
	return (nbytes < 0) ? -1 : 0;
}
int main(int argc, char **argv)
{
	int i;
	int fd;
	if (argc == 1)
	{
		if (cat_fd(0, 1) != 0)
			ft_putstr_err("failed to copy standard input\n");
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
			{
				ft_putstr_err("failed to open ");
				ft_putstr_err(argv[i]);
				ft_putstr_err("for reading\n");
			}
			else
			{
				if (cat_fd(fd, 1) != 0)
				{
					ft_putstr_err("failed to copy ");
					ft_putstr_err(argv[i]);
					ft_putstr_err("to standard output\n");
				}
				close(fd);
			}
		}
	}
	return (0);
}