/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str++)
		n++;
	return (n);
}


void	do_op(int op1, int op2, char ope)
{
	if ((ope == '/' || ope == '%') && op2 == 0)
	{
		if (ope == '/')
			printf("Erreur, division par 0");
		if (ope == '%')
			printf("Erreur, modulo par 0");
		return ;
	}
	if (ope == '+')
		printf("%d", op1 + op2);
	else if (ope == '-')
		printf("%d", op1 - op2);
	else if (ope == '*')
		printf("%d", op1 * op2);
	else if (ope == '/')
		printf("%d", op1 / op2);
	else if (ope == '%')
		printf("%d", op1 % op2);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		if (ft_strlen(argv[2]) == 1)
			do_op(atoi(argv[1]), atoi(argv[3]), *argv[2]);
	printf("\n");
	return (0);
}
