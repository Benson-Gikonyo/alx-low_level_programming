#include <stdio.h>

/**
* main - Entry point
* Description - print sizes of multiple datatypes
*
* Return: 0 if successful
*/

int main(void)
{
	int x;
	char y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %zu byte(s)\n", sizeof(y));
	printf("Size of an int: %zu byte(s)\n", sizeof(x));
	printf("Size of a long int: %zu byte(s)\n", sizeof(z));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(a));
	printf("Size of a float: %zu byte(s)\n", sizeof(b));

	return (0);
}
