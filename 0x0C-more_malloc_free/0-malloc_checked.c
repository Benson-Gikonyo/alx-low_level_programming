#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - allocates memory using malloc.
* Description - upon failure, cause normal process
* termination with a status value of 98
* @b: memory to allocate
* Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}
	else
		return (ptr);
}
