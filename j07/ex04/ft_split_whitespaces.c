#include <stdlib.h>
#include <stdio.h>

char **ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int k;
	int n;
	char **dest;
	char *tmp;

	dest = malloc(sizeof(**dest) * 4 + 1);
	i = 0;
	n = 0;
	while(str[i] != '\0')
	{
		j = 0;
		k = 0;
		while(str[i + j] != '\n' && str[i + j] != '\t'
			&& str[i + j] != ' ' && str[i + j] != '\0')
			j++;
		//printf("i = %d et j = %d\n", i, j);
		tmp = malloc(sizeof(*tmp) * j + 1);
		
		while (k < j)
		{
			tmp[k] = str[i + k];
			k++;
		}
		if (tmp != "^D@")
		{
			printf("%d\n", tmp);
			
			tmp[k] = '\0';
			printf("%s\n", tmp);
			dest[n] = tmp;
			printf("%s\n", dest[n]);
			for(int z = 0; z < n + 1; z++)
				printf("----------->%s\n", dest[z]);
			i += j;
			i++;
			n++;
		}
		else
			printf("Vamos a la playa\n");

	}
	//dest[4 + 1] = '\0';
	return (dest);
}

/* Test ex04 */

int main()
{
	char str[] = "salut\nles\npetits\nmoutons";
	char **list = ft_split_whitespaces(str);

	for(int i = 0; i < 5 ; i++)
			printf("%s\n", list[i]);

	return (0);
}
