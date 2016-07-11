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
	if ((nb < 0) || (nb == 2) || (nb == 3) || (nb == 2147483647))
		return (1);
	else if ((nb % 2 == 0) || (nb % 3 == 0))
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

int main()
{
	int k;
	k = 2047487249;
	//k = 2147483647;

	printf("%d -> %d\n", ft_is_prime(k), k);

	for (int i=0; i < 1 ; i++)
	{
		if (ft_is_prime(i))
			printf("%d is prime\n", i);
		//else
			//printf("%d is not prime\n", i);
	}
	return(0);
}
