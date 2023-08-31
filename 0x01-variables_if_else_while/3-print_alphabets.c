#include <stdio.h>

/**
* main - Entry point
* Description - print the alphabet in lowercase, then in uppercase,
* followed by a new line
*
* Return: 0 if successful
*/

int main(void)
{
	int x, y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
