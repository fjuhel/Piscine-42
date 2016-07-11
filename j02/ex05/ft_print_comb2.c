/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:52:48 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/07 14:36:51 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (!((a == '9') && (b == '8') && (c == '9') && (d == '9')))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		compteur;
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	compteur = 0;
	while (compteur < 9800)
	{
		a1 = ((compteur / 1000) % 10) + '0';
		a2 = ((compteur / 100) % 10) + '0';
		b1 = ((compteur / 10) % 10) + '0';
		b2 = (compteur % 10) + '0';
		if ((a1 < b1) || ((a1 == b1) && (a2 < b2)))
		{
			ft_print(a1, a2, b1, b2);
		}
		compteur++;
	}
	ft_print('9', '8', '9', '9');
}
