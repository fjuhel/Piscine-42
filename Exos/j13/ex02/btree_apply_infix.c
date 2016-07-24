/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:45:32 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/21 18:45:38 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
	if (root != 0)
	{
		if (root->left != 0)
			btree_apply_infix(root->left, applyf);
		applyf(root->item);
		if (root->right != 0)
			btree_apply_infix(root->right, applyf);
	}
}
