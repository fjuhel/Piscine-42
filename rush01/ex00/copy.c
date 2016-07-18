/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 19:42:07 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/17 19:42:09 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		**deep_copy_char(char **str)
{
	int i;
	int j;
	int *line;
	int **grille;

	if (!(grille = malloc(sizeof(*grille) * (9 * 9 + 1))))
		return (NULL);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		if (!(line = malloc(sizeof(*line) * (9 + 1))))
			return (NULL);
		while (++j < 9)
		{
			if (str[i][j] == '.')
				line[j] = 0;
			else
				line[j] = str[i][j] - 48;
		}
		line[j] = '\0';
		grille[i] = line;
	}
	grille[i] = NULL;
	return (grille);
}

int		**deep_copy_int(int **tab)
{
	int i;
	int j;
	int *line;
	int **grille;

	if (!(grille = malloc(sizeof(*grille) * (9 * 9 + 1))))
		return (NULL);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		if (!(line = malloc(sizeof(*line) * (9 + 1))))
			return (NULL);
		while (++j < 9)
			line[j] = tab[i][j];
		line[j] = '\0';
		grille[i] = line;
	}
	grille[i] = NULL;
	return (grille);
}
