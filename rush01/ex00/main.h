/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 18:28:39 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/17 18:28:40 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <unistd.h>
# include <stdlib.h>

int		**g_grille_solved;

int		count_possibilities(int **p, int pos);
void	sort(int *dest, int *conflit);
int		*order(int **p);
int		check(int **p, int row, int col, int n);
int		solver(int **p, int pos, int *n, int *ord);
void	print(int **str);
int		check_input(char **argv);
int		**deep_copy_char(char **str);
int		**deep_copy_int(int **str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
