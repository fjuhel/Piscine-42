/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:06:36 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:06:37 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char * ft_strncat(char *dest, char *src, int nb)
{
	int i;

	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i++ < nb)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}


/* strncat example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[20];
  char str2[20];
  strcpy (str1,"To be ");
  strcpy (str2,"or not to be");
  
  strncat (str1, str2, 6);
  //ft_strncat (str1, str2, 6);
  puts (str1);
  return 0;
}