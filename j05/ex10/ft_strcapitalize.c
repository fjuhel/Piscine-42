/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:42:08 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:42:09 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int i;
	int space;

	i = 0;
	space = 1;
	while (str[i] != '\0')
	{
		if (space == 1 && str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		if (str[i] < 48 || str[i] > 122)
			space = 1;
		else if ((str[i] > 57 && str[i] < 65) || (str[i] > 90 && str[i] < 97))
			space = 1;
		else
			space = 0;
		i++;
	}
	return (str);
}
