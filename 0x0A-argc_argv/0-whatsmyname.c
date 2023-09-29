#include <stdio.h>

/**
* main - Entry point
* Description - program that prints its name, followed by a new line
* regardless of if the program name is changed.
* You should not remove the path before the name of the program.
* @argc: number of arguments
* @argv: array of pointers to arguments
* Return: 0
*/

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
