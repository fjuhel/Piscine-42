/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle0X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:02:20 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/10 09:19:19 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	collex(int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if ((i == 1) || (i == x))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
	ft_putchar('\n');
}

void	colley(int x)
{
	int		i;

	i = 1;
	while ((i <= x))
	{
		if ((i == 1) || (i == x))
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int		i;

	i = 1;
	if ((x > 0 && y > 0) && (x < 2147483647) && (y < 2147483647))
	{
		while (i < y)
		{
			if (i == 1)
			{
				collex(x);
			}
			else
			{
				colley(x);
			}
			i++;
		}
		if (i == 1 || i == y)
		{
			collex(x);
		}
	}
}
