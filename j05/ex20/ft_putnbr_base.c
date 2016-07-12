/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:07:14 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:07:16 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
  int	result;
  int	diviseur;
  int	size_base;

  size_base = ft_strlen(base);
  if (nbr < 0)
    {
      ft_putchar('-');
      nbr = -nbr;
    }
  diviseur = 1;
  while ((nbr/diviseur) >= size_base)
    diviseur = diviseur * size_base;
  while (diviseur > 0)
    {
      result = (nbr / diviseur) % size_base;
      ft_putchar(base[result]);
      diviseur = diviseur / size_base;
    }
}

int		check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base2(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}


int main()
{
	int k = 123;
	char base1[] = "01";
	char base2[] = "0123456789ABCDEF";
	char base3[] = "poneyvif";
	char base4[] = "mrdoc";
	ft_putnbr_base(k,base1);
	ft_putchar('\n');
	ft_putnbr_base(k,base2);
	ft_putchar('\n');
	ft_putnbr_base(k,base3);
	ft_putchar('\n');
	ft_putnbr_base(k,base4);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putnbr_base2(k,base1);
	ft_putchar('\n');
	ft_putnbr_base2(k,base2);
	ft_putchar('\n');
	ft_putnbr_base2(k,base3);
	ft_putchar('\n');
	ft_putnbr_base2(k,base4);
	return 0;
}