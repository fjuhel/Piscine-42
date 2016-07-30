/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_manip.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:20:08 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:20:09 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_str_cat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*list_to_str(t_list *list, int n)
{
	char	*dest;
	t_list	*tmp;

	if (n == 0)
		return (NULL);
	if (!(dest = malloc(sizeof(*dest) * (n + 1))))
		return (NULL);
	dest[0] = '\0';
	while (list)
	{
		ft_str_cat(dest, list->data);
		tmp = list->next;
		list = tmp;
	}
	dest[n] = '\0';
	return (dest);
}

int		get_width(char *str)
{
	int n;

	printf("D:%s\n", str);
	n = 0;
	str++;
	while (*str++ != '\n')
		n++;
	return (n);
}

int		get_height(char *str)
{
	int n;

	n = 0;
	while (*str)
	{
		if (*str == '\n')
			n++;
		str++;
	}
	return (n);
}
