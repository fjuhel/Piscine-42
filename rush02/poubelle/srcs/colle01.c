/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle0X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:02:20 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/24 10:29:40 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	collexstart1(int x, t_list *list)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_list_push_back(&list, '/');
		else if (i == x)
			ft_list_push_back(&list, '\\');
		else
			ft_list_push_back(&list, '*');
		i++;
	}
	ft_list_push_back(&list, '\n');
}

void	collexend1(int x, t_list *list)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_list_push_back(&list, '\\');
		else if (i == x)
			ft_list_push_back(&list, '/');
		else
			ft_list_push_back(&list, '*');
		i++;
	}
	ft_list_push_back(&list, '\n');
}

void	colley1(int x, t_list *list)
{
	int		i;

	i = 1;
	while ((i <= x))
	{
		if ((i == 1) || (i == x))
			ft_list_push_back(&list, '*');
		else
			ft_list_push_back(&list, ' ');
		i++;
	}
	ft_list_push_back(&list, '\n');
}

void	colle1(int x, int y, t_list *list)
{
	int		i;

	i = 1;
	if ((x > 0 && y > 0) && (x < 2147483647) && (y < 2147483647))
	{
		while (i < y)
		{
			if (i == 1)
				collexstart1(x, list);
			else
				colley1(x, list);
			i++;
		}
		if (y != 1)
			collexend1(x, list);
		if (i == 1)
			collexstart1(x, list);
	}
}
