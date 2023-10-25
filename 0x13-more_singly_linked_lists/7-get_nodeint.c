#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node
 * @head: start
 * @index: node to return
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
}
