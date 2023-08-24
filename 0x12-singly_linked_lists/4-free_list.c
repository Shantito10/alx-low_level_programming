#include "lists.h"

/**
 * free_list - a function that frees the list_t list
 * @head: pointer to a node
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
