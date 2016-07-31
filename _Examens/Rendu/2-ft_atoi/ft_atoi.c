/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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