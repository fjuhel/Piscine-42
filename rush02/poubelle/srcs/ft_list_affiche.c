/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_affiche.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 17:19:10 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/23 18:59:16 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void		ft_list_affiche(t_list *begin_list)
{
	t_list	*list;

	list = begin_list;
	while (list)
	{
		ft_putchar(list->data);
		list = list->next;
	}
}
