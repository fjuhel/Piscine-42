/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:39:06 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/19 18:39:07 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*elem;
	t_list	*tmp;

	i = 0;
	if (ac < 1)
		return (0);
	while (i < ac)
	{
		elem = ft_create_elem(av[i++]);
		if (i != 1)
			elem->next = tmp;
		tmp = elem;
	}
	return (elem);
}
