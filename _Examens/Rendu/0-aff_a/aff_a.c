/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 17:14:51 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/28 17:14:52 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	find(char *str, char c)
{
	int n;

	n = 0;
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (find(argv[1], 'a') == 1)
			ft_putchar('a');
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
