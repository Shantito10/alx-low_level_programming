#include "main.h"

/**
 * _strncpy - copy two strings only taking n bytes from src
 * @dest: first string to be added to
 * @src: second string to be added
 * @n: number of bites to use from src
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (0);
}
