#include <stdio.h>

/**
* main - Entry point
* Description - print all possible combinations of 3 digits
* digits must be individually different, in the smallest
* possible combination, and in ascending order
*
* Return: 0 if successful
*/

int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x == 7 && y == 8 && z == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
