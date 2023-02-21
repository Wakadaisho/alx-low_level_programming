#include "main.h"
#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci_n(98);
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
	unsigned long long int a = 1, b = 2, c;
	int i = 3;

	if (n == 1)
	{
		printf("%llu", a);
	}
	else if (n == 2)
	{
		printf("%llu, %llu", a, b);
	}
	else
	{
		printf("%llu, %llu, ", a, b);
		while (i < n)
		{
			c = a + b;
			printf("%llu, ", c);
			a = b;
			b = c;
			i++;
		}
		c = a + b;
		printf("%llu", c);
	}

	printf("\n");
}

