#include "main.h"

/**
* *_memcpy - copies memory area.
* @dest: destination area for copied bytes
* @src: area to copy bytes from
* @n: number of bytes to copy
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
