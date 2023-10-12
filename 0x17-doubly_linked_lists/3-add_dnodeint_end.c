#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t list
 * @head: pointer to a pointer to head of doubly linked list
 * @n: the data for the new node
 * Return: address of new node, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
		new->prev = end;
	}
	return (new);
}
