/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:45:38 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/07 13:47:11 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while (i != ('9' + 1))
	{
		ft_putchar(i);
		i++;
	}
}

int main(int argc, char **argv)
{
	ft_print_numbers();
	ft_putchar('e');
	return (0);
}