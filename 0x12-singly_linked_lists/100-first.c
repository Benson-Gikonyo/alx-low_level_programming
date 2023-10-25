#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void print_first(void) __attribute__((constructor));

/**
 * print_first - print statement before main
 *
 * Return: void
 */

void print_first(void)
{
	printf("You're the best! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
