#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum, or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int sum = 0;

	va_start(args, n);
	for (x = 0; x < n; x++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
