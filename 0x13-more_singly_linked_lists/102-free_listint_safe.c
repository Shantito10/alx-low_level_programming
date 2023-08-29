#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: head of a list
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		size++;
	}
	*h = NULL;

	return (size);
}
