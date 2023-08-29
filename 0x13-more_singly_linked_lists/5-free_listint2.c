#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *count;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((count = current) != NULL)
		{
			current = current->next;
			free(count);
		}
		*head = NULL;
	}
}
