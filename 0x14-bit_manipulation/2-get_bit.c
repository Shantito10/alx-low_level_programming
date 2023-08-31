#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value of bit
 * @index: index of bit
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
