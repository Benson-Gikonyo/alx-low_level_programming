#include "main.h"

/**
* _atoi -  convert a string to an integer.
* Description - number in the string can be preceded by an
* infinite number of characters
* take into account all the - and + signs before the number
* If there are no numbers in the string, the function must return 0
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
* @s: string to be converted
* Return: interger from s
*/

int _atoi(char *s)
{
	int x = 0;
	int num1 = 0;
	int finalnum = 0;
	int sign = 0;
	int check = 0;

	while (s[x] != '\0')
	{
		if (s[x] == 45)
		{
			sign++;
		}

		else if (s[x] >= 48 && s[x] <= 57)
		{
			num1 = s[x] - 48;

			if (sign % 2 != 0)
				num1 = -num1;

			finalnum = finalnum * 10 + num1;

			check = 1;

			if (s[x + 1] < 48 || s[x + 1] > 57)
				break;
			check = 0;
		}
		x++;
	}
	if (check == 0)
		return (0);

	return (finalnum);
}
