#include <unistd.h>

typedef int (*ft)(int, int);

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

int		ft_num(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	return (a / b);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	char operateur[4];
	ft ft_array[4];

	ft_array[0] = add;
	ft_array[1] = sub;
	ft_array[2] = mul;
	ft_array[3] = div;
	operateur[0] = '+';
	operateur[1] = '-';
	operateur[2] = '*';
	operateur[3] = '/';
	i = 0;
	if (argc != 4)
		return (1);
	while (operateur[i] != argv[2][0] && i < 4)
		i++;
	if (argv[2][1] != '\0' || i > 3)
		ft_putchar('0');
	else
		ft_putnbr(ft_array[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
	ft_putchar('\n');
	// Division par 0 à gérer.
	// Modulo a ajouter.
	return (0);
}
