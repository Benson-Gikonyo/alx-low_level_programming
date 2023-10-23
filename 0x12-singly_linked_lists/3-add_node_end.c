#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node at end of list
 * @head: start of list
 * @str: string
 * Return: new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count;
	list_t *new_list, *temp;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	for (count = 0; str[count]; count++)
		;
	new_list->str = strdup(str);
	new_list->len = count;
	new_list->next = NULL;

	if ((*head) == NULL)
		(*head) = new_list;
	else
	{
		temp = *head;
		for (; temp->next;)
			temp = temp->next;

		temp->next = new_list;
	}
	return (new_list);
}
