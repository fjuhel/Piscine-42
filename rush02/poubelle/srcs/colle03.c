/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle0X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:02:20 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/24 10:30:31 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	collex3(int x, t_list *list)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_list_push_back(&list, 'A');
		else if (i == x)
			ft_list_push_back(&list, 'C');
		else
			ft_list_push_back(&list, 'B');
		i++;
	}
	ft_list_push_back(&list, '\n');
}

void	colley3(int x, t_list *list)
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

void	colle3(int x, int y, t_list *list)
{
	int		i;

	i = 1;
	if ((x > 0 && y > 0) && (x < 2147483647) && (y < 2147483647))
	{
		while (i < y)
		{
			if (i == 1)
				collex3(x, list);
			else
				colley3(x, list);
			i++;
		}
		if (i == 1 || i == y)
			collex3(x, list);
	}
}
