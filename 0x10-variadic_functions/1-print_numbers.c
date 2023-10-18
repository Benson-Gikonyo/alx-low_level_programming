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

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (separator != NULL && x < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
