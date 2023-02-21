#include "main.h"
#include <stdio.h>
#include <inttypes.h>

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
	uint64_t a = 1, b = 2, c;
	uint64_t large_n = n;
	uint64_t i = 3;


	if (n == 1)
	{
		printf("%" PRIu64 "", a);
	}
	else if (n == 2)
	{
		printf("%" PRIu64 ", ", a);
		printf("%" PRIu64 "", b);
	}
	else
	{
		printf("%" PRIu64 ", ", a);
		printf("%" PRIu64 ", ", b);
		while (i < large_n)
		{
			c = a + b;
			printf("%" PRIu64 ", ", c);
			a = b;
			b = c;
			i++;
		}
		c = a + b;
		printf("%" PRIu64 "", c);
	}

	printf("\n");
}

