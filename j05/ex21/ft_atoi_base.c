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

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
	// Need check caractere double dans base.
	// Need check not + or - in base.
	// Need check size_base > 1
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int n;

	i = 0;
	neg = 1;
	n = 0;
	/*
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	*/
	printf("32\n");
	if (str[i] == 45)
		neg = -1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (0)
	{
		printf("11\n");
		return 0;
		n *= 10;
		n += ft_find(str, str[i]) + '0';
		i++;
	}
	return (n * -1);
}
//(ft_find(str, str[i]) != -1)

int main()
{
	char base[] = "01";
	printf("1 => %d\n",ft_atoi_base("1", base)); 
	printf("2 => %d\n",ft_atoi_base(" +3", base)); //
	printf("3 => %d\n",ft_atoi_base(" 0006", base)); //r
	printf("4 => %d\n",ft_atoi_base("8-2", base)); //r
	printf("5 => %d\n",ft_atoi_base("  -12t54]", base)); //retur
	printf("6 => %d\n",ft_atoi_base("[1", base)); //return
	printf("7 => %d\n",ft_atoi_base("", base)); //return 
	printf("8 => %d\n",ft_atoi_base(" ", base)); //return 
	printf("9 => %d\n",ft_atoi_base("+2147483647", base)); //return
	printf("10 => %d\n",ft_atoi_base("-2147483648", base)); //return 

	char str[] = "abcdef";
	char s = 'd';
	printf("%s in %s == %d\n", s, str, ft_find(str, s));
	return 0;
}
