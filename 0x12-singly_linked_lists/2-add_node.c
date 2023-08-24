#include "lists.h"
/**
 * _strlen - to return to string length
 * @s: character
 * Return: required value
 */
int _strlen(const char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list_t list
 * @str: element added
 * Return: address of new element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
