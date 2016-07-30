/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ABS(x)	((x > 0) ? x : -x)

int		*ft_range(int start, int end)
{
	int i;
	int len;
	int *dest;

	len = ((end > start) ? ABS(end - start) + 1 : ABS(start - end) + 1);
	if (!(dest = malloc(sizeof(*dest) * (len))))
		return (NULL);
	i = 0;
	if (start <= end)
		while (start <= end)
			dest[i++] = start++;
	else
		while (start >= end)
			dest[i++] = start--;
	return (dest);
}
