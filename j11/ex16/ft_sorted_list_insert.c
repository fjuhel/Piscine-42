/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:56 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:57 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data,int (*cmp)())
{
	t_list *list_ptr;
	t_list *elem;

	list_ptr = *begin_list;
	elem = ft_create_elem(data);
	if (list_ptr != 0)
	{
		if ((*cmp)(elem->data, list_ptr->next->data) <= 0)
		{
			elem->next = list_ptr->next;
			*begin_list = elem;
		}
		while ((*cmp)(elem->data, list_ptr->data) > 0 && list_ptr->next != 0)
		{
			if ((*cmp)(elem->data, list_ptr->next->data) <= 0)
			{
				elem->next = list_ptr->next;
				list_ptr->next = elem;
			}
			list_ptr = list_ptr->next;
		}
	}
}
