/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:46:33 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/21 18:46:35 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void				*btree_search_item(t_btree *root, void *data_ref,
										int (*cmpf)(void*, void*))
{
	if (root != 0)
	{
		if (root->left != 0)
			btree_apply_prefix(root->left, applyf);
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		else if (root->right != 0)
			btree_apply_prefix(root->right, applyf);
	}
	return (0);
}
