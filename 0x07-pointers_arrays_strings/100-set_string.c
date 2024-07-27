#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: initial pointer
 * @to: new pointer to update
 * Return: void
 */

void set_string(char **s, char *to)
{
    *s = to;
}