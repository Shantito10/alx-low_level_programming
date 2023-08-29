#include "lists.h"

/**
 * pop_listint - deletes head node of lintint_t and returns head nodes data
 * @head: head of a list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int current;
	listint_t *count;

	if (!(*head) || NULL)
		return (0);

	count = (*head)->next;
	current = (*head)->n;
	free(*head);
	*head = count;

	return (current);
}
