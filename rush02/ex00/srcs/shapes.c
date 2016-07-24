/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:34:20 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:34:21 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*square(int x)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * x + x + 1))))
		return (NULL);
	if (x > 0)
	{
		i = x;
		while (i-- > 0)
		{
			j = x;
			while (j-- > 0)
				if (i == 0 || i == x - 1 || j == 0 || j == x - 1)
					dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'o';
				else
					dest[((i - 1) * x) + (j - 1) + (i - 1)] = ' ';
			ft_putchar('\n');
		}
	}
	dest[(x * x + x + 1)] = '\0';
	return (dest);
}

char	*rectangle(int x, int y)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * y + y + 1))))
		return (NULL);
	if (x > 0 && y > 0)
	{
		i = x;
		while (i-- > 0)
		{
			j = y;
			while (j-- > 0)
				if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
					ft_putchar('o');
				else
					ft_putchar(' ');
			ft_putchar('\n');
		}
	}
	dest[(x * y + y + 1)] = '\0';
	return (dest);
}

char	*triangle(int x)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * x + x + 1))))
		return (NULL);
	if (x > 0)
	{
		i = x;
		while (i-- > 0)
		{
			j = i + 1;
			while (j-- > 0)
				if (i == 0 || i == x - 1 || j == 0 || j == i)
					ft_putchar('o');
				else
					ft_putchar(' ');
			ft_putchar('\n');
		}
	}
	dest[(x * x + x + 1)] = '\0';
	return (dest);
}

char	*triangle_rev(int x)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * x + x + 1))))
		return (NULL);
	if (x > 0)
	{
		i = 0;
		while (i++ < x)
		{
			j = 0;
			while (j++ < i)
				if (i == 1 || i == x || j == 1 || j == i)
					ft_putchar('o');
				else
					ft_putchar(' ');
			ft_putchar('\n');
		}
	}
	dest[(x * x + x + 1)] = '\0';
	return (dest);
}

char	*diamond(int x)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * x + x + 1))))
		return (NULL);
	i = -1;
	j = 1;
	while (++i < x)
	{
		j = ((i < x / 2) ? (1 + 2 * i) : (x - 2 * (i - x / 2)));
		k = (x - j) / 2;
		while (k-- > 0)
			ft_putchar(' ');
		k = j;
		while (k-- > 0)
			if (k == 0 || k == j - 1)
				ft_putchar('o');
			else
				ft_putchar(' ');
		ft_putchar('\n');
	}
	dest[(x * x + x + 1)] = '\0';
	return (dest);
}
