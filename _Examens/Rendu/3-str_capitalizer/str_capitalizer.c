/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	str_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	str_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

void	rstr_capitalizer(char *str)
{
	while (*str)
	{
		while (*str == ' ' || *str == '\t')
			ft_putchar(*str++);
		if (*str == 0)
			return ;
		ft_putchar(str_uppercase(*str++));
		while (*str && *str != ' ' && *str != '\t')
			ft_putchar(str_lowercase(*str++));
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
		while (i < argc)
		{
			rstr_capitalizer(argv[i++]);
			ft_putchar('\n');
		}
	else
		ft_putchar('\n');
	return (0);
}