/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:53:19 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/28 19:53:20 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

void	rev_wstr(char *str)
{
	int i;
	char **dest;

	i = -1;
	dest = ft_split(str);
	while (dest[++i])
		;
	while (--i >= 0)
	{
		ft_putstr(dest[i]);
		if (i > 0)
			ft_putchar(' ');
	}
}

void	rev_wstr_bis(char *str)
{
	int n;

	n = 1;
	while (*str)
		if (*str++ == ' ')
			n++;
	while (n-- > 0)
	{
		while (*--str != ' ' && *str)
			;
		while (*++str != ' ' && *str)
			ft_putchar(*str);
		if (n > 0)
			ft_putchar(' ');
		while (*--str != ' ' && *str)
			;
	}
}


int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr_bis(argv[1]);
	ft_putchar('\n');
	return (0);
}
