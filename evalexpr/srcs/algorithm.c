/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:02:17 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:02:18 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		g(char *str)
{
	if (*str == '+' || *str == '-')
		return (1);
	else if (*str == '*' || *str == '/' || *str == '%')
		return (2);
	return (-1);
}

char	*a(char *opera, int op1, int op2)
{
	int n;

	n = 0;
	if (*opera == '+')
		n = op1 + op2;
	else if (*opera == '-')
		n = op2 - op1;
	else if (*opera == '*')
		n = op1 * op2;
	else if (*opera == '/')
		n = op2 / op1;
	else if (*opera == '%')
		n = op2 % op1;
	return (ft_itoa(n));
}

int		is_operator(char *str)
{
	if (*str == '+' || *str == '-' || *str == '*' || *str == '/' || *str == '%')
		return (1);
	return (0);
}

int		evaluate_infix(char **expr, t_list **vs, t_list **os)
{
	int		i;

	i = -1;
	while (expr[++i] != 0)
	{
		if (is_operator(expr[i]) == 0 && expr[i][0] != '(' && expr[i][0] != ')')
			pf(vs, expr[i]);
		else if (is_operator(expr[i]))
		{
			while (ft_list_size(*os) != 0 && g(expr[i]) <= g((*os)->data))
				pf(vs, a(pop(os), ft_atoi(pop(vs)), ft_atoi(pop(vs))));
			pf(os, expr[i]);
		}
		else if (expr[i][0] == '(')
			pf(os, expr[i]);
		else if (expr[i][0] == ')')
		{
			while ((*os)->data[0] != '(')
				pf(vs, a(pop(os), ft_atoi(pop(vs)), ft_atoi(pop(vs))));
			pop(os);
		}
	}
	return (0);
}
