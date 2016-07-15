/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:06:58 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:06:59 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int n;

	n = 0;
	while (*src != '\0' && n++ < size - 1)
		*dest++ = *src++;
	while (*src++ != '\0')
		n++;
	*dest = '\0';
	return (n - 1);
}
