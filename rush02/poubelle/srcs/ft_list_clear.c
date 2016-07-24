/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:21:45 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/24 15:50:14 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*next_list;

	list = *begin_list;
	next_list = NULL;
	while (list)
	{
		if (list->next)
			next_list = list->next;
		else
			next_list = NULL;
		free(list);
		list = next_list;
	}
}
