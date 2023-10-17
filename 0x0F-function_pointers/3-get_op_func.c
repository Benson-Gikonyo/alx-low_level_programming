#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* get_op_func - assigns operation based on user input
* @s: user string input
* Return: pointer to function or null.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6 && strlen(s) < 2)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
