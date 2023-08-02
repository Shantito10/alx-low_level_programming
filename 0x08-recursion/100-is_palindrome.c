#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * find_pali - gets length of string
 * @n: pointer to a string
 * @r: length of a string
 * @len: length of a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int find_pali(char *n, char *r, int len)
{
	if (*n == *(r + len) && len > 1)
	{
		n++;
		return (find_pali(n, r, --len));
	}
	if (len == 1)
		return (1);
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int is_palindrome(char *s)
{
	if (*s)
		return (is_palindrome((s + 1)) + 1);
	return (0);
}
