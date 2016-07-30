/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ABS(x)	((x > 0) ? x : -x)

int		*ft_rrange(int start, int end)
{
	int i;
	int len;
	int *dest;

	len = ((end > start) ? ABS(end - start) + 1 : ABS(start - end) + 1);
	if (!(dest = malloc(sizeof(*dest) * (len))))
		return (NULL);
	i = 0;
	if (end >= start)
		while (end >= start)
			dest[i++] = end--;
	else
		while (end <= start)
			dest[i++] = end++;
	return (dest);
}
