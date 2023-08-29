#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of a list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *count;

	previous = NULL;
	count = NULL;

	while (*head != NULL)
	{
		count = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = count;
	}
	*head = previous;
	return (*head);
}
