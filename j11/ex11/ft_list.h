#ifndef LIST_H
# define LIST_H

typedef	struct s_list t_list;

 struct s_list
{
	char	*data;
	t_list	*next;
};

t_list *ft_list_find(t_list *begin_list,void*data_ref,int(*cmp)());

#endif
