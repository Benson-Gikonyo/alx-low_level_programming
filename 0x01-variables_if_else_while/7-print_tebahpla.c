#include <stdio.h>
/**
 * main- prints the lowercase alphabet
 * in reverse, followed by
 * a new line. Use putchar
 * twice only.
 * Return: 0 if successful.
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
