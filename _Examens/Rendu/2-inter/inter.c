/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
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

int		find_before(char *str, char to_find, int limit)
{
	int i;

	i = 0;
	while (str[i] && i < limit)
		if (str[i++] == to_find)
			return (1);
	return (0);
}

int		find(char *str, char to_find)
{
	while (*str)
		if (*str++ == to_find)
			return (1);
	return (0);
}

void	inter(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s1[++i])
		if (find(s2, s1[i]) && find_before(s1, s1[i], i) == 0)
			ft_putchar(s1[i]);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
