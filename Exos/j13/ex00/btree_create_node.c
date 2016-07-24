/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:40:28 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/21 18:41:14 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*node;

	if (!(node = malloc(sizeof(*node))))
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->item = item;
	return (node);
}
