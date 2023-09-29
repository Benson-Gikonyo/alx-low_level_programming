#include <stdio.h>

/**
* main - Entry point
* Description - prints all arguments it receives,
* including the 1st one, followed by a new line.
* @argc: number of arguments
* @argv: array of pointers to arguments
* Return: 0
*/

int main(int argc, char **argv)
{
	int x = 0;

	for (x = 0; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
