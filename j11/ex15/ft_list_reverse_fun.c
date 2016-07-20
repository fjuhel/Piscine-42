/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:52 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:53 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		j;
	int		size;
	void	*tmp;
	t_list 		*debut;

	debut = begin_list;
	i = -1;
	size = ft_list_size(begin_list);
	while (++i < size - 1)
	{
		j = -1;
		while (++j < size - 1 - i)
		{
			tmp = begin_list->data;
			begin_list->data = begin_list->next->data;
			begin_list->next->data = tmp;
			begin_list = begin_list->next;
		}
		begin_list = debut;
	}
}
