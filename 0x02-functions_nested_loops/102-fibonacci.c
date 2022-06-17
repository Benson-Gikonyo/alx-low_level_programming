#include <stdio.h>
/**
 * main - prog that prints 1st 50 fibonacci numbers
 * followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	long int x, y, z, sum;

	y = 1;
	z = 2;

	for (x = 0; x < 50; x++)
	{
		if (x < 49)
		{
			printf("%ld, ", y);
		}
		else
		{
			printf("%ld\n", y);
		}
		sum = y + z;
		y = z;
		z = sum;
	}
	return (0);
}
