

#ifndef MAIN_H
# define MAIN_H
# include <stdlib.h>
# include <unistd.h>
# include "list.h"

int		eval_expr(char *str);
char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

#endif