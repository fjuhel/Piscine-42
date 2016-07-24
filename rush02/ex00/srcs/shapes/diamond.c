/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamond.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:34:46 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:34:48 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shapes.h"

void	diamond(int x, int i)
{
	int j;
	int k;

	if (x > 0)
	{
		j = 1;
		while (++i < x)
		{
			if (i < x / 2)
				j = 1 + 2 * i;
			else
				j = x - 2 * (i - x / 2);
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
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_atoi(argv[1]) % 2 == 0)
		return (1);
	diamond(ft_atoi(argv[1]), -1);
	return (0);
}
