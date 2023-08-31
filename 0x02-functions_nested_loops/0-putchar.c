#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description - prints _putchar, followed by a new line.
*
* Return: 0 if successful
*/

int main(void)
{
	char str[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar (str[x]);
	}
	_putchar ('\n');

	return (0);
}
