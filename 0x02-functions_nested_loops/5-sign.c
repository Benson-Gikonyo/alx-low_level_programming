#include <stdio.h>
#include "main.h"

/**
* print_sign - print the sign of a number
* Desription - return 0 if n is 0, 1 if +ve, -1 for -ve
* @n: number to be checked
*
* Return: 1, 0, or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
