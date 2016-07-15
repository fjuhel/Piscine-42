char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int i;
	int n;
	char *dest;

	i = -1;
	n = 0;
	if (nbr[0] == '+' || nbr[0] == '-')
		i++;
	while(++i < len(nbr))
		n += fd(base_from, nbr[i], 0) * mypow(len(base_from), len(nbr) - i - 1);
	dest = malloc(sizeof(*nbr) * (lenght_nbr(n, len(base_to) + 1)+ (int)(nbr[0] == '-')));
	if (dest == NULL)
		return (NULL);
	i = lenght_nbr(n, len(base_to) + 1) + (int)(nbr[0] == '-');
	dest[i] = '\0';
	while(n > 0)
	{
		dest[--i] = base_to[(n % len(base_to))];
		n /= len(base_to);
	}
	if (nbr[0] == '-')
		dest[0] = '-';
	test0(nbr, base_from, &dest);
	return (dest);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:30:25 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/13 13:30:26 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// kbensado
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		mypow(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * mypow(nb, power - 1));
}

int		fd(char *str, char to_find)
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

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		lenght_nbr(int nbr, int base_size)
{
	int n;

	n = 0;
	while(nbr!= 0)
	{
		nbr /= base_size;
		n++;
	}
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int i;
	int n;
	char *dest;

	i = -1;
	n = 0;
	if (nbr[0] == '+' || nbr[0] == '-')
		i++;
	while(++i < len(nbr))
		n += fd(base_from, nbr[i]) * mypow(len(base_from), len(nbr) - i - 1);
	dest = malloc(sizeof(*nbr) * (lenght_nbr(n, len(base_to) + 1)+ (int)(nbr[0] == '-')));
	if (dest == NULL)
		return (NULL);
	i = lenght_nbr(n, len(base_to) + 1) + (int)(nbr[0] == '-');
	dest[i] = '\0';
	while(n > 0)
	{
		dest[--i] = base_to[(n % len(base_to))];
		n /= len(base_to);
	}
	if (nbr[0] == '-')
		dest[0] = '-';
	return (dest);
}

/* Test ex06 */
int		main()
{
	char nbr[] = "111111";
	char base_from[] = "1Ldafdk";
	char base_to[] = "0123456789";
	printf("%s\n", ft_convert_base(nbr, base_from, base_to));

	return 0;
}