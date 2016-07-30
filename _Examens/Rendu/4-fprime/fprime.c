/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:53:19 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/28 19:53:20 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int		ft_is_prime(int nb)
{
	int i;
	int w;

	if (nb < 2)
		return (0);
	if ((nb == 2) || (nb == 3))
		return (1);
	else if ((nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	i = 5;
	w = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += w;
		w = 6 - w;
	}
	return (1);
}

void	fprime(int n)
{
	int i;
	int yet;

	i = 0;
	yet = 0;
	if (n == 0 || n == 1)
	{
		ft_putnbr(n);
		return ;
	}
	while (i <= n)
	{
		if (ft_is_prime(i) && n % i == 0)
		{
			if (yet)
				ft_putchar('*');
			ft_putnbr(i);
			yet = 1;
			n /= i;
		}
		else
			i++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}