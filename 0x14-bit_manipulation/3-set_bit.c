#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: value of bit
 * @index: index of bit
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
