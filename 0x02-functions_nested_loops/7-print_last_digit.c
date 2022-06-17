#include "main.h"
/**
 * print_last_digit - prints the last
 * digit if a number.
 * @x : parameter for said function
 * Return: 0 or 1
 */
int print_last_digit(int x)
{
	int retval;

	if (x < 0)
	{
		retval = -1 * (x % 10);
	}
	else
	{
		retval = x % 10;
	}
	_putchar(retval + '0');

	return (retval);
}
