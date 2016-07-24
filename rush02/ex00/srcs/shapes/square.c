/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:34:51 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:34:52 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shapes.h"

void	square(int x)
{
	int i;
	int j;

	if (x > 0)
	{
		i = x;
		while (i-- > 0)
		{
			j = x;
			while (j-- > 0)
				if (i == 0 || i == x - 1 || j == 0 || j == x - 1)
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
	square(ft_atoi(argv[1]));
	return (0);
}
