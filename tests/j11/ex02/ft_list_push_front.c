/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:38:51 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:38:53 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

t_list *ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(*elem) * 1);
	elem->data = data;
	elem->next = NULL;
}
////////////////////////////////////////////////////////////
void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;
	new_elem = ft_create_elem(data);
	new_elem->next = *begin_list;
	*begin_list = new_elem;
}
/////////////////////////////////////////////////////////////

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int main()
{
	t_list *list;
	list = ft_create_elem("Bonjour ");
	ft_list_push_front(&list, "petit.");
	ft_print_list(list);
	return 0;
}

