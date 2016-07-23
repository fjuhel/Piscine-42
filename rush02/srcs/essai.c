#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
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

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	n;

	i = 0;
	neg = 1;
	n = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = -1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		n *= 10;
		n += ((int)str[i] - 48);
		i++;
	}
	return (n * neg);
}

void	carre(int x)
{
	int i;
	int j;

	if (x > 0)
	{
		i = x;
		while (i-- > 0)
		{
			j = x;
			while (j-- > 0)
				ft_putchar('o');
			ft_putchar('\n');
		}
	}
}

void	rectangle(int x, int y)
{
	int i;
	int j;
	if (x > 0 && y > 0)
	{
		i = x;
		while (i-- > 0)
		{
			j = y;
			while (j-- > 0)
				ft_putchar('o');
			ft_putchar('\n');
		}
	}
}

void	triangle1(int x)
{
	int i;
	int j;

	if (x > 0)
	{
		i = x;
		while(i-- > 0)
		{
			j = i + 1;
			while (j-- > 0)
				ft_putchar('o');
			ft_putchar('\n');
		}
	}
}

void	triangle2(int x)
{
	int i;
	int j;

	if (x > 0)
	{
		i = 0;
		while(i++ < x)
		{
			j = 0;
			while (j++ < i)
				ft_putchar('o');
			ft_putchar('\n');
		}
	}
}

void	losange(int x)
{
	int i;
	int j;
	int k;

	if (x > 0)
	{
		i = -1;
		j = 1;
		while (++i < x)
		{
			if (i < x / 2)
				j = 1 + 2 * i;
			else
				j = x - 2 * (i - x / 2);
			k = (x - j) / 2;
			while (k-- > 0 )
				ft_putchar(' ');
			k = j;
			while (k-- > 0)
				ft_putchar('o');
			ft_putchar('\n');
		}
	}
}

int test_carre(void)
{
	for (int i = 0; i < 5; i++)
	{
		ft_putstr("Carre de ");
		ft_putnbr(i);
		ft_putchar('\n');
		carre(i);
		ft_putchar('\n');
	}
	return (0);
}

int test_rectangle(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 ; j++)
		{
			ft_putstr("Rectange de ");
			ft_putnbr(i);
			ft_putstr(" par ");
			ft_putnbr(j);
			ft_putchar('\n');
			rectangle(i, j);
			ft_putchar('\n');
		}
	}
	return (0);
}

void	test_triangle(int choix)
{
	for(int i = 0; i < 5; i++)
	{
		ft_putstr("Triangle de ");
		ft_putnbr(i);
		ft_putchar('\n');
		if (choix == 1)
			triangle1(i);
		else
			triangle2(i);
		ft_putchar('\n');
	}
}

void	test_losange(void)
{
	for(int i = 8; i < 10; i++)
	{
		ft_putstr("Losange de ");
		ft_putnbr(i);
		ft_putchar('\n');
		losange(i);
		ft_putchar('\n');
	}
}
int main(int argc, char **argv)
{
	argc = argc + 1 - 1;
	if (argc == 2)
	{
		if (argv[1][0] == '1')
			test_carre();
		else if (argv[1][0] == '2')
			test_rectangle();
		else if (argv[1][0] == '3')
			test_triangle(1);
		else if (argv[1][0] == '4')
			test_losange();
	}
	return (0);
}