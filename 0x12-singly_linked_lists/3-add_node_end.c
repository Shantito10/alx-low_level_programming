#include "lists.h"
/**
 * _strlen - get the length og the string
 * @str: string
 * Return: returns length
 */
unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
