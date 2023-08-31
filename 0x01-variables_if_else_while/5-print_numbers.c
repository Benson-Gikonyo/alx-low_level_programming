#include <stdio.h>

/**
* main - Entry point
* Description - print all single digit numbers of base 10 starting from 0,
* followed by a new line.
*
* Return: 0 if successful
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar (x + '0');
	}
	putchar('\n');

	return (0);
}
