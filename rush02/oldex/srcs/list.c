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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *maillon;

	new_elem = ft_create_elem(data);
	if (*begin_list == 0)
	{
		*begin_list = new_elem;
	}
	else
	{
		maillon = *begin_list;
		while (maillon->next)
			maillon = maillon->next;
		maillon->next = new_elem;
	}
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
