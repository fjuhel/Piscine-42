/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:07:06 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 16:07:06 by fjuhel           ###   ########.fr       */
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

int		ft_num(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
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
