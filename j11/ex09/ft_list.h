#ifndef LIST_H
# define LIST_H

typedef	struct s_list t_list;

 struct s_list
{
	char	*data;
	t_list	*next;
};

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

#endif