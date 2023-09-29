#include "main.h"

/**
* *_strncpy - copy a string
* Description: works exactly like strncpy
* @dest: string to copy to
* @src: string to copy
* @n: number of characters of src to copy
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
