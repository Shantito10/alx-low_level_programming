#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	for (; n > 0; n--)
	_putchar('_');
	_putchar('\n');
}
