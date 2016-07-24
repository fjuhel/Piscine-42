/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 20:46:10 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 20:46:12 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include "main.h"

typedef	struct s_list	t_list;

struct			s_list
{
	char		*data;
	t_list		*next;
};

t_list			*ft_create_elem(void *data);
void			pf(t_list **begin_list, void *data);
int				ft_list_size(t_list *begin_list);
void			*pop(t_list **begin_list);
void			print_list(t_list *list);

int				evaluate_infix(char **expr, t_list **vs, t_list **os);

#endif
