/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:05:40 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:05:42 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	char str1[] = "abcdefghijklmnopqrstuvxyz";
	char str2[] = "abcdefghijklmn`{opqrstuvxyz";
	char str3[] = "";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	return 0;
}


