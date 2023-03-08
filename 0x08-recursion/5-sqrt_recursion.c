#include "main.h"

/**
* _test_root - test numbers as possible operands
*		for a perfect square
* @n: possible perfect square
* @r: possible square operand
*
* Return:	-1 if not perfect square
*		r if perfect square
*/
int _test_root(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (_test_root(n, r + 1));
}

/**
* _sqrt_recursion - finds the square root of a number
* @n: the number to find the square root of
*
* Return: integer, square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_test_root(n, 0));
}
