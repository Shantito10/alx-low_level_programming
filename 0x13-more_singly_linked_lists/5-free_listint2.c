#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of a list
 * Return: 0 or NULL if fail
 */
void free_listint2(listint_t **head)
{
	listint_t *count;

	while (*head != NULL)
	{
		count = *head;
		*head = (*head)->next;
		free(count);
	}
}
