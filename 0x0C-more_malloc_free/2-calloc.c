#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory to an array, using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		str[x] = 0;

	return (str);
}
