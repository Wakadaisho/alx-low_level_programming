#include "main.h"
#include <stdio.h>

/**
 * main - print sum of the even-valued fibonacci terms
 *		not exceeding 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci_sum(4000000);
	return (0);
}


/**
 * fibonacci_sum - sum of the even-valued fibonacci terms
 * @n: limit the term values to consider
 *
 * Return: an integer, the n-th fibonacci number
 */
void fibonacci_sum(int n)
{
	int a = 1, b = 2, c, sum;

	if (n == 1)
	{
		sum = 0;
	}
	else if (n == 2)
	{
		sum = 2;
	}
	else
	{
		sum = 2;
		while (c < n)
		{
			c = a + b;

			a = b;
			b = c;

			if (c % 2 == 0)
			{
				sum += c;
			}
		}
	}

	printf("%d\n", sum);
}

