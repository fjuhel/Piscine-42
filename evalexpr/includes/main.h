/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 20:46:16 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 20:46:17 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <stdlib.h>
# include <unistd.h>
# include "list.h"

int		count_tokens(char *str);
char	**splitter(char *str);
int		g(char *str);
char	*a(char *opera, int op1, int op2);
int		is_operator(char *str);

int		eval_expr(char *str);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_itoa(int i);

#endif
