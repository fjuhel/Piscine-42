/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:35 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:36 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*tmp;

	list_ptr = *begin_list;
	while (list_ptr)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			tmp->next = list_ptr->next;
			tmp = list_ptr;
			free(list_ptr);
			list_ptr = list_ptr->next;
		}
		else
		{
			tmp = list_ptr;
			list_ptr = list_ptr->next;
		}
	}
}

void	ft_list_remove_if_correction(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*tmp;

	while (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	list_ptr = *begin_list;
	while (list_ptr)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			tmp->next = list_ptr->next;
			free(list_ptr);
			list_ptr = tmp->next;
		}
		else
		{
			tmp = list_ptr;
			list_ptr = list_ptr->next;
		}
	}
}