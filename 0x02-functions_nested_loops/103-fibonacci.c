#include <stdio.h>

/**
 * main - print sum of even numbers in fabonicci sequence
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = 1, y = 2, z, total = 0;

	while (y <= 4000000)
	{
		if (y % 2 == 0)
		{
			total += y;
		}
		z = x + y;
		x = y;
		y = z;
	}
	printf("%d\n", total);
	return (0);
}
