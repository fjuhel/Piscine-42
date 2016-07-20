/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:19 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:20 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	int		i;
	int		n;
	t_list	*tmp1;
	t_list	*tmp2;

	i = -1;
	tmp2 = 0;
	n = ft_list_size(*begin_list);
	while (++i < n)
	{
		tmp1 = (*begin_list)->next;
		(*begin_list)->next = tmp2;
		tmp2 = *begin_list;
		if (tmp1 != 0)
			*begin_list = tmp1;
	}
}
