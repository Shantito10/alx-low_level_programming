#include "main.h"

/**
 * _memset - memset function
 * @b: a constant byte.
 * @n: number of bytes.
 * @s: pointers to memory.
 *
 * Return: A pointer to memeory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n != 0; p++, n--)
		*p = b;
	return (s);
}
