/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle0X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:02:20 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/10 16:40:49 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	collexstart(int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	collexend(int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('C');
		}
		else if (i == x)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	colley(int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if ((i == 1) || (i == x))
		{
			ft_putchar('B');
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
				collexstart(x);
			}
			else
			{
				colley(x);
			}
			i++;
		}
		if (y != 1)
			collexend(x);
		if (i == 1)
			collexstart(x);
	}
}
