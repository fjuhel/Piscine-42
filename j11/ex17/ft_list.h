/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:38:29 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:38:31 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct s_list	t_list;

struct			s_list
{
	char		*data;
	t_list		*next;
};

void			swap(t_list **list1, t_list **list2, int debut);
void			ft_sorted_list_insert(t_list **begin_list,
										void *data, int (*cmp)());

#endif
