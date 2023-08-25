#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _print - moves and prints string
 * @str: string
 * @l: size of string
 */
void _print(char *str, int l)
{
	int a, c;

	a = c = 0;
	while (a < l)
	{
		if (str[a] != '\0')
			c = l;
		if (c || a == l - 1)
			putchar(str[a]);
		a++;
	}
	putchar('\n');
	free(str);
}

/**
 * check_for_digits - checks for arguments to ensure that they are digits
 * @av: arguments
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - a string is initialized
 * @str: string
 * @len: length
 */
void init(char *str, int len)
{
	int x;

	for (x = 0; x < len; x++)
		str[x] = '0';
	str[x] = '\0';
}


/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > 57 || argv[x][y] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
