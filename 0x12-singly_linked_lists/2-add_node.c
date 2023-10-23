#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node at start of list
 * @head: start of list
 * @str: string to duplicate
 * Return: new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	int len = 0;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	for (; str[len]; len++)
	{
		;
	}
	new_list->str = strdup(str);
	new_list->len = len;
	new_list->next = *head;
	*head = new_list;
	return (new_list);
}
