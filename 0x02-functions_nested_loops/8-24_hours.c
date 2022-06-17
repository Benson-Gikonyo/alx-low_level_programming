#include "main.h"
/**
 * jack_bauer -  prints every minute of jackbauers day
 * Return: void
 */
void jack_bauer(void)
{
	/* declaring hours, minutes and counter */
	int hr1, hr2;
	int min1, min2;
	int x = 9;

	hr2 = 0;
	while (hr2 <= 2)
	{
		if (hr2 == 2)
		{
			x = 3;
		}

		hr1 = 0;
		while (hr1 <= x)
		{
			min2 = 0;
			while (min2 <= 5)
			{
				min1 = 0;
				while (min1 <= 9)
				{
					_putchar('0' + hr2);
					_putchar('0' + hr1);
					_putchar(':');
					_putchar('0' + min2);
					_putchar('0' + min1);
					_putchar('\n');
					min1++;
				}
				min2++;
			}
			hr1++;
		}
		hr2++;
	}
}
