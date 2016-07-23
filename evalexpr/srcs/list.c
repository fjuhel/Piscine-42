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

void	*ft_list_pop(t_list **begin_list)
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