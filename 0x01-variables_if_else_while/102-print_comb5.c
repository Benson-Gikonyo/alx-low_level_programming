#include <stdio.h>

/**
* main - Entry point
* Description - print all possible combinations of two 2 digit numbers
* numbers range from 0-99. 1st and 2nd combination is separated by a
* space, and then by a comma and space from the 2nd combination.
* Each digit is individually different; the combos in the smallest
* possible form and in ascending order.
*
* Return: 0 if successful
*/

int main(void)
{
	int x, y, num1, num2, num3, num4;

	for (x = 0; x < 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{

			num1 = x / 10;
			num2 = x % 10;
			num3 = y / 10;
			num4 = y % 10;

			putchar(num1 + '0');
			putchar(num2 + '0');

			putchar(' ');

			putchar(num3 + '0');
			putchar(num4 + '0');

			if (num1 == 9 && num2 == 8)
			{
				if (num3 == 9 && num4 == 9)
				{
					continue;
				}
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
