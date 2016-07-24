//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	int ac = 3;
	char s1[] = "Bonjour petite.";
	char s2[] = "Au revoir gamin.";
	char s3[] = "Rook to e8, checkmate";
	char *av[3];
	av[0] = s1;
	av[1] = s2;
	av[2] = s3;

	t_stock_par *tab;
	tab = ft_param_to_tab(ac, av);
	ft_show_tab(tab);
	return 0;
}











int		compute_nb_words(char *str)
{
	int text;
	int n;

	n = 0;
	text = 0;
	while (*str)
	{
		if ((*str == '\n' || *str == '\t' || *str == ' ')
			&& (*(str + 1) != '\n' && *(str + 1) != '\t'
				&& *(str + 1) != ' ' && *(str + 1) != '\0'))
			n++;
		if (*str > 32 && *str < 127)
			text = 1;
		str++;
	}
	if (text == 0)
		return (0);
	return (n + 1);
}

int		set(char *src, char *str, int start, int end)
{
	int		i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < end - start)
	{
		str[i] = src[start + i];
		i++;
	}
	str[i] = '\0';
	return (1);
}

int		intermediaire(char **dest, char *str, int i, int n)
{
	int j;

	j = 0;
	while (str[i + j] != '\n' && str[i + j] != '\t'
		&& str[i + j] != ' ' && str[i + j] != '\0')
		j++;
	if (j > 0)
	{
		dest[n] = malloc(sizeof(**dest) * j + 1);
		if (dest[n] == NULL)
			return (-1);
		set(str, dest[n], i, i + j);
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		n;
	char	**dest;

	if (ft_strlen(str) == 0 || compute_nb_words(str) == 0)
		return (NULL);
	dest = malloc(sizeof(*dest) * compute_nb_words(str) + 1);
	if (dest == NULL)
		return (dest);
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		j = intermediaire(dest, str, i, n);
		if (j == -1)
			return (NULL);
		else if (j > 0)
			n++;
		i += j + 1;
	}
	dest[n] = NULL;
	return (dest);
}

#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	while (par->str != 0)
	{
		ft_putstr(par->copy);
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		i = 0;
		while(par->tab[i] != 0)
		{
			ft_putstr(par->tab[i]);
			i++;;
		}
		par++;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////


/* Test ex02  */

#include "ft_boolean.h"

void	ftputstr(char *str)
{
	while (*str)
		write(1,str++,1);
}

t_bool	ft_is_even(int nbr)
{
		return ((EVEN(nbr)) ? TRUE : FALSE);
}

int		main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ftputstr(EVEN_MSG);
	else
		ftputstr(ODD_MSG);
	return (SUCCESS);
}

/* Test ex03  */
#include "ft_abs.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("%d\n", (ABS(214875232)));
	return (0);
}

/* Test ex04  */
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_pointpoint;
	set_point(&point);
	return(0);
}





/*  Test ex06 */
int main()
{
	int size_param1 = 15;
	char *copy1 = "Joli petit chapeau";
	char *s1 = "Joli";
	char *s2 = "petit";
	char *s3 = "chapeau";
	char *str1 = copy1;
	char *tab1[4];
	tab1[0] = s1;
	tab1[1] = s2;
	tab1[2] = s3;
	tab1[3] = NULL;

	t_stock_par	p1;
	p1.size_param = size_param1;
	p1.str = str1;
	p1.copy = copy1;
	p1.tab = tab1;

	int size_param2 = 15;
	char *copy2 = "Sale mechant crapeau tout sale";
	char *s4 = "Sale";
	char *s5 = "mechant";
	char *s6 = "crapeau";
	char *s7 = "tout";
	char *s8 = "sale";
	char *str2 = copy2;
	char *tab2[6];
	tab2[0] = s4;
	tab2[1] = s5;
	tab2[2] = s6;
	tab2[3] = s7;
	tab2[4] = s8;
	tab2[5] = NULL;

	t_stock_par	p2;
	p2.size_param = size_param2;
	p2.str = str2;
	p2.copy = copy2;
	p2.tab = tab2;

	t_stock_par p3;
	p3.str = NULL;



	t_stock_par	dest[3];
	dest[0] = p1;
	dest[1] = p2;
	dest[2] = p3;

	ft_show_tab(dest);

	return 0;
}
