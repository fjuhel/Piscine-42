/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:40:03 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	swap(t_list **list1, t_list **list2, int debut)
{
	t_list *tmp;

	if (debut == 1)
	{
		tmp = (*list2)->next;
		(*list2)->next = *list1;
		*list1 = *list2;
		*list2 = tmp;
	}
	else
	{
		tmp = (*list2)->next;
		(*list2)->next = (*list1)->next;
		(*list1)->next = *list2;
		*list1 = *list2;
		*list2 = tmp;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
								int (*cmp)())
{
	t_list *list_ptr;

	if (*begin_list1 == 0)
		*begin_list1 = begin_list2;
	else if (begin_list2 != 0)
	{
		if ((*cmp)((*begin_list1)->data, begin_list2->data) >= 0)
			swap(begin_list1, &begin_list2, 1);
		list_ptr = *begin_list1;
		while (list_ptr->next && begin_list2)
		{
			if ((*cmp)(list_ptr->data, begin_list2->data) < 0 &&
				(*cmp)(list_ptr->next->data, begin_list2->data) >= 0)
				swap(&list_ptr, &begin_list2, 0);
			else
				list_ptr = list_ptr->next;
		}
		if (list_ptr->next == 0 && begin_list2 != 0)
			list_ptr->next = begin_list2;
	}
}
