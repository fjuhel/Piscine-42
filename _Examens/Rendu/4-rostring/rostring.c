/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:53:19 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/28 19:53:20 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		count_words(char *str)
{
	int n;

	n = 0;
	while (*str)
	{
		if ((*str != ' ' && *str != '\t' && *str != '\n')
			&& (*(str + 1) == ' ' || *(str + 1) == '\t'
				|| *(str + 1) == '\n' || *(str + 1) == '\0'))
			n++;
		str++;
	}
	return (n);
}

int		count_letters(char *str)
{
	int n;

	n = 0;
	while (*str && *str != ' ' && *str != '\t' && *str != '\n')
	{
		n++;
		str++;
	}
	return (n);
}

char    **ft_split(char *str)
{
	int i;
	int n;
	char **dest;

	if (!(dest = malloc(sizeof(*dest) * (count_words(str) + 1))))
		return (NULL);
	n = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (!(*str))
			return (dest);
		if (!(dest[n] = malloc(sizeof(**dest) * (count_letters(str) + 1))))
			return (NULL);
		i = 0;
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
			dest[n][i++] = *str++;
		dest[n][i] = '\0';
		n++;
	}
	dest[n] = NULL;
	return (dest);
}

void	rostring(char *str)
{
	int i;
	char **dest;

	i = 1;
	dest = ft_split(str);
	while (dest[i])
	{
		ft_putstr(dest[i++]);
		ft_putchar(' ');
	}
	ft_putstr(dest[0]);
	while (*dest)
		free(*dest++);
}

void	rostring_bis(char *str)
{
	int i;
	int first;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	first = i;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (!str[i])
			break;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			ft_putchar(str[i++]);
		ft_putchar(' ');
	}
	while (str[first] && str[first] != ' ' && str[first] != '\t')
		ft_putchar(str[first++]);
}
