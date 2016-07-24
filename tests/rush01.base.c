/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 23:28:04 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/15 23:28:06 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//".5.36...7" ".4..9.3.6" ".63.7.9.." ".95.4...2" "..45...71" "....3149." ".1.95.2.." "93.....14" "..64..78."
//"9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......."
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	**get_grille(char **str);
void	print_grille(char **str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		check(char **p, int pos);
int		solver(char **p, int pos, int *n);

int 	main(int argc, char **argv)
{
	int		n;
	int		*n_p;
	char	**grille;

	n = 0;
	n_p = &n;
	grille = (get_grille(argv));
	print_grille(grille);
	solver(grille, 0, n_p);
	print_grille(grille);
	printf("%d\n", n);
	return (0);
}

int 	solver(char **p, int pos, int *n)
{
	int k;
	int row;
	int col;

	if (pos == (9 * 9))
	{
		print_grille(p);
		*n += 1;
		return(1);
	}
	k = 0;
	row = pos / 9;
	col = pos % 9;
	if (p[row][col] != '.')
		return (solver(p, pos + 1, n));
	else
	{
		while (++k < 10)
		{
			p[row][col] = k + '0';
			if (check(p, pos))
				if (solver(p, pos + 1, n))
					return (1);
		}
		p[row][col] = '.';
	}
	return (0);
}

int 	check(char **p, int pos)
{
	int i;
	int j;
	int row;
	int col;
	int block_v;
	int block_h;

	i = -1;
	row = pos / 9;
	col = pos % 9;
	block_v = row / 3 * 3;
	block_h = col / 3 * 3;

	while (++i < 9)
		if ((p[row][i] == p[row][col] && i != col)
			|| (p[i][col] == p[row][col] && i != row))
				return (0);
	i = -1;
	while (++i < 2)
	{
		j = -1;
		while (++j < 2)
			if ((block_v + i != row && block_h + j != col)
				&& (p[block_v + i][block_h + j] == p[row][col]))
				return (0);
	}
	return (1);
}

char	**get_grille(char **str)
{
	int i;
	int j;
	char *line;
	char **grille;

	grille = malloc(sizeof(*grille) * (9 * 9 + 1));
	if (grille == NULL)
		return (NULL);
	i = 0;
	while (i < 9)
	{
		j = 0;
		line = malloc(sizeof(*line) * (9 + 1));
		while (j < 9)
		{
			line[j] = str[i + 1][j]; 
			j++;
		}
		line[j] = '\0';
		grille[i] = line;
		i++;
	}
	grille[i] = NULL;
	return (grille);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////


void	print_grille(char **str)
{
	int i;
	int j;

	i = 0;
	ft_putstr("----------------------\n");
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(str[i][j]);
			ft_putchar(' ');
			if (j % 3 == 2 && j != 8)
				ft_putchar('|');
			j++;
		}
		ft_putstr("\n");
		if (i % 3 == 2)
			ft_putstr("----------------------\n");
		i++;
	}
}
