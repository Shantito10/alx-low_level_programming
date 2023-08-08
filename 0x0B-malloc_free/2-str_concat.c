#include "main.h"
#include <stdlib.h>
/**
 * str_concat - contenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to contenates strings or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, z;
	char *str;

	x = y = 0;
	if (s1 != NULL)
		for (x = 0; s1[x]; x++)
			;
	if (s2 != NULL)
		for (y = 0; s2[y]; y++)
			;

	str = malloc(sizeof(char) * (x + y + 1));
	if (str == NULL)
		return (NULL);

	z = 0;
	while (z < (x + y))
	{
		if (z < x)
			str[z] = s1[z];
		else
			str[z] = s2[z - x];

		z++;
	}
	str[z] = 0;

	return (str);
}
