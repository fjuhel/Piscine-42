/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 11:03:42 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/24 18:13:33 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	affiche_result(int nbcolle, int longueur, int hauteur)
{
	ft_putstr("[colle-");
	ft_putnbr(nbcolle);
	ft_putstr("] [");
	ft_putnbr(longueur);
	ft_putstr("] [");
	ft_putnbr(hauteur);
	ft_putstr("]");
}

void	init_tab(t_f *g_tab)
{
	g_tab[0] = colle0;
	g_tab[1] = colle1;
	g_tab[2] = colle2;
	g_tab[3] = colle3;
	g_tab[4] = colle4;
}

void	find_all(t_list *list, int longueur, int hauteur, t_list *test)
{
	int		i;
	t_f		g_tab[5];
	int		signal;

	init_tab(g_tab);
	i = 0;
	signal = 0;
	while (i < 5)
	{
		g_tab[i](longueur, hauteur, test);
		if (ft_list_cmp(list, test) == 0)
		{
			if (signal == 1)
			{
				ft_putstr(" || ");
				signal = 0;
			}
			affiche_result(i, longueur, hauteur);
			signal = 1;
		}
		ft_list_clear(&test);
		test = ft_create_elem(0);
		i++;
	}
}

int		main(void)
{
	char	buf;
	int		len;
	t_list	*list;
	t_list	*test;

	len = 0;
	test = ft_create_elem(0);
	while (read(0, &buf, 1) != 0)
	{
		ft_list_push_back(&list, buf);
		len++;
	}
	ft_list_affiche(list);
	if (ft_longueur(list) == 0 || ft_hauteur(list) == 0)
		ft_putstr("aucune\n");
	else
		find_all(list, ft_longueur(list), ft_hauteur(list), test);
	return (0);
	ft_list_clear(list);
	ft_list_clear(test);
}
