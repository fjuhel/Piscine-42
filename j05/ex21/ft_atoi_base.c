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

#include <stdio.h>

int ft_find(char *str, char to_find)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (to_find == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int check(char *str, char *base)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_find(base, str[i]) == -1)
			return (0);
		i++;
	}
	return (1);
}

// Need check caractere double dans base.
// Need check not + or - in base.
// Need check size_base > 1
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
/*
int change_base(char *nbr, char *base)
{
	int size_base;
	int n;
	int i;
	int len;

	i = 0;
	n = 0;
	size_base = 0;
	len = 0;
	while (base[size_base])
			size_base++;
	while (nbr[len])
			len++;

	while (nbr)
		{
			n += ft_recursive_power(size_base, len - i); //ft_recursive_power(nbr%10,size_base);
			nbr /= 10;
			i++;
		}
	return (n);
}
*/

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int n;
	int limit;
	int size_base;

	i = 0;
	neg = 1;
	n = 0;
	size_base = 0;

	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = -1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (base[size_base])
			size_base++;
	limit = i;
	while (ft_find(base, str[limit]) != -1)
			limit++;
	//limit += i;
	printf("Limit = %d and i = %d\n", limit , i);
	printf("Size base = %d\n", size_base);
	while (ft_find(base, str[i]) != -1)
	{
		n += (str[i]  - 48) * ft_recursive_power(size_base, limit - i - 1);
		printf("%d * %d^%d = %d\n", str[i] - 48, size_base, limit - i - 1, n );
		i++;
		
	}
	return (n * neg);
}
/*
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}
*/

/*
void	ft_putnbr_base2(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}
*/

int main()
{
	char base[] = "01";
	printf("1 => %d\n",ft_atoi_base("1011", base)); 
	printf("2 => %d\n",ft_atoi_base(" +011", base)); //
	printf("3 => %d\n",ft_atoi_base("101", base)); //r
	printf("4 => %d\n",ft_atoi_base("10 2", base)); //r
	printf("5 => %d\n",ft_atoi_base("  -0110]", base)); //retur
	printf("6 => %d\n",ft_atoi_base("[1", base)); //return
	printf("7 => %d\n",ft_atoi_base("", base)); //return 
	printf("8 => %d\n",ft_atoi_base(" ", base)); //return 
	printf("9 => %d\n",ft_atoi_base("+2147483647", base)); //return
	printf("10 => %d\n",ft_atoi_base("-2147483648", base)); //return 
	
	//char str[] = "abcdef";
	//char s = 'd';
	//printf("%s in %s == %d\n", s, str, ft_find(str, s));
	return 0;
	
}
