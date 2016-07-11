/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:41:41 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:41:44 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char s1[] = "BaObAb";
	char s2[] = "BI()&$@BLO[22";

	printf("%s  ->  %s\n", s1, ft_strlowcase(s1));
	printf("%s  ->  %s\n", s2, ft_strlowcase(s2));
	return (0);
}



