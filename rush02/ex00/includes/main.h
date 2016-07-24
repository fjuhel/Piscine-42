/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:33:55 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/24 21:33:56 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <unistd.h>
# include <stdlib.h>

typedef char *(*t_ft)(int, int);

typedef	struct s_list	t_list;

struct			s_list
{
	char		*data;
	t_list		*next;
};

t_list			*ft_create_elem(void *data);
void			ft_list_push_front(t_list **begin_list, void *data);
void			ft_list_push_back(t_list **begin_list, char *data);
int				ft_list_size(t_list *begin_list);
void			print_list(t_list *list);

int				ft_strcmp(char *s1, char *s2);
void			ft_str_cat(char *dest, char *src);
char			*list_to_str(t_list *list, int n);
int				get_width(char *str);
int				get_height(char *str);

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);

char			*colle00(int x, int y);
char			*colle01(int x, int y);
char			*colle02(int x, int y);
char			*colle03(int x, int y);
char			*colle04(int x, int y);

char			*square(int x);
char			*rectangle(int x, int y);
char			*triangle(int x);
char			*triangle_rev(int x);
char			*diamond(int x);

#endif
