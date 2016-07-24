/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 14:42:11 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 14:42:12 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

t_ft	*ft_array(void)
{
	static t_ft farray[5];

	farray[0] = add;
	farray[1] = sub;
	farray[2] = mul;
	farray[3] = div;
	farray[4] = mod;
	return (farray);
}

char	*operateur_array(void)
{
	static char op[5];

	op[0] = '+';
	op[1] = '-';
	op[2] = '*';
	op[3] = '/';
	op[4] = '%';
	return (op);
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

int		main(int argc, char **argv)
{
	int		i;
	t_ft	*functions;
	char	*operateurs;

	i = 0;
	functions = ft_array();
	operateurs = operateur_array();
	if (argc != 4 || test_div_mod(ft_atoi(argv[3]), argv[2][0]))
		return (1);
	while (operateurs[i] != argv[2][0] && i < 4)
		i++;
	if (argv[2][1] != '\0' || i > 3)
		ft_putchar('0');
	else
	{
		ft_putnbr(functions[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	ft_putchar('\n');
	return (0);
}
