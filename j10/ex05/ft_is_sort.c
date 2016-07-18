#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = -1;
	while (++i < length - 1)
	{
		printf("a = %d | b = %d | b - a = %d\n", tab[i], tab[i+1], f(tab[i], tab[i+1]));
		if(f(tab[i], tab[i+1]) > 0)
			return (0);
	}
	return (1);
}

int diff(int a, int b)
{
	return (a - b);
}

int main()
{
	int t1[5] = {1, 2, 3, 4, 5};
	int t2[5] = {1, 2, 3, 5, 5};
	int t3[5] = {1, 2, 3, 7, 5};

	printf("%d\n", ft_is_sort(t1, 5, &diff));
	printf("%d\n", ft_is_sort(t2, 5, &diff));
	printf("%d\n", ft_is_sort(t3, 5, &diff));
	return 0;
}