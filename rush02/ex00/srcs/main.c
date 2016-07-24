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
	int		pos;
	int		len;
	char	buff[BUFFER_SIZE];
	t_list	*list;

	len = 0;
	while ((pos = read(0, buff, BUFFER_SIZE)))
	{
		buff[pos] = '\0';
		len += pos;
		ft_list_push_back(&list, buff);
	}
	return (list_to_str(list, len));
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
