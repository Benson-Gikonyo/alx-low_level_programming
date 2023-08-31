#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, oper;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				oper = x * y;
				_putchar(44);
				_putchar(32);
				if (oper <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(oper + 48);
				}
				else if (oper <= 99)
				{
					_putchar(32);
					_putchar((oper / 10) + 48);
					_putchar((oper % 10) + 48);
				}
				else
				{
					_putchar(((oper / 100) % 10) + 48);
					_putchar(((oper / 10) % 10) + 48);
					_putchar((oper % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
