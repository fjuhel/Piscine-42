#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(*elem) * 1);
	elem->data = data;
	elem->next = NULL;
}

#include <stdio.h>
int main()
{
	t_list *el;
	el = ft_create_elem("Bonjour petit");
	printf("%s  %p\n", el->data, el->next);
	return 0;
}