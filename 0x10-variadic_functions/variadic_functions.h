#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__

/**
 * sum_them_all - returns the sum of the variadic arguments
 *
 * @n: number of variadic arguments
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - print out the numbers passed
 *
 * @separator: what to separate the numbers with
 * @n: number of variadic arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - print out the strings passed
 *
 * @separator: what to separate the strings with
 * @n: number of variadic arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - print out anything: char, int, float, char *
 *
 * @format: description of type of arguments, number and the order
 *
 * Return: void
 */
void print_all(const char * const format, ...);

#endif /* __VARIADIC_FUNCTIONS_H__ */
