#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: the char to initialize the array with
 * Return: Pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int b;

	if (size == 0)
		return (NULL);

	ar + malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		ar[b] = c;
	return (ar);
}
