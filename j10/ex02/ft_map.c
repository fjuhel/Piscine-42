/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 14:41:19 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 14:41:19 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *dest;

	i = -1;
	if (!(dest = malloc(sizeof(*dest) * length)))
		return (NULL);
	while (++i < length)
		dest[i] = f(tab[i]);
	return (dest);
}
