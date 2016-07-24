/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 20:46:39 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 20:46:40 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(*elem) * 1)))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	pf(t_list **begin_list, void *data)
{
	t_list *new_elem;

	new_elem = ft_create_elem(data);
	new_elem->next = *begin_list;
	*begin_list = new_elem;
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

void	*pop(t_list **begin_list)
{
	void	*tmp_d;
	t_list	*tmp_p;

	if (*begin_list == NULL)
		return (NULL);
	tmp_d = (*begin_list)->data;
	tmp_p = (*begin_list)->next;
	free(*begin_list);
	*begin_list = tmp_p;
	return (tmp_d);
}

void	print_list(t_list *list)
{
	ft_putchar(':');
	while (list)
	{
		ft_putstr(list->data);
		if (list->next)
			ft_putstr(" -> ");
		list = list->next;
	}
	ft_putchar('\n');
}
