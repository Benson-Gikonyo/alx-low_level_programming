#include <stdio.h>

/**
* main - Entry point
* Description - print the alphabet in lowercase, except q and e, followed by
* a new line
*
* Return: 0 if successful
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar (x);
		}
	}
	putchar('\n');

	return (0);
}
