#include <stdio.h>

/**
* main - Entry point
* Description - print the alphabet in lowercase, in reverse,
* followed by a new line.
*
* Return: 0 if successful
*/

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar (x);
	}
	putchar('\n');

	return (0);
}
