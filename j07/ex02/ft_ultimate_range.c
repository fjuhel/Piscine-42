/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:30:04 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/13 13:30:05 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int size;

	size = max - min;
	if (min >= max)
		return (0);
	array = malloc(sizeof(*array) * size);
	*range = array;
	while (min < max)
		*array++ = min++;
	return (size);
}
