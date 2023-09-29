#include <stdio.h>
#include "main.h"

/**
* _strlen - return the length of a string
* @s: string to be measured
* Return: length
*/

int _strlen(char *s)
{
	int x = 0;
	int length = 0;

	while (s[x] != '\0')
	{
		length++;
		x++;
	}

	return (length);
}
