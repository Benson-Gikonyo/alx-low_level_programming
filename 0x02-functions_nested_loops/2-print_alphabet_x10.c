#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - print the alphabet 10 times in
* lowercase, followed by a new line.
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar (y);
		}
		_putchar ('\n');
	}
}
