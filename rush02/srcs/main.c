#include <stdio.h>
#include <unistd.h>
# include <stdlib.h>

#define BUFFER_SIZE 67108864

int		main(void)
{
	int		pos;
	int		len;
	char	buff[BUFFER_SIZE];

	len = 0;
	while ((pos = read(0, buff, BUFFER_SIZE)))
	{
		buff[pos] = '\0';
		len += pos + 1;
		printf("YO ->\n%s",buff);
	}
	return (0);
}