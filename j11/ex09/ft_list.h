/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:37:53 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:37:54 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef	struct s_list	t_list;

struct			s_list
{
	char		*data;
	t_list		*next;
};

void			ft_list_foreach(t_list *begin_list, void (*f)(void *));

#endif
