#include <stdio.h>

/**
* main - Entry point
* Description - print all possible different combinations of two digits.
* Numbers are 2 digits each, separated by a space and comma,
* and are in ascending order.
*
* Return: 0 if successful
*/

int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x == 8 && y == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
