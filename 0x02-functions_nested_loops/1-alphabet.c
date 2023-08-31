#include <stdio.h>
#include "main.h"

/**
* print_alphabet - print the alphabet in lowercase, followed
* by a new line
*
* Return: 0 if successful
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar (x);
	}
	_putchar ('\n');
}
