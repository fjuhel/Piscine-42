/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:38:15 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:38:15 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
# include <stdlib.h>

typedef	struct s_list t_list;

 struct s_list
{
	char	*data;
	t_list	*next;
};

void	ft_list_reverse_fun(t_list *begin_list);

#endif
