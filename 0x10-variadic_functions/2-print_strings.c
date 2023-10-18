#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line.
* @separator: separator between strings
* @n: number of strings
* Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	char *str;

	va_start(args, n);

	for (x = 0; x < n ; x++)
	{
		str = va_arg(args, char *);
		if (!str)
			printf("(nil)");

		else
		{
			printf("%s", str);
		
			if (separator != NULL && x < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}

	va_end(args);
	printf("\n");
}
