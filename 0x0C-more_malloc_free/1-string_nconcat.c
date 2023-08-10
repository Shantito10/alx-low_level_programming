#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concat of string 2
 * Return: pointer to allocated memory, NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, z;

	y = z = 0;
	if (s1)
		for (; s1[y]; y++)
			;
	if (s2)
		for (; s2[z]; z++)
			;
	if (!(n >= z))
		z = n;

	str = malloc(sizeof(char) * (y + z) + 1);
	if (!str)
		return (NULL);

	for (x = 0; x < (y + z); x++)
	{
		if (x < y)
			str[x] = s1[x];
		else
			str[x] = s2[x - y];
	}

	str[x] = '\0';

	return (str);
}
