#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x,
 * followed by a new line.
 * Return : 0 if successful
 */
void print_alphabet_x10(void)
{
	char lett;
	int x;

	for (x = 0; x < 10 ; x++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
		{
			_putchar(lett);
		}
		_putchar('\n');
	}
}
