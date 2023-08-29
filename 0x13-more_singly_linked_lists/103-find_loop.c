#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of a start list
 * Return: address of the node where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *prev;

	start = prev = head;

	while (start && prev && prev->next)
	{
		start = start->next;
		prev = prev->next->next;

		if (start == prev)
		{
			start = head;
			break;
		}
	}
	if (!start || !prev || !prev->next)
		return (NULL);
	while (start != prev)
	{
		start = start->next;
		prev = prev->next;
	}
	return (prev);
}
