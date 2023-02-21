#include "main.h"
#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci_n(50);
	return (0);
}


/**
 * fibonacci_n - print to the n-th fibonacci number
 * @n: limit to check multiples to
 *
 * Return: void
 */
void fibonacci_n(int n)
{
	unsigned long int a = 1, b = 2, c;
	int i = 3;

	if (n == 1)
	{
		printf("%lu", a);
	}
	else if (n == 2)
	{
		printf("%lu, %lu", a, b);
	}
	else
	{
		printf("%lu, %lu, ", a, b);
		while (i < n)
		{
			c = a + b;
			printf("%lu, ", c);
			a = b;
			b = c;
			i++;
		}
		c = a + b;
		printf("%lu", c);
	}

	printf("\n");
}

