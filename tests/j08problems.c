
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


int		nb_words(char *str)
{
	int i;
	int sp;
	int count;

	i = 0;
	sp = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
		{
			i++;
			sp = 1;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
		{
			count += (sp == 1) ? 1 : 0;
			sp = 0;
			i++;
		}
	}
	return (count);
}

int		ft_ln_w(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((res = malloc(sizeof(char*) * (nb_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((res[j] = malloc(sizeof(char) * ft_ln_w(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}


//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////



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

void	ft_print_words(char **tab)
{	
	while (tab)
		ft_putstr(*tab++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		while (*(par->tab))
			ft_putstr(*(par->tab++));
		par++;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
