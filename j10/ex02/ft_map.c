#include <stdlib.h>
int 	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *dest;

	i = -1;
	if(!(dest = malloc (sizeof(*dest) * length)))
		return (NULL);
	while (++i < length)
		dest[i] = f(tab[i]);
	return (dest);
}

int plus1(int n)
{
	return (n+1);
}

#include <stdio.h>
int main()
{
	int i;
	int *tab_output;
	int tab[5] = {1,2,4,5,6};
	
	i = 0;
	tab_output = ft_map(tab, 5, &plus1);
	while(i < 5)
		printf("%d\n", tab_output[i++]);
	return 0;
}