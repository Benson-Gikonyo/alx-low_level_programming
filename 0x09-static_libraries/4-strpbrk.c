#include "main.h"

/**
* *_strpbrk -  searches a string for any of a set of bytes.
* Description -  locates the first occurrence in the string s of
* any of the bytes in the string accept and returns a pointer to
* the byte in s that matches one of the bytes in accept, or NULL
* if no such byte is found
* @s: string to search in
* @accept: bytes to look for
* Return: pointer to s or null
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (&s[x]);
		}
	}
	return ('\0');
}
