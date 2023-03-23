#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - print out anything: char, int, float, char *
 *
 * @format: description of type of arguments, number and the order
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, n;
	char *str;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	n = strlen(format);
	va_start(args, format);
	while (i < n)
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str == NULL ? "(nil)" : str);
				break;
			default:
				i++;
				continue;
		}
		if (*(format + ++i) == '\0')
			continue;
		printf(", ");
	}
	printf("\n");
	va_end(args);
}
