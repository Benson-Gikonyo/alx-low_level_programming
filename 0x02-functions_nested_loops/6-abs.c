#include <stdio.h>
#include "main.h"

/**
* _abs - compute the absolute value of a number
* @x: parameter number to be checked
*
* Return: int
*/

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x == 0)
	{
		return (x);
	}
	else
	{
		x = x * -1;
		return (x);
	}
}
