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
	char *p;

	p = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	printf("%s", p);
}
