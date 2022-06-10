#include <stdio.h>
/**
 * main- print the alphabet except
 * q and e, in lowercase using
 * putchar().
 * Return: 0 if successful
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar ('\n');
	return (0);
}
