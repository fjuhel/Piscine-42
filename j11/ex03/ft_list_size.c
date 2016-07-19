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

//////////////////////////////////////////////////


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

////////////////////////////////////////////////////

int main()
{
	t_list *list;
	list = ft_create_elem("Bonjour ");
	ft_list_push_front(&list, "petit.");
	ft_list_push_front(&list, "con.");
	ft_print_list(list);
	printf("%d", ft_list_size(list));
	return 0;
}