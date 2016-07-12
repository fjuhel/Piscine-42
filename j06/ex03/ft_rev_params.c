int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	z;

	i = argc - 1;
	z = 0;
	while (i > 0)
	{
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i--;
	}
	return (0);
}
