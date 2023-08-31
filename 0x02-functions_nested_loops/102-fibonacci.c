#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	long x = 1, y = 2, next, count;

	printf("%ld, %ld, ", x, y);

	for (count = 3; count <= 50; count++)
	{
		next = x + y;
		printf("%ld", next);

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
