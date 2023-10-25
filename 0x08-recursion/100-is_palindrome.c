#include <stdio.h>
#include "main.h"

/**
* _strlen_recursion - gets length of string
* @str: string
* Return: length of string, else 0
*/

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_recursion(str + 1));
}

/**
* check_if_pal - check if word is palindrome
* @str: string /word
* @x: iterative variable
* @str_len: length of string
* Return: 1 (+ve), else 0
*/

int check_if_pal(char *str, int x, int str_len)
{
	if (*(str + x) != *(str + str_len - 1))
		return (0);
	if (x >= str_len)
		return (1);
	return (check_if_pal(str, x + 1, str_len - 1));
}

/**
* is_palindrome - checks if word is palindrome
* @s: string/word
* Return: 1 (+ve), else 0
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_if_pal(s, 0, _strlen_recursion(s)));
}
