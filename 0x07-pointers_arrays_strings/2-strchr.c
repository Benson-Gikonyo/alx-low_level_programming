#include <stddef.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * Description - Returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character
 * is not found
 * @s: string to check
 * @c: character to be checked for
 * Return: pointer to the 1st occurence of c or null
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
