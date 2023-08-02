#include "main.h"
/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s)
		return (is_palindrome((s + 1)) + 1);
	return (0);
}
