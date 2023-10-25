#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: start
 * @index: point to delete
 * Return: 1(success) -1(failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int counter;

	if (!head || !*head)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (counter = 0; counter < (index - 1); counter++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (-1);
	}
	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}
