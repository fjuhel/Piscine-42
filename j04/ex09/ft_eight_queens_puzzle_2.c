/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 10:20:39 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/08 10:20:41 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(char *str)
{
	int		i;

	i = 0;
	while (i < 8)
		ft_putchar(str[i++] + 1);
	ft_putchar('\n');
}

int		check(char *str)
{
	int i;
	int j;
	int delta_r;
	int delta_c;

	i = 0;
	while (i < 7)
	{
		j = i + 1;
		while (j < 8)
		{
			if ((str[i] != '/') && (str[j] != '/'))
			{
				delta_r = str[j] - str[i];
				if (delta_r < 0)
					delta_r = -delta_r;
				delta_c = j - i;
				if (((delta_r == delta_c) || (str[i] == str[j])))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		solver(char *str, int pos)
{
	int k;

	if (pos == 8)
	{
		print(str);
		return (0);
	}
	k = 0;
	while (k < 8)
	{
		str[pos] = k + '0';
		if (check(str))
		{
			if (solver(str, pos + 1))
				return (1);
		}
		k++;
	}
	str[pos] = '/';
	return (0);
}

void	ft_eight_queens_puzzle_2(void)
{
	int		i;
	char	str[8];

	i = 0;
	while (i < 8)
		str[i++] = '/';
	solver(str, 0);
}
