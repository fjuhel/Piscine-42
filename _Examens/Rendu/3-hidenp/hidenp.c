/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		find_after(char *str, char to_find, int limit)
{
	while (str[limit])
		if (str[limit++] == to_find)
			return (limit);
	return (0);
}

int		hidenp(char *s1, char *s2)
{
	int tmp;
	int limit;

	limit = 0;
	if (*s1 == 0)
		return (1);
	while (*s1)
	{
		tmp = find_after(s2, *s1, limit);
		if (tmp != 0)
			limit = tmp;
		else
			return (0);
		s1++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (hidenp(argv[1], argv[2]))
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}