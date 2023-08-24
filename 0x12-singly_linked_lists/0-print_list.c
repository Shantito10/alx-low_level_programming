#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
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
 * print_list - prints all the elements of a list_t list
 * @h: singly linked lists
 * Return: number of elements in a list
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
