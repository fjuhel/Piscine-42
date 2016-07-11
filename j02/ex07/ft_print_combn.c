/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 17:54:54 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/07 17:54:56 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		mypow(int a, int b)
{
	int		i;
	int		n;

	n = 1;
	i = 0;
	while (i < b)
	{
		n *= a;
		i++;
	}
	return (n);
}

int		croissant(int n)
{
	int digit1;
	int	digit2;
	int nbr;

	nbr = n;
	while (nbr > 0)
	{
		if (nbr == n)
		{
			digit1 = nbr % 10;
			nbr /= 10;
		}
		else
		{
			digit2 = nbr % 10;
			if (digit1 <= digit2)
			{
				return (0);
			}
			digit1 = digit2;
			nbr /= 10;
		}
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int i;

	i = 1;
	while (i < mypow(10, n))
	{
		if (croissant(i))
		{
			if (i != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			if (i < 10)
			{
				ft_putchar('0');
			}
			ft_putnbr(i);
		}
		i++;
	}
}
