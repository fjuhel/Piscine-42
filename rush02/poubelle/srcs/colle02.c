/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle0X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:02:20 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/24 10:30:11 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	collexstart2(int x, t_list *list)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if ((i == 1) || (i == x))
			ft_list_push_back(&list, 'A');
		else
			ft_list_push_back(&list, 'B');
		i++;
	}
	ft_list_push_back(&list, '\n');
}

void	collexend2(int x, t_list *list)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if ((i == 1) || (i == x))
			ft_list_push_back(&list, 'C');
		else
			ft_list_push_back(&list, 'B');
		i++;
	}
	ft_list_push_back(&list, '\n');
}

void	colley2(int x, t_list *list)
{
	int		i;

	i = 1;
	while ((i <= x))
	{
		if ((i == 1) || (i == x))
			ft_list_push_back(&list, 'B');
		else
			ft_list_push_back(&list, ' ');
		i++;
	}
	ft_list_push_back(&list, '\n');
}

void	colle2(int x, int y, t_list *list)
{
	int		i;

	i = 1;
	if ((x > 0 && y > 0) && (x < 2147483647) && (y < 2147483647))
	{
		while (i < y)
		{
			if (i == 1)
				collexstart2(x, list);
			else
				colley2(x, list);
			i++;
		}
		if (y != 1)
			collexend2(x, list);
		if (i == 1)
			collexstart2(x, list);
	}
}
