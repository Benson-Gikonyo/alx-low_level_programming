#include "lists.h"

/**
 * pop_listint - delete the head node and return the head node's data
 * @head: start of list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *current;
	int i;

	if (head == NULL)
		return (0);
	current = *head;
	temp = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(temp);
	}
	else
	{
		i = 0;
	}
	return (i);
}
