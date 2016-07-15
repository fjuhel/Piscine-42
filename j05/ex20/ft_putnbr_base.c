/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:07:14 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:07:16 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	n[100];
	int	i;

	i = 0;
	base_size = 0;
	if (base_checking(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[base_size] != '\0')
			base_size++;
		while (nbr)
		{
			n[i] = nbr % base_size;
			nbr = nbr / base_size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[n[i]]);
	}
}
