#include "main.h"

/**
* *_strcpy -  copies the string pointed to by src, including
* the terminating null byte (\0), to the buffer pointed to by dest.
* @dest: destination string
* @src: string to be copied
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int len = 0;
	int y;

	while (src[x] != '\0')
	{
		len++;
		x++;
	}

	for (y = 0; y <= len; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
