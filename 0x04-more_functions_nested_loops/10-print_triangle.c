#include "main.h"

/**
 * print_triangle - print out a triangle of size n with '#'
 * @n: size of the triangle
 *
 * Return: void
 */
void print_triangle(int n)
{
	int i = 0, j;

	if (n <= i)
	{
		_putchar('\n');
	}
	while (i++ < n)
	{
		j = 0;
		while (j++ < n - i)
			_putchar(' ');
		while (j++ <= n)
			_putchar('#');
		_putchar('\n');
	}
}
