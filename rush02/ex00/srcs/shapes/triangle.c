/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:34:53 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:34:55 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shapes.h"

void	triangle1(int x)
{
	int i;
	int j;

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
}

void	triangle(int x)
{
	int i;
	int j;

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
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	triangle(ft_atoi(argv[1]));
	return (0);
}
