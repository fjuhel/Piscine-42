/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:15 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:16 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;
	int n;

	i = 0;
	n = nbr;
	while (begin_list->next && i <= n)
	{
		if (i == n)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}
