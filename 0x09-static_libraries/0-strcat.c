#include "main.h"

/**
* *_strcat -  concatenates two strings.
* Description - This function appends the src string to the dest
* string, overwriting the terminating null byte (\0) at the end
* of dest, and then adds a terminating null byte
* @dest: destination string
* @src: string to be concatenated to destintion string
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		len++;
		x++;
	}

	while (src[y] != '\0')
	{
		dest[len] = src[y];
		y++;
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
