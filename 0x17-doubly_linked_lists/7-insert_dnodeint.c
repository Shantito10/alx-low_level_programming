#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head
 * @idx: index where node is added
 * @n: data for the new node
 * Return: address of the new node, or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int x = 0;

	if (h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	while (x < idx - 1 && current != NULL)
	{
		current = current->next;
		x++;
	}
	if (x != idx - 1)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	new->prev = current;
	if (current->next)
		current->next->prev = new;
	current->next = new;

	return (new);
}
