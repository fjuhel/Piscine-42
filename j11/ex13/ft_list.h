#ifndef LIST_H
# define LIST_H
# include <stdlib.h>

typedef	struct s_list t_list;

 struct s_list
{
	char	*data;
	t_list	*next;
};

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

#endif
