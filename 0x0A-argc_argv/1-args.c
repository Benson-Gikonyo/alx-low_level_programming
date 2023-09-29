#include <stdio.h>

/**
* main - Entry point
* Description - prints the number of arguments passed into it.
* print a number, followed by a new line
* @argc: number of arguments
* @argv: array of pointers to arguments
* Return: 0
*/

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int x;

	x = argc - 1;

	printf("%d\n", x);

	return (0);
}
