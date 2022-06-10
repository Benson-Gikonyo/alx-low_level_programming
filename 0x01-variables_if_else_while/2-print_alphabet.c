#include <stdio.h>

/**
 * main-Prints the alphabet in
 * lower case, from a-z, followed
 * by a new line.
 * Using putchar() twice
 * Return: 0 if successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
