/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
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

int	ft_atoi(char *str)
{
	int	neg;
	int	n;

	n = 0;
	neg = 1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f'))
		str++;
	if (*str == '-')
		neg = -1;
	if ((*str == '+') || (*str == '-'))
		str++;
	while (*str >= '0' && *str <= '9')
		n = (n * 10) + (*str++ - 48);
	return (n * neg);
}

void	print_hex(char *str)
{
	int		n;
	char	base[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
						'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	char	dest[21];
	char	*p;

	p = dest + 20;
	*p-- = '\0';
	n = ft_atoi(str);
	while (n > 0)
	{
		*p-- = base[n % 16];
		n /= 16;
	}
	while (*++p)
		ft_putchar(*p);
}


int		main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(argv[1]);
	ft_putchar('\n');
	return (0);
}