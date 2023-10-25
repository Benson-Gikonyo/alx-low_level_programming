#include "lists.h"

/**
 * add_nodeint_end - print node at end of list
 * @head: list
 * @n: integer to add
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = ptr;

	return (*head);
}

