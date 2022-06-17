#include "main.h"
/**
 * times_table - prints the 9 times table,
 * starting with 0.
 * Return: void
 */
void times_table(void)
{
	int x = 0;
	int y;
	int prod;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			prod = x * y;
			if (y == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar('0' + prod);
			}
			else
			{
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			y++;
		}
		_putchar('\n');
		x++;
	}
}
