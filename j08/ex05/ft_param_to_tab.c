/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:53:26 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/14 16:53:28 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		size;

	size = 0;
	while (src[size])
		size++;
	str = malloc(size + 1);
	if (str == NULL)
		return (str);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*dest;

	i = 0;
	dest = malloc(sizeof(*dest) * (ac + 1));
	if (dest == NULL)
		return (dest);
	while (i < ac)
	{
		dest[i].size_param = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		dest[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	dest[i].str = 0;
	return (dest);
}
