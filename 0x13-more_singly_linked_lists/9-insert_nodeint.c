#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of a list
 * @idx: index where new node should be added, starts with 0
 * @n: node to be added
 * Return: address of new node or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int c;

	current = *head;

	if (idx != 0)
	{
		for (c = 0; c < idx - 1 && current != NULL; c++)
		{
			current = current->next;
		}
	}
	if (current == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
