/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:46:55 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/21 18:46:56 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef struct			s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}						t_btree;

typedef	struct s_list	t_list;

struct					s_list
{
	char				*data;
	t_list				*next;
};

t_list					*ft_create_elem(void *data);
void					ft_list_push_back(t_list **begin_list, void *data);
void					pop_front(t_list **begin_list);
void					btree_apply_by_level(t_btree *root,
void					(*applyf)(void *item, intcurrent_level,
									int is_first_elem));

#endif
