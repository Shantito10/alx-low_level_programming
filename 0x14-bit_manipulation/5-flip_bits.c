#include "main.h"

/**
 * flip_bits - returns num of bits you would flip
 * @n: first flip bits
 * @m: seconf flip bits
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}
	return (bits);
}
