/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:32:26 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/28 19:32:26 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	repeat_alpha(char *str)
{
	int n;

	while (*str)
	{
		n = 1;
		if (*str >= 'A' && *str <= 'Z')
			n += *str - 'A';
		else if (*str >= 'a' && *str <= 'z')
			n += *str - 'a';
		while (n-- > 0)
			ft_putchar(*str);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
