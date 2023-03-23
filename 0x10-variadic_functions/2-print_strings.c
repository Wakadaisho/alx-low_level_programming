#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print out the strings passed
 *
 * @separator: what to separate the strings with
 * @n: number of variadic arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *s = separator == NULL ? "" : separator;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	while (i < n - 1)
	{
		str = va_arg(args, char *);
		printf("%s%s", str == NULL ? "(nil)" : str, s);
		i++;
	}

	str = va_arg(args, char *);
	printf("%s\n", str == NULL ? "(nil)" : str);

	va_end(args);
}
