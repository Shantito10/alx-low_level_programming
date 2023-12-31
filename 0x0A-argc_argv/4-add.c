#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, z, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (z = 0; argv[a][z] != '\0'; z++)
		{
			if (!isdigit(argv[a][z]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
