#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		memory_needed(int nbr)
{
	int n;

	n = 0;
	while (nbr != 0)
	{
		nbr /= 16;
		n++;
	}
	return (n);
}

char *to_hex(int n)
{
	int i;
	char *dest;
	char base16[16] = {'0','1','2','3','4','5','6','7','8','9',
						'a','b','c','d','e','f'};

	dest = malloc(sizeof(*dest) * (memory_needed(n) + 1));
	i = memory_needed(n);
	dest[i--] = '\0';
	while (n > 0)
	{
		dest[i--] = base16[n % 16];
		n /= 16;
	}
	if (memory_needed(n) == 1)
		dest[0] = '0';
	return (dest);
}

void	col_n(int n)
{
	int mem;

	mem = memory_needed(n);
	while (7 - mem++ > 0)
		write(1, "0", 1);
	write(1, to_hex(n), memory_needed(n));
	write(1, " ", 1);
}

void	display_file_hex(int fd)
{
	int		n;
	char	*hex1;
	char	*hex2;
	char	buffer[2];

	n = 0;
	// print start line.
	col_n(n);
	while (read(fd, buffer, sizeof(buffer)) != 0)
	{
		
		hex1 = to_hex(buffer[0]);
		hex2 = to_hex(buffer[1]);
		write(1, hex2, memory_needed(buffer[1]));
		write(1, hex1, memory_needed(buffer[0]));
		write(1, " ", 1);
		n += 2;
		if (n % 16 == 0)
		{
			write(1,"\n",1);
			col_n(n);
		}
	}
	if (n % 16 != 0)
		{
			write(1,"\n",1);
			col_n(n-2);
			write(1,"\n",1);

		}
	free(hex1);
	free(hex2);
}

void	display_file(int fd)
{
	int		n;
	char	*hex1;
	char	*hex2;
	char	buffer;

	n = 0;
	// print start line.
	col_n(n);
	while (read(fd, &buffer, sizeof(buffer)) != 0)
	{
		write(1, &buffer, 1);
		write(1, " ", 1);
		n++;
		if (n % 16 == 0)
		{
			write(1,"\n",1);
			col_n(n);
		}
	}
	if (n % 16 != 0)
		{
			write(1,"\n",1);
			col_n(n-2);
			write(1,"\n",1);

		}
	free(hex1);
	free(hex2);
}






int main(int argc, char **argv)
{
	int fd;
	fd = open(argv[1], O_RDONLY);
	display_file(fd);
	close(fd);
	return 0;
}

