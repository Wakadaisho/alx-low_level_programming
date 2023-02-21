#include "main.h"

/**
 * print_last_digit - returns the absolute value of a number
 * @n: whole number value
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = (n < 0 ? (n % 10) * -1 : n % 10);

	_putchar('0' + last_digit);

	return (last_digit);
}

