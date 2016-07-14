/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:30:12 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/13 13:30:13 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		compute_len(int argc, char **argv)
{
	int i;
	int len;

	len = 0;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc - 1][i++])
			len++;
		argc--;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char *str;

	str = dest;
	while (*str != '\0')
		str++;
	while (*src != '\0')
		*str++ = *src++;
	*str = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int		len;
	char	*dest;

	i = 1;
	len = compute_len(argc, argv);
	dest = malloc(sizeof(*dest) * len + argc - 1);
	if (dest == NULL)
		return (dest);
	while (i < argc)
	{
		ft_strcat(dest, argv[i]);
		if (i++ < argc - 1)
			ft_strcat(dest, "\n");
	}
	dest[len + argc - 2] = '\0'; 
	return (dest);
}
#include <stdio.h>
int main(int argc, char ** argv)
{
	printf("%s",ft_concat_params(argc, argv));
	return 0;
}