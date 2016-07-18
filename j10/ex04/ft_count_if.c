int ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int n;

	i = -1;
	n = 0;
	while (tab[++i][0] != '0')
		if (f(tab[i]) == 1)
			n++;
	return (n);
}