#include "main.h"

/**
* *_strstr -  locates a substring.
* @haystack: larger string
* @needle: substring to look for in haystack
* Return: a pointer to the beginning of needle, else NULL
*/

char *_strstr(char *haystack, char *needle)
{
	char *hay = haystack;
	char *need = needle;

	hay = haystack;
	need = needle;

	while (*hay)
	{
		while (*need)
		{
			if (*haystack == *needle)
			{
				hay++;
				need++;
			}
			else
				break;

		}
		if (*need == '\0')
			return (haystack);

		haystack++;
	}
	return ('\0');
}
