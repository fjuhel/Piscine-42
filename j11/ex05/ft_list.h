#ifndef LIST_H
# define LIST_H
#include <stdlib.h>

typedef	struct s_list t_list;

 struct s_list
{
	char	*data;
	t_list	*next;
};

t_list *ft_create_elem(void *data);
t_list *ft_list_push_params(int ac, char **av);

#endif
