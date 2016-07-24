#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 4096

ft		*tab_colles()
{
	ft	*tab;

	tab = malloc(sizeof(*tab) * (5 + 1));
	tab[0] = &colle00;
	tab[1] = &colle01;
	tab[2] = &colle02;
	tab[3] = &colle03;
	tab[4] = &colle04;
	tab[5] = 0;
	return (tab);
}

int	print_if(char *input, ft *colles, int i, int prev)
{
	int width;
	int height;
	char *data_ref;

	width = get_width(input);
	height = get_height(input);
	data_ref = colles[i](width, height);
	if (ft_strcmp(input, data_ref) == 0)
	{
		if (prev != 0)
		{
			ft_putstr(" || ");
		}
		ft_putstr("[colle-0");
		ft_putnbr(i);
		ft_putstr("] [");
		ft_putnbr(width);
		ft_putstr("] [");
		ft_putnbr(height);
		ft_putstr("]");
		return (1);
	}
	free(data_ref);
	return (0);
}

char	*get_input()
{
	int		pos;
	int		len;
	char	buff[BUFFER_SIZE];
	t_list	*list;

	len = 0;
	while ((pos = read(0, buff, BUFFER_SIZE)))
	{
		buff[pos] = '\0';
		len += pos;
		ft_list_push_back(&list, buff);
	}
	return (list_to_str(list, len));
}

int		main(void)
{
	int		i;
	int		prev;
	char	*input;
	ft		*colles;

	i = 0;
	prev = 0;
	input = get_input();
	colles = tab_colles();
	if (get_width(input) <= 0 || get_height(input) <= 0)
	{
		ft_putstr("aucune");
	}
	else
	{
		while (i < 5)
			if (prev == 0)
				prev = print_if(input, colles, i++, prev);
			else
				print_if(input, colles, i++, prev);
		if (prev == 0)
			ft_putstr("aucune");
	}
	ft_putchar('\n');
	free(input);
	return (0);
}
