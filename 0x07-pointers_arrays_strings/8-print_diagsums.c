#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: square matrix of intergers.
 * @size: size of intergers
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int x;
	int sum = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum += a[(size * x) + x];
		sum2 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sum, sum2);
}
