/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:15 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:16 by fjuhel           ###   ########.fr       */
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
	if (!(begin_list))
		return (0);
	if (!(begin_list->next))
		return (1);
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

t_list *ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

t_list *ft_list_push_params(int ac, char **av)
{
	int i;
	t_list *elem;
	t_list *tmp;

	i = 0;
	while (i < ac)
	{
		elem = ft_create_elem(av[i++]);
		if (i != 0)
			elem->next = tmp;
		tmp = elem;
	}
	return (elem);
}

void ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	while (*begin_list)
	{
		if((*begin_list)->next)
			tmp = (*begin_list)->next;
		else
			tmp = NULL;
		free(*begin_list);
		*begin_list = tmp;
	}
}

////////////////////////////////////////////////////////////////////

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;
	// 0ème ou 1er ???
	i = 0;
	while (begin_list && i <= nbr)
	{
		if (i == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;
	int n;
	// 0ème ou 1er ???
	i = 0;
	n = nbr;
	while (begin_list && i <= n)
	{
		if (i == n)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}

////////////////////////////////////////////////////////////////////

int main(int argc, char **argv)
{
	t_list *list;
	list = ft_list_push_params(argc, argv);
	ft_print_list(list);
	printf("\nSize = %d\n", ft_list_size(list));
	printf("%s\n", ft_list_last(list)->data);

	//ft_list_clear(&list);
	//ft_print_list(list);
	//printf("\nSize = %d\n", ft_list_size(list));
	//printf("%s\n", ft_list_last(list)->data);
	ft_list_at(list, 4);
	printf("%s\n", ft_list_at(list, 4)->data);
	
	return 0;
}
