
/* Test ex00 */
#include <stdio.h>
#include <string.h>
int main()
{
	//char s1[] = "Salut les poules.";
	char s1[] = "";
	printf("%s\n", s1);
	printf("%s\n", strdup(s1));
	printf("%s\n", ft_strdup(s1));
}

/* Test ex01 */
#include <stdio.h>
int main()
{
	int *tab = ft_range(5,0);
	//printf("%d\n", tab);
	for(int i=0;i<10;i++)
		printf("%d\n", tab[i]);
	return (0);
}

/* Test ex02 */
#include <stdio.h>
int main()
{
	int min = 0;
	int max = 10;
	int len;
	int **tab;

	len = ft_ultimate_range(tab, min, max);
	printf("%d\n", len);
	return 0;
}

/* Test ex02 */
#include <stdio.h>
int main()
{
	int min = 0;
	int max = 10;
	int len;
	int **tab;

	len = ft_ultimate_range(tab, min, max);
	printf("%d\n", len);
	return 0;
}

/* Test ex03 */
#include <stdio.h>
int main()
{
	int n = 3;
	char arg1[] = "Velo";
	char arg2[] = "Moto";
	char arg3[] = "Auto";
	char **arg;

	arg[0] = arg1;
	arg[1] = arg2;
	arg[2] = arg3;
	//printf("%d\n", compute_len(n, arg));
	printf("%s\n", ft_concat_params(n, arg));
	return 0;
}