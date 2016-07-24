/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:37:17 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:37:18 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
#include <stdlib.h>

typedef	struct s_list t_list;

 struct s_list
{
	char	*data;
	t_list	*next;
};

t_list *ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);

#endif
