#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}


//ex00
int main()
{
	ft_print_alphabet();
	return 0;
}
//ex01
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
//ex02
int main()
{
	ft_print_numbers();
	return 0;
}
//ex03
int main(int argc, const char *argv[])
{
	int i;

	i = -1;

	while (i != 2)
	{
		ft_is_negative(i);
		i++;
	}
	return 0;
}
//ex04
int main()
{
	ft_print_comb();
	return 0;
}
//ex05
int main()
{
	ft_print_comb2();
	return 0;
}
//ex06
int main()
{
	int i;

	i = -100;

	while (i != 500)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		i+= 50;
	}
	return 0;
}
//ex07
int main()
{
	int len;

	len = 5;

	ft_print_combn(len);
	return 0;
}