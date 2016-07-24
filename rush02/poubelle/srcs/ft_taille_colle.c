/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taille_colle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 16:12:24 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/24 16:13:52 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_longueur(t_list *begin_list)
{
	t_list	*list;
	int		longueur;

	list = begin_list;
	longueur = 0;
	while (list)
	{
		if (list->data == '\n')
			return (longueur);
		longueur++;
		list = list->next;
	}
	return (longueur);
}

int		ft_hauteur(t_list *begin_list)
{
	t_list	*list;
	int		hauteur;

	list = begin_list;
	hauteur = 0;
	while (list)
	{
		if (list->data == '\n')
			hauteur++;
		list = list->next;
	}
	return (hauteur);
}
