#include "main.h"
#include <stdio.h>

int		count_tokens(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while(str[i])
	{
		if (str[i] == ' ' || str[i] == '(' || str[i] == ')')
			n++;
		str++;
	}
	return (n + 1);
}

char **splitter(char *str)
{
	int i;
	int j;
	int k;
	int n;
	char **dest;

	i = 0;
	n = 0;
	if (!(dest = malloc(sizeof(*dest) * (count_tokens(str) + 1))))
		return (NULL);
	while (str[i])
	{
		j = i;
		while (str[j] == ' ')
			j++;
		i = j;
		while (str[j] != '(' && str[j + 1] >= '0' && str[j + 1] <= '9')
			j++;
		k = -1;
		if (!(dest[n] = malloc(sizeof(**dest) * (j - i + 1))))
			return (NULL);
		while (++k < j - i + 1)
			dest[n][k] = str[i + k];
		dest[n][k] = '\0';
		n++;
		i = j + 1;
	}
	dest[n] = 0;
	return (dest);
}

int		get_precedence(char *str)
{
	if (*str == '+' || *str == '-')
		return (1);
	else if (*str == '*' || *str == '/' || *str == '%')
		return (2);
	return (-1);
}

void	*apply_operator(char *opera, int op1, int op2)
{
	int n;
	void *p;

	if (*opera == '+')
		n = op1 + op2;
	else if (*opera == '-')
		n = op2 - op1;
	else if (*opera == '*')
		n = op1 * op2;
	else if (*opera == '/')
		n = op2 / op1;
	else if (*opera == '%')
		n = op2 % op1;
	p = &n;
	return (p);
}

int		is_operator(char *str)
{
	if (*str == '+' || *str == '-' || *str == '*' || *str == '/' || *str == '%')
		return (1);
	return (0);
}

int		evaluate_infix(char **expr, t_list **vs, t_list **os)
{
	int		i;

	i = -1;
	while (expr[i++])
	{
		if (is_operator(expr[i]) == 0 && expr[i][0] != '(' && expr[i][0] != ')')
			ft_list_push_back(vs, expr[i]);
		else if (is_operator(expr[i]))
		{
			while (ft_list_size(*os) != 0 && get_precedence(expr[i]) <= get_precedence((*os)->data))
				ft_list_push_back(vs, apply_operator(ft_list_pop(os), ft_atoi(ft_list_pop(vs)), ft_atoi(ft_list_pop(vs))));
			ft_list_push_back(os, expr[i]);
		}
		else if (expr[i][0] == '(')
			ft_list_push_back(os, expr[i]);
		else if (expr[i][0] == ')')
		{
			while ((*os)->data[0] != '(')
				ft_list_push_back(vs, apply_operator(ft_list_pop(os), ft_atoi(ft_list_pop(vs)), ft_atoi(ft_list_pop(vs))));
			ft_list_pop(os);
		}
	}
	return (0);
}

int		eval_expr(char *str)
{
	t_list	**vs;
	t_list	**os;

	vs = NULL;
	os = NULL;
	evaluate_infix(splitter(str), vs, os);
	while (ft_list_size(*os) != 0)
		ft_list_push_back(vs, apply_operator(ft_list_pop(os), ft_atoi(ft_list_pop(vs)), ft_atoi(ft_list_pop(vs))));
	while (ft_list_size(*vs) != 0)
		ft_list_pop(vs);//printf("%s\n", (char*)ft_list_pop(vs));
	return (0);
}


