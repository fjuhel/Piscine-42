/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:05:53 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:05:54 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "ABCDEFGHIJKL@[MNOPQRSTUVWXYZ";
	char str3[] = "";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	return 0;
}

