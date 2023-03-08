#include "main.h"

/**
* _test_prime - test numbers as possible factors for a number
* @p: possible prime number
* @f: possible factor
*
* Return:	0 if a factor is found
*		1 no factor is found, meaning prime
*/
int _test_prime(int p, int f)
{
	if (f == 1)
		return (1);
	if (p % f == 0)
		return (0);

	return (_test_prime(p, f - 1));
}

/**
* is_prime_number - finds whether a number is prime
* @n: the number to find the prime identity of
*
* Return: integer, 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	/* /2 because no number greater than n/2 is a factor of n */
	return (_test_prime(n, n / 2));
}
