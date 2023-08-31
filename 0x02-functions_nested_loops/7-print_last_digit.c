#include <stdio.h>
#include "main.h"

/**
* print_last_digit - print the last digit of a number x
* Description: returns the last digit of the number x
*
* @n: parameter - number to be tested
*
* Return: last number of digit
*/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
