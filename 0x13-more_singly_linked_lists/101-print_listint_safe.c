#include "lists.h"
/**
 * free_listp - frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *current;
	listp_t *count;

	if (head != NULL)
	{
		count = *head;
		while ((current = count) != NULL)
		{
			count = count->next;
			free(current);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	listint_t *prev, *previous, *previously;

	prev = NULL;
	while (head != NULL)
	{
		previous = malloc(sizeof(listp_t));

		if (previous == NULL)
			exit(98);

		previous->p = (void *)head;
		previous->next = prev;
		prev = previous;

		previously = prev;

		while (previously->next != NULL)
		{
			previously = previously->next;
			if (head == previously->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&prev);
				return (size);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		size++;
	}
	free_listp(&prev);
	return (size);
}
