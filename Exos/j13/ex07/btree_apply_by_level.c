/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:46:53 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/21 18:46:59 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

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

int		ft_get_level(btree *root, btree *cmp, int level)
{
	int next_level;

	if (root == 0)
		return (0);
	if (rooot = cmp)
		return (level);
	next_level = ft_get_level(root->left, cmp, level + 1);
	if (next_level != 0)
		return (downlevel);
	next_level = ft_get_level(root->right, cmp, level + 1);
	return (downlevel);
}

void	btree_apply_by_level(t_btree *root,
			void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_list	*queue;

	if (root != 0)
	{
		queue = ft_create_elem(root);
		applyf(queue->item, 0, 0);
		while (ft_list_size(queue) != 0)
		{
			if (queue->left)
				ft_list_push_back(&queue, queue->left);
			if (queue->right)
				ft_list_push_back(&queue, queue->right);
			applyf(queue->item, ft_get_level(root, queue, 0), first);
			tmp = queue->next;
			free(queue);
			queue = next;
		}
	}
}
