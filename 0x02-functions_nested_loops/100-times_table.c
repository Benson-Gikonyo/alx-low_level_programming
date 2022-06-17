#include "main.h"
/**
 * print_times_table - function that prints the n times
 * table, starting with 0. if n>15 or n<0, dont print.
 * @n : times table to use.
 * Return : void.
 */
void print_times_table(int n)
{
	int x = 0;
	int prod;
	int y;

	if (n < 0 || n > 15)
	{
		return;
	}
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			prod = x * y;
			if (y == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod < 100)
			{
				_putchar(' ');
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
			else
			{
				_putchar('0' + prod / 100);
				_putchar('0' + (prod - 100) / 100);
				_putchar('0' + prod % 10);
			}
			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
