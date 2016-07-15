#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}

/*
int		main_ft_putnbr_base()
{
	int k = +123;
	char base1[] = "01";
	char base2[] = "0123456789ABCDEF";
	char base3[] = "poneyvif";
	char base4[] = "mrdoc";
	ft_putnbr_base(k,base1);
	ft_putchar('\n');
	ft_putnbr_base(k,base2);
	ft_putchar('\n');
	ft_putnbr_base(k,base3);
	ft_putchar('\n');
	ft_putnbr_base(k,base4);
	ft_putchar('\n');
	return 0;
}
*/


int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int n;
	int limit;
	int base_size;
	int neg;

	neg = 1;
	i = str_checking(str, base);
	n = 0;
	base_size = 0;
	
	if (base_checking(base) == 0)
		return (0);
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = -1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (base[base_size])
		base_size++;
	limit = i;
	while (ft_find(base, str[limit]) != -1)
		limit++;
	while (ft_find(base, str[i]) != -1)
	{
		n += (str[i] - 48) * ft_recursive_power(base_size, limit - i - 1);
		i++;
	}
	return (n * neg);
}

int		main(void)
{
	char base[] = "toi";

	printf("1 => %d\n", ft_atoi_base("oit", base)); // 11
	printf("2 => %d\n", ft_atoi_base(" +ito", base)); // 3
	printf("3 => %d\n", ft_atoi_base("101", base)); // 5
	printf("4 => %d\n", ft_atoi_base("   +101", base)); // 5
	printf("5 => %d\n", ft_atoi_base("   -011", base)); // -3
	printf("6 => %d\n", ft_atoi_base("[1", base)); // 0
	printf("7 => %d\n", ft_atoi_base("", base)); // 0
	printf("8 => %d\n", ft_atoi_base(" ", base)); // 0
	printf("9 => %d\n", ft_atoi_base("+2147483647", base)); // 0
	printf("10 => %d\n", ft_atoi_base("-2147483648", base)); // 0
	return 0;
	
}
