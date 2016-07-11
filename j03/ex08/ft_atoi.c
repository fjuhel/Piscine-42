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

#include <stdio.h>
#include <stdlib.h> 


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

int		sortie(unsigned int n, char *str, int cut)
{
	//printf("%d %d\n", n, cut);
	while (((n % 10 == 0) && (n != 0)) )
	{
		//printf("%d  === \n", n);
		n /= 10;
		cut--;
	}
	if (str[0] == '-')
		return (-n);
	else
		return (n);
}

int		check(int i, int c)
{
	if (((c > 47) && (c < 58)) || (((c == '-') || (c == '+')) && (i == 0)))
		return (1);
	else
		return (0);
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
		//printf("GG\n");
		c = str[i];
		if (check(i, c))
		{
			//printf("H\n");
			if (((c > 47) && (c < 58)))
			{
				//printf("R\n");
				n += (c - 48) * mypow(10, (size - k - i));
				//printf("%d\n", n);
			}
			else
				k++;
		}
		else
		{
			//printf("Jjjjjjjjjj\n\n\n\n");
			return (sortie(n, str, size - i - 1));
		}
		i++;
		//printf("%D  %d\n",i, size );
	}
	//printf("Aaaaaaaaaaaa\n\n\n\n");
	return (sortie(n, str, 0));
}




int		main(void)
{
   //printf("%d\n", atoi("-2147483648"));
   //printf("%d\n", ft_atoi("-2147483648"));
 
   //printf("%d\n", atoi("214k748364"));
   //printf("%d\n", ft_atoi("214k748364"));

   printf("%d\n", atoi("4/704523"));
   printf("%d\n", ft_atoi("4/704523"));

   //printf("%d\n", atoi("21/43647"));
   //printf("%d\n", ft_atoi("21/43647"));

   //printf("%d\n", atoi("-21*48t"));
   //printf("%d\n", ft_atoi("-21*48t"));

   //printf("%d\n", atoi("477"));
   //printf("%d\n", ft_atoi("477"));
return 0;
}
