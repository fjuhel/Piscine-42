/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:46:18 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/21 18:46:25 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void*, void*))
{
	t_btree	new_node;

	new_node = btree_create_node(item);
	if (root != 0)
	{
		if (cmpf(root->item, item) > 0)
		{
			if (root->left != 0)
				btree_insert_data(root->left, item, cmpf);
			else
				root->left = new_node;
		}
		if (cmpf(root->item, item) <= 0)
		{
			if (root->right != 0)
				btree_insert_data(root->right, item, cmpf);
			else
				root->right = new_node;
		}
	}
	else
		*root = new_node;
}
