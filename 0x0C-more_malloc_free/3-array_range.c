#include "main.h"
#include <stdlib.h>

/**
* *array_range - creates an array of integers between
* min and max (both inclusive)
* @min: lowest number in the range
* @max: highest number in the range
* Return: array or NULL on failure
*/

int *array_range(int min, int max)
{
	int *arr;
	int x, len, y = 0;

	if (min > max)
		return (NULL);

	len = max - min;
	arr = (int *) malloc((len + 1) * sizeof(int));

	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (x = min; x <= max; x++, y++)
	{
		arr[y] = x;
	}
	return (arr);
}
