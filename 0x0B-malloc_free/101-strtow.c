#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* count_words - count number of words in string
* @str: string
* Return: word count
*/

int count_words(char *str)
{
	int count = 0, x, flag = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}

	return (count);
}

/**
* **strtow - splits a string into words.
* @str: string to be split
* Return: pointer to array of strings, or NULL
*/

char **strtow(char *str)
{
	int start, end, x, y = 0, str_len = 0, count, z = 0;
	char **arr, *temp;

	count = count_words(str);
	if (count == 0)
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;

	arr = (char **) malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);

	for (x = 0; x <= str_len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				end = x;
				temp = (char *) malloc(sizeof(char) * (z + 1));
				if (!temp)
					return (NULL);

				while (start < end)
					*temp++ = str[start++];

				*temp = '\0';
				arr[y] = temp - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			start = x;
	}
	arr[y] = '\0';
	return (arr);
}
