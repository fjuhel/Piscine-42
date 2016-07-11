/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:06:28 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:06:29 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char * ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

/* strcat example */
#include <stdio.h>
#include <string.h>

void t1()
{
  char str[80];
  strcpy (str,"these ");
  strcat (str,"strings ");
  strcat (str,"are ");
  strcat (str,"concatenated.");
  puts (str);
}

void t2()
{
  char str[80];
  strcpy (str,"these ");
  ft_strcat (str,"strings ");
  ft_strcat (str,"are ");
  ft_strcat (str,"concatenated.");
  puts (str);
}

int main()
{
	t2();
	return 0;
}