#include "main.h"
/**
 * print_alphabet- print the alohabet in lower case, folowed by a new line.
 * Return: 0 if successful.
 */
void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		_putchar(lett);
	}
	_putchar('\n');
}
