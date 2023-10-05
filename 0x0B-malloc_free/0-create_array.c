#include <stdlib.h>
#include "main.h"

/**
* *create_array - creates an array of chars, and initializes
* it with a specific char.
* Description - Returns NULL if size = 0 and a pointer to
* the array, or NULL if it fails
* @size: size of the array
* @c: character to initalize array
* Return: NULL, or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(size * sizeof(char));
	if (!arr)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}

	arr[x + 1] = '\0';

	return (arr);
}
