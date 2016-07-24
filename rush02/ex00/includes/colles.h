/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colles.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:33:50 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:33:52 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLES_H
# define COLLES_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

int		colle00(int x, int y);
int		colle01(int x, int y);
int		colle02(int x, int y);
int		colle03(int x, int y);
int		colle04(int x, int y);

#endif
