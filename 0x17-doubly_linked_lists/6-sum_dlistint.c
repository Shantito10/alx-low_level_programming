#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n)
 * of a dlistint_t linked list
 * @head: pointer to a head
 * Return: sum of all the data (n) or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
