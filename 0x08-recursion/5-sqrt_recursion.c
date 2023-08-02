#include "main.h"
/**
 * find_sqrt - helps sqrt function find sqrt
 * @n: the number to find sqrt
 * @m: sqrt of n
 * Return: natural sqrt of n or -1
 */
int find_sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (find_sqrt(n, ++m));
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: natural sqrt of n
 */
int _sqrt_recursion(int n)
{
	int m = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, m));
}
