#include "main.h"

/**
* *_memset -  fills memory with a constant byte.
* @s: memory area to be filled.
* @b: byte to fill the memory with
* @n: number of bytes to be filled
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
