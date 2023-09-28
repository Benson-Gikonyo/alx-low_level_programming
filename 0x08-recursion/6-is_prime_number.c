#include "main.h"

/**
* is_prime_number - returns 1 if the input integer is a prime number
* otherwise return 0.
* @n: number to be checked
* Return: 0 or 1
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (guess_prime(n, 2));
}

/**
* guess_prime - check if n is a prime number
* Description - if n is divisible by n, return 0 and add guess by 1
* recursively, else return 1
* @n: number to be checked
* @guess: value to check n with
* Return: 0 or 1
*/
int guess_prime(int n, int guess)
{
	if (n % guess == 0)
	{
		if (n == guess)
			return (1);

		else
			return (0);
	}

	return (guess_prime(n, guess + 1));
}
