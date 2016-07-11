/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:55 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:57 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i]-s2[i]);
		i++;
	}
	return (0);
}


#include <stdio.h>
#include <string.h>

int main ()
{
  char s1[] = "pomme";
  char s2[] = "pokme";
  char s3[] = "pomoe";

  printf("%d ?= %d\n", strcmp(s1, s2), ft_strcmp(s1,s2));
  printf("%d ?= %d\n", strcmp(s1, s3), ft_strcmp(s1,s3));
  return 0;
}