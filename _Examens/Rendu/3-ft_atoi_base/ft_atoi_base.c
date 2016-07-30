/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	str_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		get_index(char c, int size)
{
	int i;
	char	base[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
						'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	i = 0;
	while (i < size)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int n;
	int neg;

	n = 0;
	neg = 1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f'))
		str++;
	if (*str == '-')
		neg = -1;
	if ((*str == '+') || (*str == '-'))
		str++;
	while (*str && get_index(str_lowercase(*str), str_base) != -1)
	{
		n = (n * str_base) + (get_index(str_lowercase(*str), str_base));
		str++;
	}
	return (n * neg);
}
