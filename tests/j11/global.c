#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef	struct s_list	t_list;

struct			s_list
{
	char		*data;
	t_list		*next;
};

t_list			*ft_create_elem(void *data);

#endif


#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(*elem) * 1);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *maillon;

	new_elem = ft_create_elem(data);
	maillon = *begin_list;
	while (maillon->next)
		maillon = maillon->next;
	maillon->next = new_elem;
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	new_elem = ft_create_elem(data);
	new_elem->next = *begin_list;
	*begin_list = new_elem;
}

int	ft_list_size(t_list *begin_list)
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

t_list	*ft_list_last(t_list *begin_list)
{
	if (!(begin_list))
		return (0);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*elem;
	t_list	*tmp;

	i = 0;
	if (ac < 1)
		return (0);
	while (i < ac)
	{
		elem = ft_create_elem(av[i++]);
		if (i != 1)
			elem->next = tmp;
		tmp = elem;
	}
	return (elem);
}

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	while (*begin_list)
	{
		if ((*begin_list)->next)
			tmp = (*begin_list)->next;
		else
			tmp = NULL;
		free(*begin_list);
		*begin_list = tmp;
	}
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;
	int n;

	i = 0;
	n = nbr;
	while (begin_list->next && i <= n)
	{
		if (i == n)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}

void	ft_list_reverse(t_list **begin_list)
{
	int		i;
	int		n;
	t_list	*tmp1;
	t_list	*tmp2;

	i = -1;
	tmp2 = 0;
	n = ft_list_size(*begin_list);
	while (++i < n)
	{
		tmp1 = (*begin_list)->next;
		(*begin_list)->next = tmp2;
		tmp2 = *begin_list;
		if (tmp1 != 0)
			*begin_list = tmp1;
	}
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void*),
							void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if((*cmp)(begin_list->data, data_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (0);
}

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


////////////////////////////////////////////////////////////////////