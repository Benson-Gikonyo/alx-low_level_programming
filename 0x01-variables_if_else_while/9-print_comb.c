#include <stdio.h>
/**
 * main-print all possible combinations of single digit numbers
 * all numbers must be separated by a comma ',' and space
 * all numbers should be in ascending order
 * use putchar 4 times at most
 * no char type
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
