#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a parameter
 * @array: array of elements
 * @size: size of the array
 * @action: ponter to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;
	while (size--)
		action(*array++);
}
