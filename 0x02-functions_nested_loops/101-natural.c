#include <stdio.h>
#include "main.h"

/**
 * main - Prints natural numbers below 1024 that are multiplies of 3 or 5
 *
 * Return: 0 (success) 1(fails)
 */

int main(void)
{
	int x;
	int sum;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
