/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 18:28:05 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/17 18:28:06 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		check(int **p, int row, int col, int n)
{
	int i;
	int row_s;
	int col_s;

	i = -1;
	row_s = (row / 3) * 3;
	col_s = (col / 3) * 3;
	while (++i < 9)
		if (p[row][i] == n || p[i][col] == n
			|| p[row_s + (i % 3)][col_s + (i / 3)] == n)
			return (0);
	return (1);
}

int		solver(int **p, int pos, int *n, int *ord)
{
	int k;

	if (pos == 81)
	{
		if (++*n == 1)
			g_grille_solved = deep_copy_int(p);
		return ((*n > 1) ? 1 : 0);
	}
	if (p[ord[pos] / 9][ord[pos] % 9] != 0)
		return (solver(p, pos + 1, n, ord));
	else
	{
		k = 0;
		while (++k < 10)
		{
			if (check(p, ord[pos] / 9, ord[pos] % 9, k))
			{
				p[ord[pos] / 9][ord[pos] % 9] = k;
				if (solver(p, pos + 1, n, ord))
					return (1);
				p[ord[pos] / 9][ord[pos] % 9] = 0;
			}
		}
	}
	return (0);
}

void	print(int **str)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			ft_putnbr(str[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putnbr(str[i][j]);
		ft_putstr("\n");
		i++;
	}
}
