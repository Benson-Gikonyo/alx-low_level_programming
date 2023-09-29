#include "main.h"

/**
* *_strncat - concatenates two strings.
* similar to the _strcat function, except that
* it will use at most n bytes from src; and
* src does not need to be null-terminated if it contains n or more bytes
* @src:  string to copy
* @dest: string to copy to
* @n: number of chars to copy from src
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int y = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[y] != '\0' && y < n)
	{
		dest[len] = src[y];
		len++;
		y++;
	}

	dest[len] = '\0';

	return (dest);
}
