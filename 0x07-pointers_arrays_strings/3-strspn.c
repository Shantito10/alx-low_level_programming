#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, c, k;

	for (c = 0; s[c] != '\0' && c == count; c++)
		for (k = 0; accept[c] != '\0'; k++)
			if (s[c] == accept[k])
				count++;

	return (count);
}
