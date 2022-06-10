#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-assign a random number to n
 * test the last digit against a number
 * the  print out the result.
 * Return: 0 if successful
 */
int main(void)
{
	int n, y;

	n = rand() - RAND_MAX / 2;
	y =  n % 10;
	printf("Last digit of %d is %d ", n, y);
	if (y > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (y == 0)
	{
		printf("and is 0\n");
	}
	else if (y < 10 && y != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
