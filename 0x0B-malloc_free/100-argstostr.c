#include <stdlib.h>
#include "main.h"

/**
* char *argstostr - concatenates all the arguments of your program.
* @ac: number of program arguments
* @av: program arguments
* Description - Returns NULL if ac == 0 or av == NULL
* Each argument should be followed by a \n in the new string
* Return: pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int x, y, z, count = 0;
	char *str;

	if (ac == 0 || !av)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			count++;
		}
		count++;
	}

	str = (char *) malloc(count * sizeof(char) + 1);
	if (!str)
		return (NULL);

	z = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}
	str[z] = '\0';

	return (str);
}
