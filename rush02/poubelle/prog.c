/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdel-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 15:20:45 by mdel-fon          #+#    #+#             */
/*   Updated: 2016/07/23 17:48:52 by mdel-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUF_SIZE 4096

int	ft_data(int x, int y, char *str)
{
	int i;
	int num;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	if (str[0] == 'o')
		num = 0;
	if (str[0] == '/')
		num = 1;
	if (str[0] == 'A')
	{
		if ((x == 1) && (y == 1))
		{
			write (1, "[colle-2] [1] [1] || [colle-3] [1] [1] || [colle-4] [1] [1]", 59);
			return (0);
		}
		if ((y == 1) && (str[i] == 'C'))
		{
			
			write (1, "[colle-2] [1] [1] || [colle-3] [1] [1]", 38);
			return (0);
		}
		if ((x == 1) && (str[i] == 'C'))
		{
			
			write (1, "[colle-2] [1] [1] || [colle-4] [1] [1]", 38);
			return (0);
		}
		if ((str[i] == 'C') && (str[x - 1] == 'A'))
			num = 2;
		if ((str[i] == 'C') && (str[x - 1] == 'C'))
			num = 3;
		if ((str[i] == 'A') && (str[x - 1] == 'C'))
			num = 4;
	}
	
}

int ft_writing(int x, int y, int num)
{
	write (1, "[colle-", 7);
	write (1, &num, 1);
	write (1, "] [", 3);
	write (1, &x, 1);
	write (1, "] [", 3);
	write (1, &y, 1);
	write (1, "]\n", 2);	
	return (0);
}

int	ft_function(char *str)
{
	int i;
	int x;
	int y;

	x = 0;
	y = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '\n') && (x != 0))
		{
			y++;
		}
		if ((str[i] == '\n') && (x == 0))
		{
			x = i;
			y++;
		}
		i++;
	}
	write (1, "x = ", 5);
	write (1, &x, 1);
	write (1, "\n", 1);
	ft_data(x, y, str)
	return (0);
}

int	main(int argc, char **argv)
{
	int fd;
	int ret;
	int num;
	char buf[BUF_SIZE];

	if (fd == -1)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_function(buf);
	return (0);
}
