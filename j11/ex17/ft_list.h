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

#ifndef LIST_H
# define LIST_H

typedef	struct s_list t_list;

 struct s_list
{
	char	*data;
	t_list	*next;
};

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
								int (*cmp)());

#endif


