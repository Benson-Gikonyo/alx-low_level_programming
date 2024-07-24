#include "main.h"

/**
* *_memcpy -  copy memory from source to destination.
* @src: memory area to be copied frim.
* @dest: memory area to be copied to
* @n: number of bytes to be copied
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
