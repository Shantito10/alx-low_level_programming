#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, x;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (!ptr)
		return (NULL);
	for (x = 0; (min + x) <= max; x++)
		ptr[x] = (min + x);

	return (ptr);
}
