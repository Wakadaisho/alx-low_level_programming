#include "main.h"
#include <stdio.h>

/**
 * main - sum of all the multiples
 *		of 3 and 5, below 1024 (excluded)
 *
 * Return: Always 0
 */
int main(void)
{
	print_natural_n(1024);
	return (0);
}


/**
 * print_natural_n - sum of all the multiples
 *		of 3 and 5, below 1024 (excluded)
 * @n: limit to check multiples to
 *
 * Return: void
 */
void print_natural_n(int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
}

