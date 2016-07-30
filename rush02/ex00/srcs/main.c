/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:19:44 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:19:45 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 4096

t_ft	*tab_colles(void)
{
	t_ft	*tab;

	tab = malloc(sizeof(*tab) * (5 + 1));
	tab[0] = &colle00;
	tab[1] = &colle01;
	tab[2] = &colle02;
	tab[3] = &colle03;
	tab[4] = &colle04;
	tab[5] = 0;
	return (tab);
}

int		print_if(char *input, t_ft *colles, int i, int prev)
{
	int		width;
	int		height;
	char	*data_ref;

	width = get_width(input);
	height = get_height(input);
	data_ref = colles[i](width, height);
	printf("\nlargeur = %d, hauteur = %d\ndata ref = \n%s", width, height, data_ref);
	//printf("Input:%s\n", input);
	if (ft_strcmp(input, data_ref) == 0)
	{
		if (prev != 0)
		{
			ft_putstr(" || ");
		}
		ft_putstr("[colle-0");
		ft_putnbr(i);
		ft_putstr("] [");
		ft_putnbr(width);
		ft_putstr("] [");
		ft_putnbr(height);
		ft_putstr("]");
		return (1);
	}
	return (0);
}

char	*get_input(void)
{
	char all[4000096];
	char buffer;
	char *p;
	char *d;
	int len;
	int pos;

	len = 0;
	p = all;
	d = all;
	while ((pos = read(0, &buffer, 1) > 0))
	{
		len += pos;
		*p++ = buffer;
	}
	printf("%s\n", d);
	return (d);
}

int		main(void)
{
	int		i;
	int		prev;
	char	*input;
	t_ft	*colles;

	i = 0;
	prev = 0;
	colles = tab_colles();
	if (!(input = get_input()))
	{
		ft_putstr("aucune");
	}
	else
	{
		printf("Input:%s\n", input);
		while (i < 5)
			if (prev == 0)
				prev = print_if(input, colles, i++, prev);
			else
				print_if(input, colles, i++, prev);
		if (prev == 0)
			ft_putstr("aucune");
	}
	ft_putchar('\n');
	return (0);
}
