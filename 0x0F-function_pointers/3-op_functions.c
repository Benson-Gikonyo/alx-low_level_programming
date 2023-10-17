#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add -  add 2 numbers
* @a: number 1
* @b: number 2
* Return: sum of numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtract 2 numbers
* @a: number 1
* @b: number 2
* Return: difference of numbers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply 2 numbers
* @a: number 1
* @b: number 2
* Return: product of numbers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div -  divide 2 numbers
* @a: number 1
* @b: number 2
* Return: dividend of numbers
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - get reminder of  2 numbers
* @a: number 1
* @b: number 2
* Return: reminder of a/b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
