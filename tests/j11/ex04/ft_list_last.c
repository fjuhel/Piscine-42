/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:03 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "ft_list.h"
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

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;
	new_elem = ft_create_elem(data);
	new_elem->next = *begin_list;
	*begin_list = new_elem;
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *maillon;

	new_elem = ft_create_elem(data);
	maillon = *begin_list;
	while (maillon->next)
		maillon = maillon->next;
	maillon->next = new_elem;
}

int ft_list_size(t_list *begin_list)
{
	int n;

	n = 0;
	while(begin_list)
	{
		n++;
		begin_list = begin_list->next;
	}
	return (n);
}

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

////////////////////////////////////////////////////////////////////

t_list *ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

////////////////////////////////////////////////////////////////////


int main()
{
	t_list *list;
	list = ft_create_elem("petit ");
	//ft_print_list(list);
	ft_list_push_front(&list, "Bonjour ");
	ft_list_push_back(&list, "con.");
	ft_print_list(list);
	printf("\nSize = %d\n", ft_list_size(list));
	printf("%s\n", ft_list_last(list)->data);
	return 0;
}
