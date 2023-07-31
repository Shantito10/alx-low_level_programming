#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: input pointer
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, b;

	for (i = 0 ; i < 8 ; i++)
	{
		for (b = 0 ; b < 8 ; b++)
		{
			_putchar(*((*a + i * 8) + b));
		}
		_putchar('\n');
	}
}
