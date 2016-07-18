#include <stdio.h>

int ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = -1;
	while (tab[++i][0] != '0')
		if (f(tab[i]) == 1)
			return (1);
	return (0);
}

int check2(char *str)
{
	while(*str)
	{
		if (*str == '2')
			return (1);
		str++;
	}
	return (0);
}

int main()
{
	char s1[] = "oqsdnfnofdnofg";
	char s2[] = " fong sngofq qfdffdsfqgqg";
	char s3[] = "0";

	char *str[3];
	str[0] = s1;
	str[1] = s2;
	str[2] = s3;

	printf("%d\n", ft_any(str, &check2));
	return 0;
}