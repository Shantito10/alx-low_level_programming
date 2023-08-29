#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *count;
	size_t size;

	size = 0;

	if (head == NULL)
		return (0);

	count = head;
	current = head->next;

	while (current != NULL && current < count)
	{
		size += 1;
		printf("[%p] %i\n", (void *)count, count->n);
		count = count->next;
		current = current->next;
	}
	printf("[%p] %i\n", (void *)count, count->n);
	size += 1;
	if (current)
		printf("-> [%p] %i\n", (void *)current, current->n);

	return (size);
}
