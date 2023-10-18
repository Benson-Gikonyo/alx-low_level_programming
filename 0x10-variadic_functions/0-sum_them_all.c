#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of parameters to be added
* Return: sum or 0
*
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int x;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
