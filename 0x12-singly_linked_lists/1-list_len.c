#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - find length of a list
 * @h: header
 * Return: list size
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (count);

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}

	return (count + 1);
}
