/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:07:48 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:07:49 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_strlowcase(char c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	n[100];
	int	i;

	i = 0;
	base_size = 0;
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
	if (i == 1)
		ft_putchar('0');
	while (--i >= 0)
		ft_putchar(ft_strlowcase(base[n[i]]));
}

void	ft_putstr_non_printable(char *str)
{
	int		c;

	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			c = *str;
			ft_putchar('\\');
			ft_putnbr_base(c, "0123456789ABCDEF");
		}
		else
			ft_putchar(*str);
		str++;
	}
}
