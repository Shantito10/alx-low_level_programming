#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements
 * @h: linked lists
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h)
	{
		h = h->next;
		elements += 1;
	}
	return (elements);
}
