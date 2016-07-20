/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:38:19 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:38:20 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef	struct s_list t_list;

 struct s_list
{
	char	*data;
	t_list	*next;
};

t_list			*ft_create_elem(void *data);
void		ft_sorted_list_insert(t_list **begin_list,
									void*data,int(*cmp)());

#endif


