#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int b;
	char c;

	b = 0;
	while (b < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		b++;
	}
}
