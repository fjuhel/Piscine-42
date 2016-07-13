#include <stdlib.h>

int compute_len(int argc, char **argv)
{
	int i;
	int len;

	len = 0;
	while(argc > 0)
	{
		i = 0;
		while (argv[argc - 1][i++])
			len ++;
		argc--;
	}
	return (len);
}

char * ft_strcat(char *dest, char *src)
{
	char *str;

	str = dest; 
	while (*str != '\0')
		str++;
	while (*src != '\0')
		*str++ = *src++;
	*str = '\0';
	return (str);
}

char *ft_concat_params(int argc, char **argv)
{
	int len;
	char *dest;

	len = compute_len(argc, argv); 
	dest = malloc(sizeof(*dest) * len + argc);
	while (argc-- > 0)
	{
		ft_strcat(dest, argv[argc]);
		if (argc > 0)
			ft_strcat(dest, "\n");
	}
	return (dest);
}
