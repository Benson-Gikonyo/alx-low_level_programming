#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* isNumber - checks if a string is a number
* @str: string to be checked
* Return: result if a number, else 0
*/
int isNumber(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		return (isdigit(str[z]));
		z++;
	}
	return (0);
}


/**
* main - Entry point
* Description - adds positive numbers, and print the result,
* followed by a a new line.
* if no number is passed,  print 0 and a new line.
* if the arg is not a digit, print error and new line, and return 1
* @argc: number of arguments
* @argv: array of pointers to args
* Return: 0 or 1 if arguments < 3
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int x, y;

	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (isNumber(argv[x]))
			{
				y = atoi(argv[x]);

				if (y > 0)
				{
					sum = sum + y;
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
