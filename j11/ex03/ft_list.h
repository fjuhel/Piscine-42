/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:37:21 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:37:21 by fjuhel           ###   ########.fr       */
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

int				ft_list_size(t_list *begin_list);

#endif
