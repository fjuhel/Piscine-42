/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:37:58 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:37:59 by fjuhel           ###   ########.fr       */
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

void	ft_list_foreach_if(t_list *begin_list,void(*f)(void*),void*data_ref,int(*cmp)());

#endif
