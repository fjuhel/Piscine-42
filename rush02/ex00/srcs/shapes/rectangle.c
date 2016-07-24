/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:34:49 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:34:50 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shapes.h"

void	rectangle(int x, int y)
{
	int i;
	int j;

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
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	rectangle(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
