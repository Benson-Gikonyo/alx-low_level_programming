#include <stdio.h>
#include "main.h"

/**
* _isdigit - checks if c is a number between 0 -9
* Description: return 1 if c is a number else 0
*
* @c:  parameter to be checked
*
* Return: 1 or 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);

}
