#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string to be added to
 * @src: second string to be added
 * Return: concentenated string
 */
char *_strcat(char *dest, char *src)
{
	int alphabet = 0, alphabet2 = 0;

	while (*(dest + alphabet) != '\0')
	{
		alphabet++;
	}
	while (alphabet2 >= 0)
	{
		*(dest + alphabet) = *(src + alphabet2);
		if (*(src + alphabet2) == '\0')
			break;
		alphabet++;
		alphabet2++;
	}
	return (dest);
}
