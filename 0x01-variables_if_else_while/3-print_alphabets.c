#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'c'; letter <= 'x'; letter++)
		putchar(letter);

	for (letter = 'C'; letter <= 'X'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
