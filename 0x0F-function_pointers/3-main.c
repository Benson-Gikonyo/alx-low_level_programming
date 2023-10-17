#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - perfoms simple math on two numbers
* @argc: number of arguments in argv
* @argv: array of arguments
* Return: Nothing
*/

int main(int argc, char **argv)
{
	int x = atoi(argv[1]);
	int y = atoi(argv[3]);
	int (*get_op)(int, int);
	int result;

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	get_op = get_op_func(argv[2]);
	if (get_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = (*get_op_func(argv[2]))(x, y);

	if (result)

	printf("%d\n", result);

	return (0);
}
