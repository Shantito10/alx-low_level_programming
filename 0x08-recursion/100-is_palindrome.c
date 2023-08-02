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
  * find_pali - find length of string
  * @s: string
  * @y: length of string
  * @x: length of string
  * Return: return 0 if not palindrome, 1 if it is
  */
int find_pali(char *s, int y, int x)
{
	if (*(s + y) == *(s + x))
	{
		if (y == x || y == x + 1)
			return (1);
		return (0 + find_pali(s, y + 1, x - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: 0 if not palindrome, 1 if it is
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (find_pali(s, 0, _strlen_recursion(s) - 1));
}
