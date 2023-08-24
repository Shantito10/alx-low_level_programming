#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked lists
 * Return: number of elements in a list
 */
size_t print_list(const list_t *h)
{
	unsigned int size;

	size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		size += 1;
	}

	return (size);
}
