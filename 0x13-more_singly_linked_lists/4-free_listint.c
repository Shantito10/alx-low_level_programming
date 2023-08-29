#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of a list
 * Return: 0 or NULL if failed
 */
void free_listint(listint_t *head)
{
	listint_t *count;

	while (head != NULL)
	{
		count = head;
		head = head->next;
		free(count);
	}
}
