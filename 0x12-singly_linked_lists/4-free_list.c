#include "lists.h"

/**
 * free_list - a function that frees the list_t list
 * @head: pointer to a node
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		if (head->str)
			free(head->str);
		free(head);
	}
}
