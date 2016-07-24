/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 14:43:47 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 14:43:47 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char*, char*))
{
	int		i;
	int		j;
	int		n;
	char	*tmp;

	i = -1;
	while (tab[++i])
	{
		n = -1;
		while (tab[++n])
			;
		j = -1;
		while (++j < n - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}
}
