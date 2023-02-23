#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long int largest_factor = 2, n = 612852475143;

	while (n / largest_factor != 0)
	{
		if (n % largest_factor == 0)
		{
			n /= largest_factor;
		}
		else
		{
			largest_factor += 1;
		}
	}

	printf("%lu\n", largest_factor);
	return (0);
}
