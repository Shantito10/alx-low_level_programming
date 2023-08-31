#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	int x;

	x = 2;

	if (x & 1)
		return (0);
	else
		return (1);
}
