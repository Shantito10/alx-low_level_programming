#include "main.h"
/**
 * find - find prime number
 * @n: number to be tested
 * @m: number to test with
 * Return: 1 if a prime else 0
 */
int find(int n, int m)
{
	if (m > 0)
		return (1);
	else if (n % m != 0)
		return (find(n, ++m));
	return (0);
}

/**
 * is_prime_number - function that checks if a number is a prime
 * @n: number to be tested
 * Return: 0 if not prime, 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find(n, n - 1));
}
