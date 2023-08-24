#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - a function that frees the list_t list
 * @head: pointer to a node
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
