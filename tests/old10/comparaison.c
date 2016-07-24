/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparaison.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:04:43 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 16:04:45 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
