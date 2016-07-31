/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*move(char **str)
{
	int		count;
	int		sens;
	char 	symbol;

	count = 0;
	sens = ((**str == '[') ? 1 : -1);
	symbol = ((**str == '[') ? ']' : '[');
	while (*str)
	{
		*str += sens;
		if (**str == symbol && !count)
			return (*str);
		if (**str == '[')
			count++;
		else if (**str == ']')
			count--;
	}
	return (*str);
}

int	brainfuck(char *str)
{
	char	*p;
	char	*dest;
	
	if (!(dest = malloc(sizeof(*dest) * 2048)))
		return (1);
	p = dest;
	while (*str)
	{
		p += ((*str == '>') ? 1 : 0);
		p -= ((*str == '<') ? 1 : 0);
		*p += ((*str == '+') ? 1 : 0);
		*p -= ((*str == '-') ? 1 : 0);
		if ((*str == '[' && *p == 0) || (*str == ']' && *p != 0))
			move(&str);
		else if (*str == '.')
			ft_putchar(*p);
		str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		brainfuck(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}