/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 10:18:38 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/08 10:18:40 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	int w;

	if ((nb == 0) || (nb == 1))
		return (0);
	if ((nb == 2) || (nb == 3) || (nb == 2147483647))
		return (1);
	else if ((nb < 0) || (nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	i = 5;
	w = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += w;
		w = 6 - w;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (ft_is_prime(nb + 1) == 0)
	{
		nb += 1;
	}
	return nb + 1;
}

int main()
{
	int k;
	k = 2047489841;
	printf("Next prime of %d -> %d\n", k, ft_find_next_prime(k));
	return(0);
}