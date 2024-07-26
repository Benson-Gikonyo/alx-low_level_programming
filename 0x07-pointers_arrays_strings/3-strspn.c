#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* Description - Returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
* @s:  grand string
* @accept: substring of s
* Return: number of bytes in both s and accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int x;
	unsigned int y;
	int check;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				check = 1;
				count++;
			}
		}
		if (check == 0)
			return (count);
	}
	return (0);
}
