#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


char **ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int k;
	char **dest;
	char *tmp;

	dest = malloc(sizeof(**dest) * 4 + 1);
	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		k = 0;
		while(str[i + j] != '\n' && str[i + j] != '\t'
			&& str[i + j] != ' ' && str[i + j] != '\0')
			j++;
		printf("i = %d et j = %d\n", i, j);
		tmp = malloc(sizeof(*tmp) * j + 1);
		
		while (k < j)
		{
			tmp[k] = str[i + k];
			k++;
		}
		printf("%s\n", tmp);
		
		tmp[k] = '\0';
		dest[i] = tmp;
		i += j;
		i++;
	}
	dest[4 + 1] = '\0';
	return (dest);
}

/* Test ex04 */

int main()
{
	char str[] = "Salut\nles\npetits\nmoutons.";
	char **list = ft_split_whitespaces(str);
/*
	for(int i = 0; i < 3 ; i++)
		for (int j = 0; j<3; j++)
			printf("%s\n", list[i][j]);
*/
	return (0);
}
