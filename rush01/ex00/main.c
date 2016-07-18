/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 18:27:48 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/17 18:27:50 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	int n;
	int *n_p;
	int	**grille;

	argc = 0;
	n = 0;
	n_p = &n;
	if (check_input(argv) == 0)
		ft_putstr("Erreur\n");
	else
	{
		grille = deep_copy_char(++argv);
		solver(grille, 0, n_p, order(grille));
		if (n == 1)
			print(g_grille_solved);
		else
			ft_putstr("Erreur\n");
	}
	return (0);
}
