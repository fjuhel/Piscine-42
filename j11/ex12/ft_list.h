/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:38:05 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:38:05 by fjuhel           ###   ########.fr       */
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

void			ft_list_remove_if(t_list **begin_list,
									void *data_ref, int (*cmp)());

#endif
