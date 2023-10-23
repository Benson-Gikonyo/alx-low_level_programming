#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: start of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	for (; head;)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
