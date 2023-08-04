#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int alphabet = 0, alphabet2 = 0;

	while (*(dest + alphabet) != '\0')
	{
		alphabet++;
	}

	while (alphabet2 < n)
	{
		*(dest + alphabet) = *(src + alphabet2);
		if (*(src + alphabet2) == '\0')
			break;
		alphabet++;
		alphabet2++;
	}
	return (dest);
}
