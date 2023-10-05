#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as
* a parameter.
* Description - returns NULL if str = NULL, or insuffficient
* memory
* @str: string to be copied
* Return: pointer to copy or NULL
*/

char *_strdup(char *str)
{
	int x = 0;
	int len = 0;
	char *cpy;

	if (!str)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	cpy = (char *) malloc(len * sizeof(char) + 1);

	if (!cpy)
		return (NULL);

	for (x = 0; x < len; x++)
	{
		cpy[x] = str[x];
	}
	cpy[x + 1] = '\0';

	return (cpy);
}

