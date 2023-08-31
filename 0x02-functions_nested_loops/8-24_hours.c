#include <stdio.h>
#include "main.h"

/**
* jack_bauer - print every minute of the day, from 00:00 to 23:59
*
* Return: void
*/

void jack_bauer(void)
{
	int hr, h1, h2, min, m1, m2;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			h1 = hr / 10;
			h2 = hr % 10;
			m1 = min / 10;
			m2 = min % 10;

			_putchar (h1 + '0');
			_putchar (h2 + '0');
			_putchar (':');
			_putchar (m1 + '0');
			_putchar (m2 + '0');
			_putchar ('\n');

			if (hr == 23 && min == 59)
			{
				continue;
			}
		}
	}
}
