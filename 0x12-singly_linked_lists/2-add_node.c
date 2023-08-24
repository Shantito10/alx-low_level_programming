#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list_t list
 * @str: element added
 * Return: address of new element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	char *copy_str;
	list_t *ret_list;
	unsigned int x;

	ret_list = malloc(sizeof(list_t));
	if (ret_list == NULL)
		return (NULL);
	copy_str = strdup(str);
	for (x = 0; str[x] != '\0';)
		x += 1;

	ret_list->str = copy_str;
	ret_list->next = *head;
	ret_list->len = x;
	*head = ret_list;

	return (*head);
}
