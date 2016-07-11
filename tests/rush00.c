/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 18:23:56 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/09 18:23:58 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void colle_v1(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0)
			{
				if (j == 0)
					ft_putchar('/');
				else if (j == x - 1)
					ft_putchar('\\');
				else
					ft_putchar('*');
			}
			else if (i == y - 1)
			{
				if (j == 0)
					ft_putchar('\\');
				else if (j == x - 1)
					ft_putchar('/');
				else
					ft_putchar('*');
			}
			else
			{
				if ((j == 0) || (j == x - 1))
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
