/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 10:18:58 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/08 10:19:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (ft_is_prime(nb) == 0)
	{
		nb += 1;
	}
	return (nb);
}
