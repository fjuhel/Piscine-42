/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:34:12 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:34:15 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(*elem) * 1)))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	new_elem = ft_create_elem(data);
	new_elem->next = *begin_list;
	*begin_list = new_elem;
}

void	ft_list_push_back(t_list **begin_list, char *data)
{
	t_list		*list;

	list = *begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

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

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		if (list->next)
			ft_putstr(" -> ");
		list = list->next;
	}
	ft_putchar('\n');
}
