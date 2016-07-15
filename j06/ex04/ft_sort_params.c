/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:29:30 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/13 13:29:30 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putdoublestr(int n, char str[100][100])
{
	int i;
	int j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	tmp[argc];
	char	out[100][100];

	i = 0;
	while (++i < argc)
		ft_strcpy(out[i - 1], argv[i]);
	i = 0;
	while (i < argc)
	{
		j = -1;
		while (++j < argc - 1)
		{
			if (ft_strcmp(out[j], out[j + 1]) > 0)
			{
				ft_strcpy(tmp, out[j + 1]);
				ft_strcpy(out[j + 1], out[j]);
				ft_strcpy(out[j], tmp);
			}
		}
		i++;
	}
	ft_putdoublestr(argc, out);
	return (0);
}
