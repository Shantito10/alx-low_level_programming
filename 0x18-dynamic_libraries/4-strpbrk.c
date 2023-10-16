#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: first occurrence in the string
 * @accept: any bytes in the string
 * Return: pointer to byte s that matches one of bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
