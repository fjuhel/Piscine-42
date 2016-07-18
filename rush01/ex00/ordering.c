/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordering.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 18:28:18 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/17 18:28:19 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		count_possibilities(int **p, int pos)
{
	int n;
	int k;

	n = 0;
	k = -1;
	while (++k < 10)
		if (check(p, pos / 9, pos % 9, k) == 1)
			n++;
	return (n);
}

void	sort(int *dest, int *conflit)
{
	int i;
	int j;
	int tmp;

	i = -1;
	while (++i < 81)
	{
		j = -1;
		while (++j < 80)
		{
			if (conflit[j] > conflit[j + 1])
			{
				tmp = conflit[j + 1];
				conflit[j + 1] = conflit[j];
				conflit[j] = tmp;
				tmp = dest[j + 1];
				dest[j + 1] = dest[j];
				dest[j] = tmp;
			}
		}
	}
}

int		*order(int **p)
{
	int i;
	int *tmp;
	int *dest;

	i = -1;
	if (!(tmp = malloc(sizeof(*tmp) * 81)))
		return (NULL);
	if (!(dest = malloc(sizeof(*dest) * 81)))
		return (NULL);
	while (++i < 81)
		tmp[i] = count_possibilities(p, i);
	i = -1;
	while (++i < 81)
		dest[i] = i;
	sort(dest, tmp);
	return (dest);
}
