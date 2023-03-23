#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print out the numbers passed
 *
 * @separator: what to separate the numbers with
 * @n: number of variadic arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *s = separator == NULL ? "" : separator;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	while (i < n - 1)
	{
		printf("%i%s", va_arg(args, int), s);
		i++;
	}

	printf("%i\n", va_arg(args, int));

	va_end(args);
}
