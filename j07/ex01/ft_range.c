#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int *p;

	range = NULL;
	if (min >= max)
		return (range);
	range = malloc(sizeof(*range) * (max -min));
	p = range;
	while (min < max)
		*p++ = min++;
	return (range);
}
