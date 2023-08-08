#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments a program
 * @ac: argument count
 * @av: arguments
 * Return: pointer to new string, or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int x, y, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (x = 0; x < ac; x++)
	{
		temp = *(av + x);
		for (y = 0; temp[y]; y++)
		{
			length++;
		}
		length += 1;
	}
	str = malloc(sizeof(char) * length + 1);
	length = 0;
	for (x = 0; x < ac; x++)
	{
		temp = *(av + x);
		for (y = 0; temp[y]; ++y)
		{
			str[length] = temp[y];
			length++;
		}
			str[length] = '\n';
			length++;
	}
	str[length] = '\0';
	return (str);
}
