/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_cmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 10:12:46 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/24 11:01:42 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_list_cmp(t_list *list1, t_list *list2)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = list1;
	tmp2 = list2->next;
	while (tmp1)
	{
		if (tmp1->data != tmp2->data)
			return (tmp1->data - tmp2->data);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return (0);
}
