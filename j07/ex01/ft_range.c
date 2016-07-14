/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:29:59 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/13 13:30:00 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int *p;

	range = NULL;
	if (min >= max)
		return (range);
	range = malloc(sizeof(*range) * (max - min));
	p = range;
	while (min < max)
		*p++ = min++;
	return (range);
}
