/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:06:58 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:06:59 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int n;

	n = 0;
	while (*src != '\0' && n++ < size - 1)
		*dest++ = *src++;
	while (*src++ != '\0')
		n++;
	*dest = '\0';
	return (n - 1);
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
  
  printf("%lu\n", strlcpy (str1, str2, 25));
  //printf("%d\n", ft_strlcpy (str1, str2, 25));

  puts (str1);
  return 0;
}