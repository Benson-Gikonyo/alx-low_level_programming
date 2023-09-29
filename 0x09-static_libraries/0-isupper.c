#include <stdio.h>
#include "main.h"

/**
* _isupper - checks if c is an uppercase character
* Description -  return 1 if uppercase, else 0
* @c: parameter to be checked
*
* Return: 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
