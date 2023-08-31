#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string to convert
 * Return: the converted number, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, integer;

	integer = 0;
	x = 0;
	if (!b)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		integer <<= 1;
		if (b[x] & 1)
			integer += 1;
		x += 1;
	}
	return (integer);
}
