#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers.
* Description - each element is initialized to zero
* @width: 1st dimension of array
* @height: 2nd dimension of array
* Return: pointer to array, else NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = (int *) malloc(width * sizeof(int));

		if (arr[x] ==  NULL)
		{
			for (y = 0; y <= x; y++)
			{
				free(arr[y]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}
	return (arr);
}
