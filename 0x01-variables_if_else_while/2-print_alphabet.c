#include <stdio.h>

/**
* main - Entry point
* Description - print the alphabet in lowercase
*
* Return: 0 if successful
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
	putchar('\n');

	return (0);
}
