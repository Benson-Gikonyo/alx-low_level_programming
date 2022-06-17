#include <stdio.h>
#include "main.h"
/**
 * main - compute sum of all natural numbers
 * below 1024 and prints the sum followed by a
 * new line that are multiples of 3 & 5.
 * Return: 0 if successful
 */
int main(void)
{
	int x;
	unsigned long int sum, y, z;

	z = 0;
	y = 0;
	sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0)
		{
			y += x;
		}
		else if ((x % 5) == 0)
		{
			z += x;
		}
	}
	sum = z + y;
	printf("%lu\n", sum);
	return (0);
}
