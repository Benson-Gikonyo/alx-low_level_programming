#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: the number to compute the square root from.
* Return: the square root or -1 if n doesnt have a natural root.
*/

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	else
	{
		return (guess_root(n, 1));
	}
}

/**
* guess_root - compute the square root of n
* @n: number to compute
* @root: guessing number to start square root computation
* Return: root or n
*/
int guess_root(int n, int root)
{
	if (n == 0 || n == 1)
		return (n);

	else if (n / root ==  root)
		return (root);

	else if (n / root > root)
		return (guess_root(n, root + 1));

	else if (n / root < root)
		return (guess_root(n, root - 1));

	return (guess_root(n, root));
}
