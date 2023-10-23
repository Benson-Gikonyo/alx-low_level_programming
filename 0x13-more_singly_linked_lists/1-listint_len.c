#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints elements of list
 * @h: head of list
 * Return: number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
