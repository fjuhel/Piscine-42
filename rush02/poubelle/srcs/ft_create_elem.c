/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 09:52:41 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/23 16:25:25 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

t_list		*ft_create_elem(char data)
{
	t_list		*list;

	list = malloc(sizeof(t_list));
	if (list != NULL)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
