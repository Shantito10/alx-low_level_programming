#include "main.h"

/**
 * _islower - checks if input is lowercase
 * @c: variable to determine if input is lowercase
 * main - uses built in function
 * Return: 0 if succesful
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
