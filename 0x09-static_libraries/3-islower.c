#include <stdio.h>
#include "main.h"

/**
* _islower - checks parameter for a lowercase character
*
* @c:  parameter
*
* Return: 1 if successful, else 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
