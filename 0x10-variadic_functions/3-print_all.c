#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
* print_char - print character
* @args: argument to print
* Return: nothing
*/

void print_char (va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_int - print interger
* @args: argument to print
* Return: nothing
*/

void print_int (va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_float - print float double
* @args: argument to print
* Return: nothing
*/

void print_float (va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
* print_string - print string
* @args: argument to print
* Return: nothing
*/

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (!str)
		str = "(nil)";
	puts(str);
}


/**
* print_all - print anything
* @format: number of arguments
* Return: nothimg
*/


void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int x = 0, y = 0;
	char *separator1 = " ";

	arg_t arg_ts[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && *(format + x) != '\0')
	{
		while (y < 4)
		{
			if (*(format + x) == *(arg_ts[y]).format)
			{
				printf("%s", separator1);
				arg_ts[y].function(args);
				separator1 = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");

	va_end(args);
}
