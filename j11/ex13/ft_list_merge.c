/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:43 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:46 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *maillon;
	
	if (*begin_list1 == 0 && begin_list2 != 0)
		*begin_list1 = begin_list2;
	else if (begin_list2 != 0)
	{
		maillon = *begin_list1;
		while (maillon->next)
			maillon = maillon->next;
		maillon->next = begin_list2;
	}
}
