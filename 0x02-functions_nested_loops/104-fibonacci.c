#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long x = 1, y = 2;
	unsigned long next, count;

	printf("%lu, %lu, ", x, y);

	for (count = 3; count <= 98; count++)
	{
		next = x + y;
		printf("%lu", next);

		if (count < 50)
		{
			printf(", ");
		}

		x = y;
		y = next;
	}
	printf("\n");
	return (0);
}
