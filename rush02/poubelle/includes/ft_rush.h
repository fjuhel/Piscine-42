/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 11:04:43 by hmadad            #+#    #+#             */
/*   Updated: 2016/07/24 16:32:03 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;

typedef             void(*t_f)(int, int, t_list*);

void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
void				ft_list_affiche(t_list *begin_list);
void				ft_putnbr(int nb);
void				colle4(int x, int y, t_list *list);
void				colle3(int x, int y, t_list *list);
void				colle2(int x, int y, t_list *list);
void				colle1(int x, int y, t_list *list);
void				colle0(int x, int y, t_list *list);
int					ft_list_cmp(t_list *list1, t_list *list2);
void				ft_list_clear(t_list **begin_list);
int					ft_longueur(t_list *begin_list);
int					ft_hauteur(t_list *begin_list);

#endif
