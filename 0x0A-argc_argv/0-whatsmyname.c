#include <stdio.h>

/**
 * main - prints its name followed by new line
 * @argc: number of command arguments
 * @argv: array that contains program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
