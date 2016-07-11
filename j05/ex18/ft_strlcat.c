/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:06:47 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:06:48 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int n;

	n = 0;
	while (*dest++ != '\0')
		n++;
	dest --;
	while (*src != '\0' && n++ < size - 1)
		*dest++ = *src++;
	while (*src++ != '\0')
		n++;
	*dest = '\0';
	return (n - 1);
}

/* strncat example */

#include <string.h>

int main ()
{
  char str1[20];
  char str2[20];
  strcpy (str1,"To be ");
  strcpy (str2,"or not to be");
  
  printf("%lu\n", strlcat (str1, str2, 8));
  //printf("%d\n", ft_strlcat (str1, str2, 8));

  puts (str1);
  return 0;
}
