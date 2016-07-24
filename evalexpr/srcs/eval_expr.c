/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 20:46:29 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 20:46:31 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		count_tokens(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (((str[i] >= '0' && str[i] <= '9') && (!(str[i + 1] >= '0'
			&& str[i + 1] <= '9')))
			|| is_operator(&str[i]) == 1 || str[i] == '(' || str[i] == ')')
			n++;
		str++;
	}
	return (n);
}

int		int_splitter(char **dest, char *str, int i, int n)
{
	int j;
	int k;

	j = i % 10000;
	i = i / 100000;
	k = -1;
	if (!(dest[n] = malloc(sizeof(**dest) * (j - i + 1))))
		return (0);
	while (++k < j - i + 1)
		dest[n][k] = str[i + k];
	dest[n][k] = '\0';
	return (n + 1);
}

char	**splitter(char *str)
{
	int		i;
	int		j;
	int		n;
	char	**dest;

	i = 0;
	n = 0;
	if (!(dest = malloc(sizeof(*dest) * (count_tokens(str) + 1))))
		return (NULL);
	while (str[i])
	{
		j = i;
		while (str[j] == ' ')
			j++;
		i = j;
		while (is_operator(&str[i]) == 0 && str[j] != '(' && str[j] != ')'
			&& str[j + 1] >= '0' && str[j + 1] <= '9')
			j++;
		n = int_splitter(dest, str, i * 100000 + j, n);
		i = j + 1;
	}
	dest[n] = 0;
	return (dest);
}

int		eval_expr(char *str)
{
	t_list	*vs;
	t_list	*os;

	vs = NULL;
	os = NULL;
	evaluate_infix(splitter(str), &vs, &os);
	while (ft_list_size(os) != 0)
		pf(&vs, a(pop(&os), ft_atoi(pop(&vs)), ft_atoi(pop(&vs))));
	return (ft_atoi((char*)pop(&vs)));
}
