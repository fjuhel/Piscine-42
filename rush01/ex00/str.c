/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 18:28:29 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/17 18:28:30 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		check_input(char **argv)
{
	int i;
	int n;

	n = 0;
	while (argv[n])
	{
		i = 0;
		while (argv[n][i] != '\0' && ((argv[n][i] >= '1' && argv[n][i] <= '9')
			|| argv[n][i] == '.'))
			i++;
		if (n != 0 && i != 9)
			return (0);
		n++;
	}
	if (n != 10)
		return (0);
	return (1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
