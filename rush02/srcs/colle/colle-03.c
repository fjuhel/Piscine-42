/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 19:06:55 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/09 19:06:56 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

int		colle03(int x, int y)
{
	int i;
	int j;

	if (x <= 0 || y <= 0)
		return (0);
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 || i == y) && j == 1)
				ft_putchar('A');
			else if ((i == 1 || i == y) && j == x)
				ft_putchar('C');
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	colle03(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
