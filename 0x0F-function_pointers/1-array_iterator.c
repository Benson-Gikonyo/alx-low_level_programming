#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function pointer on each array element
* @array: array of elements
* @size: Number of array elements
* @action: function pointer to be executed
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int x = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
