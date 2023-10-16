#include <stdlib.h>
#include <math.h>
#include "function_pointers.h"

/**
* int_index -  searches for an interger
* @array: array of elements to get interger from
* @size: number of elements in array
* @cmp: function pointer to identify interger
*
* Return: index of the first element for which the cmp
* function does not return 0, else return -1 if there's no match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
