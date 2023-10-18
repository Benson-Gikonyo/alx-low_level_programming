#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line.
* Description - if separator is null, print nothing
* @n: number of numbers to be printed
* @separator: string to be printed btw numbers
* Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int x;
	unsigned int y;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
		{
			continue;
		}
		y = va_arg(args, int);

		printf("%d%s\n", y, separator);
	}
	printf("\n");

}
