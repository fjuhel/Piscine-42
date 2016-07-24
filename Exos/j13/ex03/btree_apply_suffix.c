/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:45:53 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/21 18:45:57 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void*))
{
	if (root != 0)
	{
		if (root->left != 0)
			btree_apply_suffix(root->left, applyf);
		if (root->right != 0)
			btree_apply_sufffix(root->right, applyf);
		applyf(root->item);
	}
}
