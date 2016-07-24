/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:08:33 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 16:08:34 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_array(void)
{
	char operateur[4];
	ft ft_array[4];

	ft_array[0] = add;
	ft_array[1] = sub;
	ft_array[2] = mul;
	ft_array[3] = div;
	ft_array[4] = mod;
	operateur[0] = '+';
	operateur[1] = '-';
	operateur[2] = '*';
	operateur[3] = '/';
	operateur[4] = '%';

	ft_array[5] = sup;
	ft_array[6] = sup_ou_egal;
	ft_array[7] = inf;
	ft_array[8] = inf_ou_egal;
	ft_array[9] = egal;
	ft_array[10] = diff;
	operateur[0] = '>';
	operateur[1] = '>=';
	operateur[2] = '<';
	operateur[3] = '<=';
	operateur[4] = '%';



	ft_array[11] = div;
	ft_array[12] = add;
	ft_array[1] = sub;
	ft_array[2] = mul;
	ft_array[3] = div;
	ft_array[0] = add;
	ft_array[1] = sub;
	ft_array[2] = mul;
	ft_array[3] = div;


}

int sup(int a, int b)
{
	return ((a > b) ? 1 : 0);
}

int sup_ou_egal(int a, int b)
{
	return ((a >= b) ? 1 : 0);
}

int inf(int a, int b)
{
	return ((a < b) ? 1 : 0);
}

int inf_ou_egal(int a, int b)
{
	return ((a <= b) ? 1 : 0);
}

int egal(int a, int b)
{
	return ((a == b) ? 1 : 0);
}

int diff(int a, int b)
{
	return ((a != b) ? 1 : 0);
}
