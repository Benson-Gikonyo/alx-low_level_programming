#include "lists.h"

/**
 * sum_listint - sum of list
 * @head: start
 * Return: 0(empty) sum otherwise
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
