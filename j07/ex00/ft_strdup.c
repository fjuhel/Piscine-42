#include <stdlib.h>

char	*ft_strdup(char *src)
{
    char	*str;
    char	*p;
    int		size;

    size = 0;
    while (src[size])
        size++;
    str = malloc(size + 1);
    p = str;
    while (*src)
        *p++ = *src++;
    *p = '\0';
    return (str);
}
