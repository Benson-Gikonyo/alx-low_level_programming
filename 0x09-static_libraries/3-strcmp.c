#include "main.h"

/**
* _strcmp - compares two strings.
* Description - return an integer less than, equal to,
* or greater than zero if s1 < s2, s1 = s2, or s1 > s2 respectively
* @s1: 1st string for comparison
* @s2: 2nd string for comparison
* Return: interger
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int diff;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		diff = s1[x] - s2[x];

		if (diff != 0)
		{
			break;
		}
		else
		{
			x++;
		}
	}
	return (diff);
}
