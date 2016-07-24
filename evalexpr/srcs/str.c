/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 23:16:44 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/22 23:16:45 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

int		ft_atoi(char *str)
{
	int	i;
	int	neg;
	int n;

	i = 0;
	neg = 1;
	n = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = -1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		n *= 10;
		n += ((int)str[i] - 48);
		i++;
	}
	return (n * neg);
}

char	*ft_itoa(int i)
{
	static char	buf[21];
	char		*p;

	p = buf + 20;
	if (i == 0)
	{
		p = "0";
		return (p);
	}
	else
	{
		while (i != 0)
		{
			*--p = '0' + (i % 10);
			i /= 10;
		}
		return (p);
	}
	return (p);
}
