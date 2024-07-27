#include "main.h"

/**
 * *_strstr -  locates a substring.
 * @haystack: larger string
 * @needle: substring to look for in haystack
 * Return: a pointer to the beginning of needle, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (!needle[y])
			return (&haystack[x]);
	}

	return ('\0');
}
