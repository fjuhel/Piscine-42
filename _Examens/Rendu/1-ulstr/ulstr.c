/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:53:19 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/28 19:53:20 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str + 32);
		else if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str - 32);
		else
			ft_putchar(*str);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}