#ifndef _CALC_H_
#define _CALC_H_
#include <stddef.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - return the sum of two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: integer
 */
int op_add(int a, int b);

/**
 * op_sub - return the difference between two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: integer
 */
int op_sub(int a, int b);

/**
 * op_mul - return the multiple of two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: integer
 */
int op_mul(int a, int b);

/**
 * op_div - return the integer ratio of two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: integer
 */
int op_div(int a, int b);

/**
 * op_mod - return the mod value betwen two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: integer
 */
int op_mod(int a, int b);

/**
 * get_op_func - return a function corresponding to an operator
 *
 * @s: operator to match a function to
 *
 * Return: int (*)(int, int) - function that was as a binary operator
 */
int (*get_op_func(char *s))(int, int);

#endif /* _CALC_H_ */
