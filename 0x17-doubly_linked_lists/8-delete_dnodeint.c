#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (x < index - 1 && current != NULL)
	{
		current = current->next;
		x++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next->next;
	if (temp)
		temp->prev = current;
	free(current->next);
	current->next = temp;

	return (1);
}
