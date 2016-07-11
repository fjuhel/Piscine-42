/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 15:10:14 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/07 15:10:17 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		mypow(int a, int b)
{
	int i;
	int n;

	n = 1;
	i = 0;
	while (i < b)
	{
		n *= a;
		i++;
	}
	return (n);
}

int		sortie(unsigned int n, char *str)
{
	while ((n % 10 == 0) && (n != 0))
		n /= 10;
	if (str[0] == '-')
		return (-n);
	else
		return (n);
}

int		ft_atoi(char *str)
{
	int i;
	int c;
	int n;
	int size;
	int k;

	k = 1;
	n = 0;
	size = ft_strlen(str);
	i = 0;
	while (i < size)
	{
		c = str[i];
		if (((c > 47) && (c < 58)) || ((c == '-') && (i == 0)))
		{
			if (((c > 47) && (c < 58)))
				n += (c - 48) * mypow(10, (size - 1 - i));
			else
				k++;
		}
		else
			return (sortie(n, str));
		i++;
	}
	return (sortie(n, str));
}

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
   printf("%d\n", atoi("-2147483648"));
   printf("%d\n", ft_atoi("-2147483648"));

   printf("%d\n", ft_atoi("2147483647"));
   printf("%d\n", atoi("2147483647"));

   printf("%d\n", atoi("-47t43"));
   printf("%d\n", ft_atoi("-47t43"));

   printf("%d\n", atoi("t2143647"));
   printf("%d\n", ft_atoi("t2143647"));

   printf("%d\n", atoi("-2148t"));
   printf("%d\n", ft_atoi("-2148t"));

   printf("%d\n", atoi("477"));
   printf("%d\n", ft_atoi("477"));
return 0;
}