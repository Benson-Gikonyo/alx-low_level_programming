#include <stdlib.h>
#include "main.h"

/**
* *str_concat -  concatenates two strings.
* Description - returned pointer should point to a newly
* allocated space in memory which contains the contents
* of s1, followed by the contents of s2, and null terminated
* @s1: 1st string
* @s2: 2nd string
* Return: pointer to concatenated string, else, NULL
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int x, y;
	int z = 0;
	char *cat;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	cat = (char *) malloc((len1 + len2) * sizeof(char) + 1);
	if (cat)
	{
		for (x = 0; x < len1; x++)
		{
			cat[x] = s1[x];
			z++;
		}

		for (y = 0; y < len2; y++)
		{
			cat[z] = s2[y];
			z++;
		}
		cat[z] = '\0';

		return (cat);
	}
	else
		return (NULL);
}
