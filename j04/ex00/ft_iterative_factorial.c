/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 09:42:36 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/08 09:47:57 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	if ((nb < 0) || (nb > 12))
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	else
	{
		i = nb - 1;
		while (i >= 1)
		{
			nb *= i;
			i--;
		}
	}
	return (nb);
}
