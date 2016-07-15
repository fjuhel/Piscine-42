/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:05:52 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/14 19:05:54 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		find_split(char c, char *spliter)
{
	int i;

	i = 0;
	while (spliter[i] != '\0')
	{
		if (c == spliter[i])
			return (1);
		i++;
	}
	return (0);
}

int		cpt_nb_words_or_len(char *str, char *spliter, int words)
{
	int text;
	int n;

	n = 0;
	text = 0;
	if (words == 0)
	{
		while (str[n] != '\0')
			n++;
		return (n);
	}
	while (*str)
	{
		if (find_split(*str, spliter) == 1
			&& find_split(*(str + 1), spliter) == 0
			&& *(str + 1) != '\0')
			n++;
		if (*str > 32 && *str < 127)
			text = 1;
		str++;
	}
	if (text == 0)
		return (0);
	return (n + 1);
}

int		intermediaire(char **dest, char *str, char *spliter, int n)
{
	int i;
	int j;
	int k;

	i = n / 10000;
	j = 0;
	n = n - i * 10000;
	while (find_split(str[i + j], spliter) == 0 && str[i + j] != '\0')
		j++;
	if (j > 0)
	{
		dest[n] = malloc(sizeof(**dest) * j + 1);
		if (dest[n] == NULL)
			return (-1);
		k = 0;
		while (k < j)
		{
			dest[n][k] = str[i + k];
			k++;
		}
		dest[n][k] = '\0';
	}
	return (j);
}

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		n;
	char	**dest;

	if (cpt_nb_words_or_len(str, charset, 0) == 0
		|| cpt_nb_words_or_len(str, charset, 1) == 0)
		return (NULL);
	dest = malloc(sizeof(*dest) * cpt_nb_words_or_len(str, charset, 1) + 1);
	if (dest == NULL)
		return (dest);
	i = 0;
	n = 0;
	while (i < len(str))
	{
		j = intermediaire(dest, str, charset, i * 10000 + n);
		if (j == -1)
			return (NULL);
		else if (j > 0)
			n++;
		i += j + 1;
	}
	dest[n] = NULL;
	return (dest);
}
