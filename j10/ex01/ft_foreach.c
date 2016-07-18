#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

void pr(int n)
{
	printf("%d\n", n);
}

int main()
{
	int tab[5] = {1, 2, 5, 4, 3};
	ft_foreach(tab, 5, &pr);
	return 0;
}