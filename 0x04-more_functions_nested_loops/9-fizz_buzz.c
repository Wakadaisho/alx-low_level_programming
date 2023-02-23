#include <stdio.h>

/**
 * main - FizzBuzz; prints:
 *		Fizz for multiples of 3
 *		FizzBuzz for multiples of 5
 *		FizzBuzz for multiples of 3 and 5
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 && i % 5)	/* Divisible by neither */
		{
			printf("%d ", i);
		}
		else
		{
			printf("%s%s ", i % 3 ? "" : "Fizz", i % 5 ? "" : "Buzz");
		}
	}

	if (i % 3 && i % 5)
	{
		printf("%d\n", i);
	}
	else
	{
		printf("%s%s\n", i % 3 ? "" : "Fizz", i % 5 ? "" : "Buzz");
	}
	return (0);
}
