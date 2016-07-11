/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 10:19:51 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/08 10:19:53 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		solver(char *str, int pos, int *pn)
{
	int k;

	if (pos == 8)
	{
		*pn = *pn + 1;
		return (0);
	}
	k = 0;
	while (k < 8)
	{
		str[pos] = k + '0';
		if (check(str))
		{
			if (solver(str, pos + 1, pn))
				return (1);
		}
		k++;
	}
	str[pos] = '/';
	return (0);
}

int		ft_eight_queens_puzzle(void)
{
	int		i;
	int		n;
	int		*pn;
	char	str[8];

	i = 0;
	while (i < 8)
		str[i++] = '/';
	n = 0;
	pn = &n;
	solver(str, 0, pn);
	return (*pn);
}
