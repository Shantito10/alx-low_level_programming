#include "lists.h"

/**
 * free_list - a function that frees the list_t list
 * @head: pointer to a node
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
