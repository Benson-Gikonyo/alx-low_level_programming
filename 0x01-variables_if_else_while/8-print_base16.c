#include <stdio.h>

/**
* main - Entry point
* Description - print all numbers of base 16 in lowercase,
* fllowed by a new line.
*
* Return: 0 if successful.
*/

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	for (y = 'a'; y < 'g'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
