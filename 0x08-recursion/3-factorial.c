#include "main.h"
/**
 * factorial - returns factorial of given number
 * @n: input number
 * Return: factorial number
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
