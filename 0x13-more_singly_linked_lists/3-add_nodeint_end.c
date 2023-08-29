#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head of a list
 * @n: new element
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *count;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	count = *head;

	while (count->next != NULL)
		count = count->next;
	count->next = new_node;

	return (new_node);
}
