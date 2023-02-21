#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print a range of numbers till 98
 * @n: start of range
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i, step = n < 98 ? 1 : -1;

	for (i = n; i != 98; i += step)
	{
		printf("%d, ", i);
	}

	printf("98\n");
}

