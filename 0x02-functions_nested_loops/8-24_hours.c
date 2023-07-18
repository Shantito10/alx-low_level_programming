#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */

void jack_bauer(void)
{
	int x, y, z, k;

	for (x = '0'; x <= '2'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z < '6'; z++)
			{
				for (k = '0'; k <= '9'; k++)
				{
					if ((x == '2') && (y >= '4'))
						continue;
					_putchar(x);
					_putchar(y);
					_putchar(':');
					_putchar(z);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
}
