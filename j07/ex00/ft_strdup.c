/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:29:53 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/13 13:29:55 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		size;

	size = 0;
	while (src[size])
		size++;
	str = malloc(size + 1);
	if (str == NULL)
		return (str);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
