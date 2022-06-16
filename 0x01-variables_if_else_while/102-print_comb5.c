#include <stdio.h>
/**
 * main-program that prints all possible combinations
 * of 2 digit numbers, from 0 to 99. numbers are printed
 * in 2 digits , in ascending order.
 * use putchar 8 times. no char.
 * Return: 0 if successful.
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 98; x++)
	{
		for (y = x + 1; y < 99; y++)
		{
			/*print first pair of numbers- x */
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');

			putchar(' ');

			/* print 2nd pair of numbers - y */
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x == 98 && y == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');

	return (0);
}
