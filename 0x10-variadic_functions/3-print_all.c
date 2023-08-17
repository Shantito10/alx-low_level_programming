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
	va_list args;
	unsigned int x = 0;
	char *str;

	va_start(args, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int));
					break;
			case 'i':
				printf("%d", va_arg(args, int));
					break;
			case 'f':
				printf("%f", va_arg(args, double));
					break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		if (format[x + 1] && (format[x] == 'c' ||
					format[x] == 'i' || format[x] == 'f' || format[x] == 's'))
		x++;
	}
	va_end(args);
}

