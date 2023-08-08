#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		ar[x] = c;
	return (ar);
}
