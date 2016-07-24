/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:00:08 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/09 18:28:45 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	colle(int x, int y);

int		main(void)
{
	colle(5, 3);
	ft_putchar('\n');
	colle(5, 1);
	ft_putchar('\n');
	colle(1, 1);
	ft_putchar('\n');
	colle(1, 5);
	ft_putchar('\n');
	colle(4, 4);
	return (0);
}
