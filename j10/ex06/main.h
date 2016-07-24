/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:07:35 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 16:07:36 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <unistd.h>

typedef int	(*t_ft)(int, int);

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_num(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

#endif
