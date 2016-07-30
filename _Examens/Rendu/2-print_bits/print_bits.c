/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int		i;
	int		n;
	char	*p;
	char	bin[9];

	i = 0;
	p = bin + 8;
	*p-- = '\0';
	n = octet;
	while (n > 0)
	{
		*p-- = n % 2 + '0';
		n /= 2;
		i++;
	}
	while (i++ < 8)
		*p-- = '0';
	while (*++p)
		ft_putchar(*p);
}
