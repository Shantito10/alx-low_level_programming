#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of a list
 * Return: 0 or NULL if fail
 */
void free_listint2(listint_t **head)
{
	listint_t *count = *head;
	listint_t *next;

	while (count != NULL)
	{
		next = count->next;
		free(count);
		count = next;
	}
	*head = NULL;
}
