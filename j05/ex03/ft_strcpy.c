/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:12 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:14 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);//(src);
}

/* strcpy example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]="Sample string";
  char str2[8];
  char str3[12];
  //strcpy (str2,str1);
  strcpy (str3,"copy successful");
  //ft_strcpy (str2,str1);
  //ft_strcpy (str3,"copy successful");
  //ft_strcpy (str2,str1);
  //ft_strcpy (str3,"copy successful");
  
  
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}