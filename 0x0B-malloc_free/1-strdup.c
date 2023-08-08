#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space memory
 * @str: duplicate of the string
 * Return: pointer to an array of char, or NULL
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)

	s = (char *)malloc(sizeof(char) * (x + 1));

	if (s == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		s[x] = '\0';

	return (s);
}
