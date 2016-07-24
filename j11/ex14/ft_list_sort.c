/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:48 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:49 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int n;

	n = 0;
	if (!(begin_list))
		return (0);
	if (!(begin_list->next))
		return (1);
	while (begin_list)
	{
		n++;
		begin_list = begin_list->next;
	}
	return (n);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i;
	int		j;
	int		size;
	void	*tmp;
	t_list	*list_ptr;

	i = -1;
	list_ptr = *begin_list;
	size = ft_list_size(*begin_list);
	while (++i < size)
	{
		j = -1;
		while (++j < size - 2)
		{
			if ((*cmp)(list_ptr->data, list_ptr->next->data) > 0)
			{
				tmp = list_ptr->data;
				list_ptr->data = list_ptr->next->data;
				list_ptr->next->data = tmp;
			}
			list_ptr = list_ptr->next;
		}
		list_ptr = *begin_list;
	}
}
