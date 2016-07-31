/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:53:19 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/28 19:53:20 by fjuhel           ###   ########.fr       */
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

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		i;
	int		j;
	int		size;
	void	*tmp;
	t_list	*list_ptr;

	i = -1;
	list_ptr = lst;
	size = ft_list_size(lst);
	while (++i < size)
	{
		j = -1;
		while (++j < size - 1)
		{
			if ((*cmp)(*(int*)(list_ptr->data), *(int*)(list_ptr->next->data)) == 0)
			{
				tmp = list_ptr->data;
				list_ptr->data = list_ptr->next->data;
				list_ptr->next->data = tmp;
			}
			list_ptr = list_ptr->next;
		}
		list_ptr = lst;
	}
	return (lst);
}
