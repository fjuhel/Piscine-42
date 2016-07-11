/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:41:27 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:41:29 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char s1[] = "BaObAb";
	char s2[] = "bi`()&$@Blo2{2";

	printf("%s  ->  %s\n", s1, ft_strupcase(s1));
	printf("%s  ->  %s\n", s2, ft_strupcase(s2));
	return (0);
}
