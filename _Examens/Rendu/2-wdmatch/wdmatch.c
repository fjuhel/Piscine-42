/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
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

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		find(char *str, char c, int start)
{
	while (str[start])
	{
		if (str[start] == c)
			return (start);
		start++;
	}
	return (-1);
}

void	wdmatch(char *s1, char *s2)
{
	int i;
	int tmp;
	int limit;

	i = 0;
	limit = 0;
	while (s1[i])
	{
		tmp = find(s2, s1[i], limit);
		if (tmp != -1)
			limit = tmp;
		else
			return ;
		i++;
	}
	ft_putstr(s1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
