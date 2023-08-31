#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print all natural numbers from n to 98.
* Description -  separate numbers with a comma and space.
* The numbers should be in ascending order, starting from n
* to 98 included.
*
* @n: starting number.
*
* Return: void
*/

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d", x);
			}
		}
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d", x);
			}
		}

	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
