/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:30:25 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/13 13:30:26 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		mypow(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * mypow(nb, power - 1));
}

int		ft(char *str, char to_find, int choix)
{
	int i;

	i = 0;
	if (choix == 0)
	{
		while (str[i] != '\0')
		{
			if (to_find == str[i])
				return (i);
			i++;
		}
		return (-1);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
		return (i);
	}
}

int		ln(int nbr, int base_size)
{
	int n;

	n = 0;
	while (nbr != 0)
	{
		nbr /= base_size;
		n++;
	}
	return (n);
}

int		test0(char *nbr, char *base_from, char **dest_p)
{
	while (*nbr != '\0')
	{
		if (*nbr != base_from[0])
			return (1);
		nbr++;
	}
	*dest_p = malloc(sizeof(*nbr) * 2);
	dest_p[0][0] = '0';
	dest_p[0][1] = '\0';
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		n;
	char	*dest;

	i = -1;
	n = 0;
	if (nbr[0] == '+' || nbr[0] == '-')
		i++;
	while (++i < ft(nbr, '0', 1))
		n += ft(base_from, nbr[i], 0) * mypow(ft(base_from, '0', 1),
			ft(nbr, '0', 1) - i - 1);
	dest = malloc((ln(n, ft(base_to, '0', 1) + 1) + (int)(nbr[0] == '-')));
	if (dest == NULL)
		return (NULL);
	i = ln(n, ft(base_to, '0', 1) + 1) + (int)(nbr[0] == '-');
	dest[i] = '\0';
	while (n > 0)
	{
		dest[--i] = base_to[(n % ft(base_to, '0', 1))];
		n /= ft(base_to, '0', 1);
	}
	if (nbr[0] == '-')
		dest[0] = '-';
	test0(nbr, base_from, &dest);
	return (dest);
}
