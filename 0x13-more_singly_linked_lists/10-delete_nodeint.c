#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: head of a list
 * @index: index of the node
 * Return: 1, or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y;
	listint_t *current;
	listint_t *previous;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		previous = (*head)->next;
		free(*head);
		*head = previous;
		return (1);
	}
	current = *head;
	for (y = 0; y < index - 1; y++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	previous = current->next;
	current->next = previous->next;
	free(previous);
	return (1);
}
