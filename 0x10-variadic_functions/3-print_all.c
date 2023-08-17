#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_all - prints anything
 * @format: list of all types of argmunets passed to function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int x = 0, j, y = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[x])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[x] == t_arg[j] && y)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), y = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), y = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), y = 1;
			break;
		case 's':
			str = va_arg(valist, char *), y = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			x++;
		}
		printf("\n"), va_end(valist);
	}
}
