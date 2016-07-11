/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 15:10:14 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/07 15:10:17 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}


int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		mypow(int a, int b)
{
	int i;
	int n;

	n = 1;
	i = 0;
	while (i < b)
	{
		n *= a;
		i++;
	}
	return (n);
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

int		ft_handle_neg(int n)
{
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int c;
	int n;
	int size;

	n = 0;
	size = ft_strlen(str);
	i = size - 1;
	while (i >= 0)
	{
		c = str[i];
		if (((c > 47) && (c < 58)) || ((c == '-') && (i == 0)))
		{
			if (((c > 47) && (c < 58)))
				n += (c - 48) * mypow(10, (size - 1 - i));
		}
		else
			return (0);
		i--;
	}
	if (str[0] == '-')
		return (-n);
	return (n);
}




int main()
{
	ft_putnbr(ft_atoi("-21474836488"));
	return(0);
}
