#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int j = 0;

	while (j >= 0)
	{
		if (str[j] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
}
