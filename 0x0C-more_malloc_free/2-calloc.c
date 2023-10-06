#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *_calloc -  allocates memory for an array of nmemb elements
* of size bytes each and returns a pointer to the allocated
* memory.
* @nmemb: number of elements in array
* @size: length of each element
* Return: array or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **arr;

	if (nmemb < 1 || size < 1)
		return (NULL);

	arr = malloc(nmemb * size);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	arr = memset(arr, 0, (nmemb * size));
	return (arr);
}
