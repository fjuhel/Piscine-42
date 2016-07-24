/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 14:44:28 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 14:44:28 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "ft_opp.h"

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

int		test_div_mod(int b, char op)
{
	if (b == 0 && op == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if (b == 0 && op == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int		ft_usage(int a, int b)
{
	int i;

	i = -1;
	ft_putstr("error : only [ ");
	while (++i < 5)
	{
		ft_putstr(g_opptab[i].op);
		ft_putchar(' ');
	}
	ft_putstr("] are accepted.\n");
	return (a * 0 + b * 0 + 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 4 || test_div_mod(ft_atoi(argv[3]), argv[2][0]))
		return (1);
	while (ft_strcmp(g_opptab[i].op, argv[2]) != 0)
		if (++i == 5)
			return (ft_usage(ft_atoi(argv[1]), ft_atoi(argv[3])));
	ft_putnbr(g_opptab[i].ft(ft_atoi(argv[1]), ft_atoi(argv[3])));
	ft_putchar('\n');
	return (0);
}
