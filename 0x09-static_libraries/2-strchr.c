#include <stddef.h>
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
	int x = 0;
	char *p;

	while (s[x] != '\0')
	{
		if (s[x] != c || c == '\0')
		{
			p = NULL;
			continue;
		}
		else if (s[x] == c)
		{
			p = &s[x];
			break;
		}
		x++;
	}
	return (p);
}
