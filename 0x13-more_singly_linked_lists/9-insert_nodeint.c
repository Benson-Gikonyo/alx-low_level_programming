#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at position
 * @head: start
 * @idx: index to add at
 * @n: variable
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = ptr;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
		if (!ptr)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
