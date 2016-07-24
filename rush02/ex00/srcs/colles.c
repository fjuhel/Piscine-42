/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:34:07 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:34:09 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*colle00(int x, int y)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * y + y + 1))))
		return (NULL);
	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 || i == y) && (j == 1 || j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'o';
			else if (i == 1 || i == y)
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = '-';
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = '|';
			else
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = ' ';
		}
		dest[((i - 1) * x) + (j - 1) + (i - 1)] = '\n';
	}
	dest[(x * y + y + 1)] = '\0';
	return (dest);
}

char	*colle01(int x, int y)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * y + y + 1))))
		return (NULL);
	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && i != 1 && j != 1))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = '/';
			else if ((i == 1 && j == x) || (i == y && j == 1))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = '\\';
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = '*';
			else
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = ' ';
		}
		dest[((i - 1) * x) + (j - 1) + (i - 1)] = '\n';
	}
	dest[(x * y + y + 1)] = '\0';
	return (dest);
}

char	*colle02(int x, int y)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * y + y + 1))))
		return (NULL);
	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if (i == 1 && (j == 1 || j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'A';
			else if (i == y && (j == 1 || j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'C';
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'B';
			else
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = ' ';
		}
		dest[((i - 1) * x) + (j - 1) + (i - 1)] = '\n';
	}
	dest[(x * y + y + 1)] = '\0';
	return (dest);
}

char	*colle03(int x, int y)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * y + y + 1))))
		return (NULL);
	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 || i == y) && j == 1)
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'A';
			else if ((i == 1 || i == y) && j == x)
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'C';
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'B';
			else
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = ' ';
		}
		dest[((i - 1) * x) + (j - 1) + (i - 1)] = '\n';
	}
	dest[(x * y + y + 1)] = '\0';
	return (dest);
}

char	*colle04(int x, int y)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = malloc(sizeof(*dest) * (x * y + y + 1))))
		return (NULL);
	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && i != 1 && j != 1))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'A';
			else if ((i == y && j == 1) || (i == 1 && j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'C';
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = 'B';
			else
				dest[((i - 1) * x) + (j - 1) + (i - 1)] = ' ';
		}
		dest[((i - 1) * x) + (j - 1) + (i - 1)] = '\n';
	}
	dest[(x * y + y + 1)] = '\0';
	return (dest);
}
