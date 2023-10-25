#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: start
 * Return: pointer to head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *ptr;

	if (*head == NULL)
		return (NULL);
	ptr = *head;
	while (ptr->next)
	{
		temp = ptr->next;
		ptr->next = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
