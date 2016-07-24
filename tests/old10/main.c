/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 14:42:11 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 14:42:12 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	printf("%d\n", dec_droite(6,1));
	printf("%d\n", 6 >> 1);
	return (0);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	char operateur[4];
	ft ft_array[4];

	ft_array[0] = add;
	ft_array[1] = sub;
	ft_array[2] = mul;
	ft_array[3] = div;
	operateur[0] = '+';
	operateur[1] = '-';
	operateur[2] = '*';
	operateur[3] = '/';
	i = 0;
	if (argc != 4)
		return (1);
	while (operateur[i] != argv[2][0] && i < 4)
		i++;
	if (argv[2][1] != '\0' || i > 3)
		ft_putchar('0');
	else
		ft_putnbr(ft_array[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
	ft_putchar('\n');
	// Division par 0 à gérer.
	// Modulo a ajouter.
	return (0);
}
*/