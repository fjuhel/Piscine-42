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

void	find_and_replace(char *src, char *base)
{
	int i;

	while (*src != '\0')
	{
		i = 0;
		while (base[i] != '\0')
		{
			if (*src == i)
				*src++ = base[i++];
		}
	}
}


void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int n;

	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	if (n > 9)
	{
		ft_putnbr_base(n / 10, base);
		ft_putnbr_base(n % 10, base);
	}
	else
	{
		ft_putchar(n + '0');
	}
}


char Conv(int M, int N)
{
	if (M < N)
	{
		printf("%c -\n", M + '0');
		return (M + '0'); 
	}
	else
	{
		printf("%c\n", (Conv(M/N, N) + (M % N) + '\0'));
		return (Conv(M/N, N) + (M & N) + '\0');
	}
}



int main()
{
	printf("%c\n", Conv(8,2));
}