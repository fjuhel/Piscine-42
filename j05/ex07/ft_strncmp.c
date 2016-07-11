/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:41:14 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:41:15 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
  int k = 0;

  printf("%d ?= %d\n", strncmp(s1, s2, k), ft_strncmp(s1,s2, k));
  printf("%d ?= %d\n", strncmp(s1, s3, k), ft_strncmp(s1,s3, k));
  return 0;
}
