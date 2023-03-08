#include "main.h"

/**
* factorial - finds the factorial of a number using recursion
* @n: factorial operand
*
* Return: factorial value of a number as an integer
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
