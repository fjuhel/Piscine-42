/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:07:31 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:07:32 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int		ft_find(char *str, char to_find)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (to_find == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int		str_checking(char *str, char *base, int sign_info)
{
	int i;
	int j;
	int neg;

	i = 0;
	neg = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = -1;
	if ((str[i] == 43) || (str[i] == 45))
		i++;
	j = i;
	while (str[j] != '\0')
	{
		if (ft_find(base, str[j]) == -1)
			return (-2135842987);
		j++;
	}
	if (sign_info == 1)
		return (neg);
	return (i);
}

int		base_checking(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int n;
	int bs;
	int neg;
	int limit;

	i = str_checking(str, base, 0);
	neg = str_checking(str, base, 1);
	n = 0;
	bs = 0;
	if (base_checking(base) == 0 || i == -2135842987)
		return (0);
	while (base[bs])
		bs++;
	limit = i;
	while (ft_find(base, str[limit]) != -1)
		limit++;
	while (ft_find(base, str[i]) != -1)
	{
		n += ft_find(base, str[i]) * ft_recursive_power(bs, limit - i - 1);
		i++;
	}
	return (n * neg);
}
