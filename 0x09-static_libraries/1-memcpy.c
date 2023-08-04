#include "main.h"

/**
 * _memcpy - function that copies from and to memory area
 * @dest: destination for copying
 * @src: source of the bytes to copy
 * @n: number of bytes
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
