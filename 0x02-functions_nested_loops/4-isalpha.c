#include "main.h"
/**
 * _isalpha - check if a var is a letter, upper or lower
 * case; return 1 or 0 otherwise.
 * @c : parameter for isaplha
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
