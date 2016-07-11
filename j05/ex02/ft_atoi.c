/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:40:00 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 12:40:02 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int main()
{
	printf("1 => %d\n",ft_atoi("- 1")); //return 0
	printf("2 => %d\n",ft_atoi(" +3")); //return 3
	printf("3 => %d\n",ft_atoi(" 0006")); //return 6
	printf("4 => %d\n",ft_atoi("8-2")); //return 8
	printf("5 => %d\n",ft_atoi("  1254]")); //return 1254
	printf("6 => %d\n",ft_atoi("[1")); //return 0
	printf("7 => %d\n",ft_atoi("")); //return 0
	printf("8 => %d\n",ft_atoi(" ")); //return 0
}