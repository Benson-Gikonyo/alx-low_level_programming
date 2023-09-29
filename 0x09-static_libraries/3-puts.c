#include "main.h"

/**
* _puts - prints a string, followed by a new line, to stdout.
* @str: string to be printed
* Return: void
*/

void _puts(char *str)
{
	int x = 0;
	int len = 0;
	int y;

	while (str[x] != '\0')
	{
		len++;
		x++;
	}

	for (y = 0; y < len; y++)
		_putchar (str[y]);

	_putchar ('\n');
}
