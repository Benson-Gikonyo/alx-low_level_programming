#include <stdio.h>

/**
* main - Entry point
* Description - print all possible combinations of single digit numbers,
* in ascending order, separated by a comma and space, followed by a new
* line.
*
* Return: 0 if successful
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
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
