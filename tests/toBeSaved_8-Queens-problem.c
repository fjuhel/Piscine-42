/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 10:20:39 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/08 10:20:41 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void board(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 8) // lines
	{
		j = 0;
		while (j < 8) // columns
		{
			if (str[j] == i + '0')
				printf("*");
			else
				printf("o");
			printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
}

int		check(char *str)
{
	int i;
	int j;
	int delta_r;
	int delta_c;

	i = 0;
	while (i < 7)
	{
		j = i + 1;
		while (j < 8)
		{
			if ((str[i] != '/') && (str[j] != '/'))
			{
				delta_r = str[j] - str[i];
				if (delta_r < 0)
					delta_r = - delta_r;
				delta_c = j - i;
				if (((delta_r == delta_c) || (str[i] == str[j])))  // && or || ??
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		solver(char *str, int pos, int *pn)
{
	int k;
	if (pos == 8)
	{
		board(str);
		printf("\n");
		*pn = *pn + 1;
		return (0);
	}
	k = 0;
	while (k < 8)
	{
		str[pos] = k + '0';
		if (check(str))
		{
			if (solver(str, pos + 1, pn))
				return (1);
		}

		k++;
	}
	str[pos] = '/';
	return (0);
}

void	ft_eight_queens_puzzle_2(void)
{
	int n;
	int *pn;

	n = 0;
	pn = &n;

	char str[] = {'/','/','/','/','/','/','/','/'};
	/*
	char str1[] = {'1','2','/','/','/','/','/','/'};
	char str2[] = {'1','1','/','/','/','/','/','/'};
	char str3[] = {'0','/','/','/','/','/','/','5'};
	printf("%d\n", check(str1));
	board(str1);
	printf("\n");
	printf("%d\n", check(str2));
	board(str2);
	printf("\n");
	printf("%d\n", check(str3));
	board(str3);
	*/
	solver(str, 0, pn);
	printf("%d\n", *pn);
	//board(str);
}



int main()
{
	ft_eight_queens_puzzle_2();
}
