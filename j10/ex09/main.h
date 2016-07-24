/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 18:12:01 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/18 18:12:01 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <unistd.h>

typedef int		(*t_ft)(int, int);

typedef	struct	s_opp
{
	char		*op;
	t_ft		ft;
}				t_opp;

int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);
int				test_div_mod(int b, char op);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_num(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);

#endif
