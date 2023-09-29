#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description - multiplies two numbers, and print the result,
* followed by a a new line.
* Assume the 2 numbers and the product can be stored in
* type int.
* @argc: number of arguments
* @argv: array of pointers to args
* Return: 0 or 1 if arguments < 3
*/

int main(int argc, char *argv[])
{
	int prod = 1;
	int x;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			prod = prod * atoi(argv[x]);
		}

		printf("%d\n", prod);
	}
	return (0);
}
