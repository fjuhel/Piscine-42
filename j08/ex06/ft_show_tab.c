/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:53:48 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/14 16:53:49 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
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

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words(par->tab);
		i = 0;
		while (par->tab[i] != 0 && par->tab != 0)
		{
			ft_putstr(par->tab[i]);
			i++;
		}
		par++;
	}
}
