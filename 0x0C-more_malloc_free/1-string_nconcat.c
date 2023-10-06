#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat -  concatenates two strings.
* @s1: 1st string
* @s2: 2nd string
* @n: number of characters to concatenate from s2
* Return: string or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, x, y;

	len1 = findlen(s1);
	len2 = findlen(s2);

	if (n >= len2)
		n = len2;

	str = (char *) malloc((len1 + n + 1) * sizeof(char));

	if (!str)
		return (NULL);

	for (x = 0; x < len1 ; x++)
	{
		str[x] = s1[x];
	}

	for (y = 0; y < n; y++, x++)
	{
		str[x] = s2[y];
	}

	str[x] = '\0';
	return (str);
}

/**
* findlen - calculate length of the string
* @s: string
* Return: length of string
*/

int findlen(char *s)
{
	unsigned int len = 0;

	if (!s)
		len = 0;
	else
	{
		while (s[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}
