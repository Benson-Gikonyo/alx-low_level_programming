#include <stdio.h>
/**
 * main-print all numbers
 * of base 16 in lower case
 * followed by a new line.
 * use putchar thrice.
 * Return: 0 if successful.
 */
int main(void)
{
	int x;
	char y;

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
