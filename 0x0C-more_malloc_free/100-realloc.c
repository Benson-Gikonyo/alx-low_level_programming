#include <stdlib.h>
#include "main.h"

/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: the old pointer allocated with malloc: malloc(old_size)
* @old_size: size of ptr
* @new_size: size of new memory block
* Return: new pointer , else null.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr, *new_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			new_ptr[x] = old_ptr[x];
	}

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			new_ptr[x] = old_ptr[x];
	}

	free(ptr);
	return (new_ptr);
}
