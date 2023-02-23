#include "main.h"

/**
 * print_line - print out a line of length n with '_'
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i++ < n)
	{
		_putchar('_');
	}
	_putchar('\n');
}
