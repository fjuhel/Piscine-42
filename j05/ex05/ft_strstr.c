/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:42 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:44 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char *ft_strstr(char *str, char *to_find)
{
	int i;
	int	j;

	while (str[i] != '\0')
	{
		j = 0;
		while(to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0')
		{
			while (i > 0)
			{
				str++;
				i--;
			}
			return (str); 
		}
		i++;
	}
	return (0);
}

/* strstr example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="This is a simple string";
  char * pch1;
  char * pch2;
  pch1 = strstr (str,"");
  pch2 = ft_strstr(str,"");
  printf("%s  |  %s", pch1, pch2);
  return 0;
}