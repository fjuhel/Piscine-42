#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int size;

	array = NULL;
	size = max - min;
	if (min >= max)
		return (0);

	array = malloc(sizeof(*array) * size);
	*range = array;
	while (min < max)
		*array++ = min++;
	return (size);
}
