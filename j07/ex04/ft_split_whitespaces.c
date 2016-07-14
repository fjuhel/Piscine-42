/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:30:17 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/13 13:30:17 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		compute_nb_words(char *str)
{
	int text;
	int n;

	n = 0;
	text = 0;
	while (*str)
	{
		if ((*str == '\n' || *str == '\t' || *str == ' ')
			&& (*(str + 1) != '\n' && *(str + 1) != '\t'
				&& *(str + 1) != ' ' && *(str + 1) != '\0'))
			n++;
		if (*str > 32 && *str < 127)
			text = 1;
		str++;
	}
	if (text == 0)
		return (0);
	return (n + 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		set(char *src, char *str, int start, int end)
{
	int		i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < end - start)
	{
		str[i] = src[start + i];
		i++;
	}
	str[i] = '\0';
	return (1);
}

int		intermediaire(char **dest, char *str, int i, int n)
{
	int j;

	j = 0;
	while (str[i + j] != '\n' && str[i + j] != '\t'
		&& str[i + j] != ' ' && str[i + j] != '\0')
		j++;
	if (j > 0)
	{
		dest[n] = malloc(sizeof(**dest) * j + 1);
		if (dest[n] == NULL)
			return (-1);
		set(str, dest[n], i, i + j);
	}
	return(j);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		n;
	char	**dest;
	if (ft_strlen(str) == 0 || compute_nb_words(str) == 0)
		return (NULL);
	dest = malloc(sizeof(*dest) * compute_nb_words(str) + 1);
	if (dest == NULL)
		return (dest);
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		j = intermediaire(dest,str,i, n);
		if (j == -1)
			return (NULL);
		else if(j > 0)
			n++;
		i += j + 1;
	}
	dest[n] = NULL;
	return (dest);
}
