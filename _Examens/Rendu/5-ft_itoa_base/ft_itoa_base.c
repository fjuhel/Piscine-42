/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*build_base(void)
{
	int i;
	int ch;
	char *char_base;

	if (!(char_base = malloc(sizeof(*char_base) * 16)))
		return (0);
	i = -1;
	while (++i < 10)
		char_base[i] = i + '0';
	ch = 'a';
	while (i < 16)
		char_base[i++] = ch++;
	return (char_base);
}

int		memory_needed(int n, int base)
{
	int neg;
	int size;

	size = 0;
	neg = ((n >= 0) ? 0 : 1);
	while (n != 0)
	{
		n /= base;
		size++;
	}
	return (size + neg);
}

char	*ft_itoa_base(int value, int base)
{
	unsigned int	n;
	int				size;
	char			*p;
	char			*dest;
	char			*char_base;
	
	if (value == 0)
		return ("0");
	char_base = build_base();
	size = memory_needed(value, base);
	n = ((value < 0 ) ? -value : value);
	if (!(dest = malloc(sizeof(*dest) * (size + 1))))
		return (NULL);
	p = dest + size;
	*p-- = '\0';
	while (n > 0)
	{
		*p-- = char_base[n % base];
		n /= base;
	}
	if (value < 0)
		*p = '-';
	return (dest);
}
