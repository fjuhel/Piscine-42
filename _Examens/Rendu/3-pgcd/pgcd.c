/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		pgcd_brute_force(int a, int b)
{
	int i;
	int v_pgcd;

	i = 1;
	v_pgcd = 1;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			v_pgcd = i;
		i++;
	}
	return (v_pgcd);
}

int		pgcd_euclid_rec(int a, int b)
{
	return ((b == 0) ? a : pgcd_euclid_rec(b, a % b));
}

int		pgcd_euclid_ite(int a, int b)
{
	while (b != 0)
	{
		a %= b;
		if (a == 0)
			return (b);
		b %= a;
	}
	return (a);
}


int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d",pgcd_euclid_ite(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}